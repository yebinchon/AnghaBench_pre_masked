
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
typedef scalar_t__ pg_time_t ;
struct TYPE_7__ {int Write; int Flush; } ;
typedef TYPE_2__ XLogwrtRqst ;
typedef int XLogRecPtr ;
struct TYPE_9__ {int Write; int Flush; } ;
struct TYPE_6__ {int Write; int Flush; } ;
struct TYPE_8__ {int* xlblocks; int XLogCacheBlck; char* pages; int lastSegSwitchLSN; int info_lck; TYPE_1__ LogwrtRqst; TYPE_5__ LogwrtResult; scalar_t__ lastSegSwitchTime; } ;
typedef int Size ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;
 scalar_t__ VAR_3 ;
 TYPE_5__ VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 () ;
 int FUNC_7 (int,int ,scalar_t__) ;
 int FUNC_8 (int,int ,scalar_t__) ;
 int VAR_10 ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 () ;
 scalar_t__ FUNC_11 (int ) ;
 TYPE_4__* VAR_11 ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 (int ,int*,int) ;
 int FUNC_14 (int ,int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int) ;
 scalar_t__ FUNC_17 (int,scalar_t__) ;
 int FUNC_18 (int ,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 () ;
 int FUNC_21 (char*,int ,scalar_t__,int) ;
 scalar_t__ VAR_12 ;
 int FUNC_22 (scalar_t__,int ) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_23 (scalar_t__,char*,int,scalar_t__) ;
 int FUNC_24 () ;
 int FUNC_25 (int ) ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_26 (int *) ;
 scalar_t__ VAR_16 ;

__attribute__((used)) static void
FUNC_27(XLogwrtRqst VAR_17, bool VAR_18)
{
 bool VAR_19;
 bool VAR_20;
 bool VAR_21;
 bool VAR_22;
 int VAR_23;
 int VAR_24;
 int VAR_25;
 uint32 VAR_26;


 FUNC_0(VAR_1 > 0);




 VAR_4 = VAR_11->LogwrtResult;
 VAR_24 = 0;
 VAR_25 = 0;
 VAR_26 = 0;






 VAR_23 = FUNC_16(VAR_4.Write);

 while (VAR_4.Write < VAR_17.Write)
 {





  XLogRecPtr VAR_27 = VAR_11->xlblocks[VAR_23];

  if (VAR_4.Write >= VAR_27)
   FUNC_18(VAR_5, "xlog write request %X/%X is past end of log %X/%X",
     (uint32) (VAR_4.Write >> 32),
     (uint32) VAR_4.Write,
     (uint32) (VAR_27 >> 32), (uint32) VAR_27);


  VAR_4.Write = VAR_27;
  VAR_19 = VAR_17.Write < VAR_4.Write;

  if (!FUNC_7(VAR_4.Write, VAR_14,
        VAR_16))
  {




   FUNC_0(VAR_24 == 0);
   if (VAR_13 >= 0)
    FUNC_12();
   FUNC_8(VAR_4.Write, VAR_14,
       VAR_16);


   VAR_22 = 1;
   VAR_13 = FUNC_13(VAR_14, &VAR_22, 1);
  }


  if (VAR_13 < 0)
  {
   FUNC_8(VAR_4.Write, VAR_14,
       VAR_16);
   VAR_13 = FUNC_15(VAR_14);
  }


  if (VAR_24 == 0)
  {

   VAR_25 = VAR_23;
   VAR_26 = FUNC_17(VAR_4.Write - VAR_10,
           VAR_16);
  }
  VAR_24++;







  VAR_20 = VAR_17.Write <= VAR_4.Write;

  VAR_21 = !VAR_19 &&
   (VAR_26 + VAR_24 * VAR_10) >= VAR_16;

  if (VAR_20 ||
   VAR_23 == VAR_11->XLogCacheBlck ||
   VAR_21)
  {
   char *VAR_28;
   Size VAR_29;
   Size VAR_30;
   int VAR_31;


   VAR_28 = VAR_11->pages + VAR_25 * (Size) VAR_10;
   VAR_29 = VAR_24 * (Size) VAR_10;
   VAR_30 = VAR_29;
   do
   {
    VAR_12 = 0;
    FUNC_25(VAR_9);
    VAR_31 = FUNC_23(VAR_13, VAR_28, VAR_30, VAR_26);
    FUNC_24();
    if (VAR_31 <= 0)
    {
     if (VAR_12 == VAR_2)
      continue;
     FUNC_19(VAR_5,
       (FUNC_20(),
        FUNC_21("could not write to log file %s "
         "at offset %u, length %zu: %m",
         FUNC_14(VAR_8, VAR_14),
         VAR_26, VAR_30)));
    }
    VAR_30 -= VAR_31;
    VAR_28 += VAR_31;
    VAR_26 += VAR_31;
   } while (VAR_30 > 0);

   VAR_24 = 0;
   if (VAR_21)
   {
    FUNC_22(VAR_13, VAR_14);


    FUNC_6();

    VAR_4.Flush = VAR_4.Write;

    if (FUNC_10())
     FUNC_9(VAR_14);

    VAR_11->lastSegSwitchTime = (pg_time_t) FUNC_26(((void*)0));
    VAR_11->lastSegSwitchLSN = VAR_4.Flush;
    if (VAR_3 && FUNC_11(VAR_14))
    {
     (void) FUNC_1();
     if (FUNC_11(VAR_14))
      FUNC_3(VAR_0);
    }
   }
  }

  if (VAR_19)
  {

   VAR_4.Write = VAR_17.Write;
   break;
  }
  VAR_23 = FUNC_2(VAR_23);


  if (VAR_18 && VAR_24 == 0)
   break;
 }

 FUNC_0(VAR_24 == 0);




 if (VAR_4.Flush < VAR_17.Flush &&
  VAR_4.Flush < VAR_4.Write)

 {





  if (VAR_15 != VAR_6 &&
   VAR_15 != VAR_7)
  {
   if (VAR_13 >= 0 &&
    !FUNC_7(VAR_4.Write, VAR_14,
         VAR_16))
    FUNC_12();
   if (VAR_13 < 0)
   {
    FUNC_8(VAR_4.Write, VAR_14,
        VAR_16);
    VAR_13 = FUNC_15(VAR_14);
   }

   FUNC_22(VAR_13, VAR_14);
  }


  FUNC_6();

  VAR_4.Flush = VAR_4.Write;
 }
 {
  FUNC_4(&VAR_11->info_lck);
  VAR_11->LogwrtResult = VAR_4;
  if (VAR_11->LogwrtRqst.Write < VAR_4.Write)
   VAR_11->LogwrtRqst.Write = VAR_4.Write;
  if (VAR_11->LogwrtRqst.Flush < VAR_4.Flush)
   VAR_11->LogwrtRqst.Flush = VAR_4.Flush;
  FUNC_5(&VAR_11->info_lck);
 }
}
