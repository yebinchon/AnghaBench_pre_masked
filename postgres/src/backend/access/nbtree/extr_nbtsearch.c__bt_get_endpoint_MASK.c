
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
struct TYPE_6__ {scalar_t__ level; } ;
struct TYPE_7__ {scalar_t__ btpo_next; TYPE_1__ btpo; } ;
typedef int Snapshot ;
typedef int Relation ;
typedef int Page ;
typedef int OffsetNumber ;
typedef scalar_t__ IndexTuple ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;
typedef TYPE_2__* BTPageOpaque ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ,scalar_t__,int ) ;
 int FUNC_15 (int ,char*,int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (char*,scalar_t__,int ) ;

Buffer
FUNC_19(Relation VAR_5, uint32 VAR_6, bool VAR_7,
     Snapshot VAR_8)
{
 Buffer VAR_9;
 Page VAR_10;
 BTPageOpaque VAR_11;
 OffsetNumber VAR_12;
 BlockNumber VAR_13;
 IndexTuple VAR_14;






 if (VAR_6 == 0)
  VAR_9 = FUNC_12(VAR_5, VAR_0);
 else
  VAR_9 = FUNC_13(VAR_5);

 if (!FUNC_2(VAR_9))
  return VAR_3;

 VAR_10 = FUNC_1(VAR_9);
 FUNC_11(VAR_8, VAR_5, VAR_10);
 VAR_11 = (BTPageOpaque) FUNC_9(VAR_10);

 for (;;)
 {






  while (FUNC_4(VAR_11) ||
      (VAR_7 && !FUNC_5(VAR_11)))
  {
   VAR_13 = VAR_11->btpo_next;
   if (VAR_13 == VAR_4)
    FUNC_15(VAR_2, "fell off the end of index \"%s\"",
      FUNC_10(VAR_5));
   VAR_9 = FUNC_14(VAR_5, VAR_9, VAR_13, VAR_0);
   VAR_10 = FUNC_1(VAR_9);
   FUNC_11(VAR_8, VAR_5, VAR_10);
   VAR_11 = (BTPageOpaque) FUNC_9(VAR_10);
  }


  if (VAR_11->btpo.level == VAR_6)
   break;
  if (VAR_11->btpo.level < VAR_6)
   FUNC_16(VAR_2,
     (FUNC_17(VAR_1),
      FUNC_18("btree level %u not found in index \"%s\"",
          VAR_6, FUNC_10(VAR_5))));


  if (VAR_7)
   VAR_12 = FUNC_8(VAR_10);
  else
   VAR_12 = FUNC_3(VAR_11);

  VAR_14 = (IndexTuple) FUNC_6(VAR_10, FUNC_7(VAR_10, VAR_12));
  VAR_13 = FUNC_0(VAR_14);

  VAR_9 = FUNC_14(VAR_5, VAR_9, VAR_13, VAR_0);
  VAR_10 = FUNC_1(VAR_9);
  VAR_11 = (BTPageOpaque) FUNC_9(VAR_10);
 }

 return VAR_9;
}
