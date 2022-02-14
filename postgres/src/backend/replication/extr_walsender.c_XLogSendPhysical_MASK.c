
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32 ;
typedef int int64 ;
typedef int activitymsg ;
typedef int XLogRecPtr ;
struct TYPE_10__ {int sentPtr; int mutex; } ;
typedef TYPE_1__ WalSnd ;
struct TYPE_12__ {int ws_file; } ;
struct TYPE_11__ {char* data; size_t len; } ;
typedef int Size ;
typedef int List ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int,int) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int ) ;
 int VAR_6 ;
 int FUNC_9 (int ,char*,int,int) ;
 int VAR_7 ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,char*,int,int,int,int) ;
 int FUNC_12 (TYPE_2__*,int) ;
 scalar_t__ VAR_8 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (char*,char*,int) ;
 TYPE_2__ VAR_9 ;
 int FUNC_15 (char,char*,size_t) ;
 int FUNC_16 (TYPE_2__*,char) ;
 int FUNC_17 (TYPE_2__*,int) ;
 int * FUNC_18 (scalar_t__) ;
 int FUNC_19 (TYPE_2__*) ;
 int VAR_10 ;
 TYPE_3__* VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_20 (char*,int) ;
 int FUNC_21 (char*,int,char*,int,int) ;
 int VAR_17 ;
 int FUNC_22 (scalar_t__,int *,scalar_t__*) ;
 TYPE_2__ VAR_18 ;
 scalar_t__ VAR_19 ;

__attribute__((used)) static void
FUNC_23(void)
{
 XLogRecPtr VAR_20;
 XLogRecPtr VAR_21;
 XLogRecPtr VAR_22;
 Size VAR_23;


 if (VAR_8)
  FUNC_8(VAR_4);

 if (VAR_17)
 {
  VAR_5 = 1;
  return;
 }


 if (VAR_13)
 {





  VAR_20 = VAR_15;
 }
 else if (VAR_7)
 {
  bool VAR_24 = 0;

  VAR_20 = FUNC_3();

  if (!FUNC_5())
  {




   VAR_7 = 0;
   VAR_24 = 1;
  }
  else
  {





   if (VAR_12 != VAR_3)
    VAR_24 = 1;
  }

  if (VAR_24)
  {





   List *VAR_25;

   VAR_25 = FUNC_18(VAR_3);
   VAR_15 = FUNC_22(VAR_12, VAR_25, &VAR_14);

   FUNC_0(VAR_12 < VAR_14);
   FUNC_13(VAR_25);

   VAR_13 = 1;

   VAR_20 = VAR_15;
  }
 }
 else
 {
  VAR_20 = FUNC_2();
 }
 FUNC_4(VAR_20, FUNC_1());
 if (VAR_13 && VAR_15 <= VAR_16)
 {

  if (VAR_11->ws_file >= 0)
   FUNC_10(VAR_11->ws_file);
  VAR_11->ws_file = -1;


  FUNC_15('c', ((void*)0), 0);
  VAR_17 = 1;

  VAR_5 = 1;

  FUNC_11(VAR_0, "walsender reached end of timeline at %X/%X (sent up to %X/%X)",
    (uint32) (VAR_15 >> 32), (uint32) VAR_15,
    (uint32) (VAR_16 >> 32), (uint32) VAR_16);
  return;
 }


 FUNC_0(VAR_16 <= VAR_20);
 if (VAR_20 <= VAR_16)
 {
  VAR_5 = 1;
  return;
 }
 VAR_21 = VAR_16;
 VAR_22 = VAR_21;
 VAR_22 += VAR_1;


 if (VAR_20 <= VAR_22)
 {
  VAR_22 = VAR_20;
  if (VAR_13)
   VAR_5 = 0;
  else
   VAR_5 = 1;
 }
 else
 {

  VAR_22 -= (VAR_22 % VAR_6);
  VAR_5 = 0;
 }

 VAR_23 = VAR_22 - VAR_21;
 FUNC_0(VAR_23 <= VAR_1);




 FUNC_19(&VAR_9);
 FUNC_16(&VAR_9, 'w');

 FUNC_17(&VAR_9, VAR_21);
 FUNC_17(&VAR_9, VAR_20);
 FUNC_17(&VAR_9, 0);





 FUNC_12(&VAR_9, VAR_23);
 FUNC_9(VAR_10, &VAR_9.data[VAR_9.len], VAR_21, VAR_23);
 VAR_9.len += VAR_23;
 VAR_9.data[VAR_9.len] = '\0';




 FUNC_19(&VAR_18);
 FUNC_17(&VAR_18, FUNC_1());
 FUNC_14(&VAR_9.data[1 + sizeof(int64) + sizeof(int64)],
     VAR_18.data, sizeof(int64));

 FUNC_15('d', VAR_9.data, VAR_9.len);

 VAR_16 = VAR_22;


 {
  WalSnd *VAR_26 = VAR_2;

  FUNC_6(&VAR_26->mutex);
  VAR_26->sentPtr = VAR_16;
  FUNC_7(&VAR_26->mutex);
 }


 if (VAR_19)
 {
  char VAR_27[50];

  FUNC_21(VAR_27, sizeof(VAR_27), "streaming %X/%X",
     (uint32) (VAR_16 >> 32), (uint32) VAR_16);
  FUNC_20(VAR_27, 0);
 }

 return;
}
