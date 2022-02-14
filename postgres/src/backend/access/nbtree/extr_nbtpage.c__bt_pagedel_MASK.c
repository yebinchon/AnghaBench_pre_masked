
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ btpo_prev; scalar_t__ btpo_next; } ;
struct TYPE_13__ {int pivotsearch; } ;
typedef int Relation ;
typedef int Page ;
typedef int ItemId ;
typedef int IndexTuple ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;
typedef int * BTStack ;
typedef TYPE_1__* BTScanInsert ;
typedef TYPE_2__* BTPageOpaque ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 scalar_t__ FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 scalar_t__ FUNC_13 (TYPE_2__*) ;
 scalar_t__ FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ) ;
 scalar_t__ FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ,scalar_t__,int ) ;
 int FUNC_21 (int ,int ,int *) ;
 TYPE_1__* FUNC_22 (int ,int ) ;
 int FUNC_23 (int ,int ) ;
 int * FUNC_24 (int ,TYPE_1__*,int *,int ,int *) ;
 int FUNC_25 (int ,int ,int*) ;
 int FUNC_26 (int ,int ) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (char*) ;
 int FUNC_29 (char*,int ) ;

int
FUNC_30(Relation VAR_6, Buffer VAR_7)
{
 int VAR_8 = 0;
 BlockNumber VAR_9;
 bool VAR_10;
 Page VAR_11;
 BTPageOpaque VAR_12;
 BTStack VAR_13 = ((void*)0);

 for (;;)
 {
  VAR_11 = FUNC_2(VAR_7);
  VAR_12 = (BTPageOpaque) FUNC_17(VAR_11);





  if (!FUNC_10(VAR_12))
  {
   if (FUNC_9(VAR_12))
    FUNC_26(VAR_4,
      (FUNC_27(VAR_3),
       FUNC_29("index \"%s\" contains a half-dead internal page",
        FUNC_18(VAR_6)),
       FUNC_28("This can be caused by an interrupted VACUUM in version 9.3 or older, before upgrade. Please REINDEX it.")));
   FUNC_23(VAR_6, VAR_7);
   return VAR_8;
  }
  if (FUNC_13(VAR_12) || FUNC_11(VAR_12) || FUNC_8(VAR_12) ||
   FUNC_6(VAR_12) <= FUNC_16(VAR_11) ||
   FUNC_7(VAR_12))
  {

   FUNC_0(!FUNC_9(VAR_12));

   FUNC_23(VAR_6, VAR_7);
   return VAR_8;
  }






  if (!FUNC_9(VAR_12))
  {
   if (!VAR_13)
   {
    BTScanInsert VAR_14;
    ItemId VAR_15;
    IndexTuple VAR_16;
    Buffer VAR_17;
    BlockNumber VAR_18;

    VAR_15 = FUNC_15(VAR_11, VAR_5);
    VAR_16 = FUNC_4((IndexTuple) FUNC_14(VAR_11, VAR_15));

    VAR_18 = VAR_12->btpo_prev;





    FUNC_5(VAR_7, VAR_2);







    if (!FUNC_12(VAR_12))
    {
     BTPageOpaque VAR_19;
     Page VAR_20;

     VAR_17 = FUNC_20(VAR_6, VAR_18, VAR_0);
     VAR_20 = FUNC_2(VAR_17);
     VAR_19 = (BTPageOpaque) FUNC_17(VAR_20);
     if (VAR_19->btpo_next == FUNC_1(VAR_7) &&
      FUNC_7(VAR_19))
     {
      FUNC_19(VAR_7);
      FUNC_23(VAR_6, VAR_17);
      return VAR_8;
     }
     FUNC_23(VAR_6, VAR_17);
    }


    VAR_14 = FUNC_22(VAR_6, VAR_16);

    VAR_14->pivotsearch = 1;
    VAR_13 = FUNC_24(VAR_6, VAR_14, &VAR_17, VAR_0, ((void*)0));

    FUNC_23(VAR_6, VAR_17);





    FUNC_5(VAR_7, VAR_1);
    continue;
   }

   if (!FUNC_21(VAR_6, VAR_7, VAR_13))
   {
    FUNC_23(VAR_6, VAR_7);
    return VAR_8;
   }
  }






  VAR_10 = 0;
  while (FUNC_9(VAR_12))
  {

   if (!FUNC_25(VAR_6, VAR_7, &VAR_10))
   {

    return VAR_8;
   }
   VAR_8++;
  }

  VAR_9 = VAR_12->btpo_next;

  FUNC_23(VAR_6, VAR_7);





  FUNC_3();
  if (!VAR_10)
   break;

  VAR_7 = FUNC_20(VAR_6, VAR_9, VAR_1);
 }

 return VAR_8;
}
