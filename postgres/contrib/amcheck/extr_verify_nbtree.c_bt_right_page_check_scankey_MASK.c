
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int level; } ;
struct TYPE_13__ {TYPE_1__ btpo; int btpo_next; } ;
struct TYPE_12__ {int rel; int target; } ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef int ItemId ;
typedef scalar_t__ IndexTuple ;
typedef TYPE_2__ BtreeCheckState ;
typedef int BlockNumber ;
typedef int * BTScanInsert ;
typedef TYPE_3__* BTPageOpaque ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_2__*,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int * FUNC_11 (int ,scalar_t__) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*,char*,int ,...) ;
 int FUNC_16 (TYPE_2__*,int ) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static BTScanInsert
FUNC_18(BtreeCheckState *VAR_2)
{
 BTPageOpaque VAR_3;
 ItemId VAR_4;
 IndexTuple VAR_5;
 BlockNumber VAR_6;
 Page VAR_7;
 OffsetNumber VAR_8;


 VAR_3 = (BTPageOpaque) FUNC_9(VAR_2->target);


 if (FUNC_5(VAR_3))
  return ((void*)0);
 VAR_6 = VAR_3->btpo_next;
 for (;;)
 {
  FUNC_0();

  VAR_7 = FUNC_16(VAR_2, VAR_6);
  VAR_3 = (BTPageOpaque) FUNC_9(VAR_7);

  if (!FUNC_3(VAR_3) || FUNC_5(VAR_3))
   break;


  VAR_6 = VAR_3->btpo_next;
  FUNC_12(VAR_0,
    (FUNC_13(VAR_1),
     FUNC_15("level %u leftmost page of index \"%s\" was found deleted or half dead",
      VAR_3->btpo.level, FUNC_10(VAR_2->rel)),
     FUNC_14("Deleted page found when building scankey from right sibling.")));


  FUNC_17(VAR_7);
 }
 VAR_8 = FUNC_8(VAR_7);




 if (FUNC_4(VAR_3) && VAR_8 >= FUNC_2(VAR_3))
 {

  VAR_4 = FUNC_7(VAR_2, VAR_6, VAR_7,
           FUNC_2(VAR_3));
 }
 else if (!FUNC_4(VAR_3) &&
    VAR_8 >= FUNC_1(FUNC_2(VAR_3)))
 {




  VAR_4 = FUNC_7(VAR_2, VAR_6, VAR_7,
           FUNC_1(FUNC_2(VAR_3)));
 }
 else
 {





  FUNC_12(VAR_0,
    (FUNC_13(VAR_1),
     FUNC_15("%s block %u of index \"%s\" has no first data item",
      FUNC_4(VAR_3) ? "leaf" : "internal", VAR_6,
      FUNC_10(VAR_2->rel))));
  return ((void*)0);
 }





 VAR_5 = (IndexTuple) FUNC_6(VAR_7, VAR_4);
 return FUNC_11(VAR_2->rel, VAR_5);
}
