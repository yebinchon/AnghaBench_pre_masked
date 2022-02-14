
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
typedef int off_t ;
typedef scalar_t__ XLogSegNo ;
typedef int XLogRecPtr ;
struct TYPE_6__ {int needreload; int mutex; } ;
typedef TYPE_1__ WalSnd ;
struct TYPE_7__ {scalar_t__ ws_segsize; } ;
typedef TYPE_2__ WALSegmentContext ;
struct TYPE_8__ {int ws_file; scalar_t__ ws_segno; scalar_t__ ws_off; int ws_tli; } ;
typedef scalar_t__ Size ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int,scalar_t__,scalar_t__) ;
 int FUNC_5 (int,scalar_t__,scalar_t__) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (char*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (int,scalar_t__) ;
 scalar_t__ VAR_10 ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 (char*,char*,...) ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_14 (int,int ,int ) ;
 int FUNC_15 () ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int,char*,int) ;
 TYPE_3__* VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static void
FUNC_18(WALSegmentContext *VAR_17, char *VAR_18, XLogRecPtr VAR_19, Size VAR_20)
{
 char *VAR_21;
 XLogRecPtr VAR_22;
 Size VAR_23;
 XLogSegNo VAR_24;

retry:
 VAR_21 = VAR_18;
 VAR_22 = VAR_19;
 VAR_23 = VAR_20;

 while (VAR_23 > 0)
 {
  uint32 VAR_25;
  int VAR_26;
  int VAR_27;

  VAR_25 = FUNC_8(VAR_22, VAR_17->ws_segsize);

  if (VAR_12->ws_file < 0 ||
   !FUNC_4(VAR_22, VAR_12->ws_segno, VAR_17->ws_segsize))
  {
   char VAR_28[VAR_3];


   if (VAR_12->ws_file >= 0)
    FUNC_9(VAR_12->ws_file);

   FUNC_5(VAR_22, VAR_12->ws_segno, VAR_17->ws_segsize);
   VAR_12->ws_tli = VAR_13;
   if (VAR_14)
   {
    XLogSegNo VAR_29;

    FUNC_5(VAR_16, VAR_29, VAR_17->ws_segsize);
    if (VAR_12->ws_segno == VAR_29)
     VAR_12->ws_tli = VAR_15;
   }

   FUNC_7(VAR_28, VAR_12->ws_tli, VAR_12->ws_segno, VAR_17->ws_segsize);

   VAR_12->ws_file = FUNC_0(VAR_28, VAR_5 | VAR_6);
   if (VAR_12->ws_file < 0)
   {





    if (VAR_11 == VAR_0)
     FUNC_10(VAR_2,
       (FUNC_12(),
        FUNC_13("requested WAL segment %s has already been removed",
         FUNC_6(VAR_12->ws_tli, VAR_12->ws_segno))));
    else
     FUNC_10(VAR_2,
       (FUNC_12(),
        FUNC_13("could not open file \"%s\": %m",
         VAR_28)));
   }
   VAR_12->ws_off = 0;
  }


  if (VAR_12->ws_off != VAR_25)
  {
   if (FUNC_14(VAR_12->ws_file, (off_t) VAR_25, VAR_7) < 0)
    FUNC_10(VAR_2,
      (FUNC_12(),
       FUNC_13("could not seek in log segment %s to offset %u: %m",
        FUNC_6(VAR_12->ws_tli, VAR_12->ws_segno),
        VAR_25)));
   VAR_12->ws_off = VAR_25;
  }


  if (VAR_23 > (VAR_17->ws_segsize - VAR_25))
   VAR_26 = VAR_17->ws_segsize - VAR_25;
  else
   VAR_26 = VAR_23;

  FUNC_16(VAR_9);
  VAR_27 = FUNC_17(VAR_12->ws_file, VAR_21, VAR_26);
  FUNC_15();
  if (VAR_27 < 0)
  {
   FUNC_10(VAR_2,
     (FUNC_12(),
      FUNC_13("could not read from log segment %s, offset %u, length %zu: %m",
       FUNC_6(VAR_12->ws_tli, VAR_12->ws_segno),
       VAR_12->ws_off, (Size) VAR_26)));
  }
  else if (VAR_27 == 0)
  {
   FUNC_10(VAR_2,
     (FUNC_11(VAR_1),
      FUNC_13("could not read from log segment %s, offset %u: read %d of %zu",
       FUNC_6(VAR_12->ws_tli, VAR_12->ws_segno),
       VAR_12->ws_off, VAR_27, (Size) VAR_26)));
  }


  VAR_22 += VAR_27;

  VAR_12->ws_off += VAR_27;
  VAR_23 -= VAR_27;
  VAR_21 += VAR_27;
 }
 FUNC_5(VAR_19, VAR_24, VAR_17->ws_segsize);
 FUNC_1(VAR_24, VAR_8);







 if (VAR_10)
 {
  WalSnd *VAR_30 = VAR_4;
  bool VAR_31;

  FUNC_2(&VAR_30->mutex);
  VAR_31 = VAR_30->needreload;
  VAR_30->needreload = 0;
  FUNC_3(&VAR_30->mutex);

  if (VAR_31 && VAR_12->ws_file >= 0)
  {
   FUNC_9(VAR_12->ws_file);
   VAR_12->ws_file = -1;

   goto retry;
  }
 }
}
