
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int xact; } ;
struct TYPE_4__ {TYPE_1__ btpo; } ;
typedef int Relation ;
typedef int Page ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;
typedef TYPE_2__* BTPageOpaque ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,scalar_t__) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ) ;
 scalar_t__ FUNC_14 () ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ,char*) ;

Buffer
FUNC_21(Relation VAR_5, BlockNumber VAR_6, int VAR_7)
{
 Buffer VAR_8;

 if (VAR_6 != VAR_4)
 {

  VAR_8 = FUNC_10(VAR_5, VAR_6);
  FUNC_5(VAR_8, VAR_7);
  FUNC_15(VAR_5, VAR_8);
 }
 else
 {
  bool VAR_9;
  Page VAR_10;

  FUNC_0(VAR_7 == VAR_0);
  for (;;)
  {
   VAR_6 = FUNC_4(VAR_5);
   if (VAR_6 == VAR_3)
    break;
   VAR_8 = FUNC_10(VAR_5, VAR_6);
   if (FUNC_3(VAR_8))
   {
    VAR_10 = FUNC_1(VAR_8);
    if (FUNC_17(VAR_10))
    {
     if (FUNC_14() && FUNC_11(VAR_5) &&
      !FUNC_8(VAR_10))
     {
      BTPageOpaque VAR_11 = (BTPageOpaque) FUNC_7(VAR_10);

      FUNC_16(VAR_5, VAR_6, VAR_11->btpo.xact);
     }


     FUNC_18(VAR_10, FUNC_2(VAR_8));
     return VAR_8;
    }
    FUNC_20(VAR_1, "FSM returned nonrecyclable page");
    FUNC_19(VAR_5, VAR_8);
   }
   else
   {
    FUNC_20(VAR_1, "FSM returned nonlockable page");

    FUNC_12(VAR_8);
   }
  }
  VAR_9 = !FUNC_9(VAR_5);

  if (VAR_9)
   FUNC_6(VAR_5, VAR_2);

  VAR_8 = FUNC_10(VAR_5, VAR_4);


  FUNC_5(VAR_8, VAR_0);







  if (VAR_9)
   FUNC_13(VAR_5, VAR_2);


  VAR_10 = FUNC_1(VAR_8);
  FUNC_0(FUNC_8(VAR_10));
  FUNC_18(VAR_10, FUNC_2(VAR_8));
 }


 return VAR_8;
}
