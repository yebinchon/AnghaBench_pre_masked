
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int maxoff; int flags; } ;
struct TYPE_13__ {scalar_t__ isBuild; } ;
struct TYPE_12__ {int off; } ;
struct TYPE_11__ {int key; } ;
typedef int Size ;
typedef TYPE_1__ PostingItem ;
typedef int Page ;
typedef int OffsetNumber ;
typedef int ItemPointerData ;
typedef int * ItemPointer ;
typedef TYPE_2__ GinBtreeStack ;
typedef TYPE_3__* GinBtree ;
typedef int Buffer ;
typedef int BlockNumber ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int ,int) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;
 TYPE_9__* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int FUNC_11 (TYPE_1__*,TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_12(GinBtree VAR_2, Buffer VAR_3,
       GinBtreeStack *VAR_4,
       void *VAR_5, BlockNumber VAR_6,
       Page *VAR_7, Page *VAR_8)
{
 Page VAR_9 = FUNC_0(VAR_3);
 OffsetNumber VAR_10 = VAR_4->off;
 int VAR_11 = FUNC_6(VAR_9)->maxoff;
 int VAR_12;
 int VAR_13;
 Size VAR_14 = FUNC_8(VAR_9);
 ItemPointerData VAR_15 = *FUNC_2(VAR_9);
 ItemPointer VAR_16;
 Page VAR_17;
 Page VAR_18;
 OffsetNumber VAR_19;
 PostingItem VAR_20[(VAR_0 / sizeof(PostingItem)) + 1];

 VAR_17 = FUNC_9(VAR_9);
 VAR_18 = FUNC_9(VAR_9);
 FUNC_4(VAR_17, FUNC_6(VAR_9)->flags, VAR_14);
 FUNC_4(VAR_18, FUNC_6(VAR_9)->flags, VAR_14);





 FUNC_11(VAR_20, FUNC_1(VAR_9, VAR_1),
     (VAR_10 - 1) * sizeof(PostingItem));

 VAR_20[VAR_10 - 1] = *((PostingItem *) VAR_5);
 FUNC_11(&VAR_20[VAR_10], FUNC_1(VAR_9, VAR_10),
     (VAR_11 - (VAR_10 - 1)) * sizeof(PostingItem));
 VAR_11++;


 FUNC_10(&VAR_20[VAR_10], VAR_6);






 if (VAR_2->isBuild && FUNC_7(VAR_9))
  VAR_19 = FUNC_5(VAR_18) / sizeof(PostingItem);
 else
  VAR_19 = VAR_11 / 2;
 VAR_12 = VAR_19;
 VAR_13 = VAR_11 - VAR_19;

 FUNC_11(FUNC_1(VAR_17, VAR_1),
     VAR_20,
     VAR_12 * sizeof(PostingItem));
 FUNC_6(VAR_17)->maxoff = VAR_12;
 FUNC_11(FUNC_1(VAR_18, VAR_1),
     &VAR_20[VAR_19],
     VAR_13 * sizeof(PostingItem));
 FUNC_6(VAR_18)->maxoff = VAR_13;




 FUNC_3(VAR_17, VAR_12 * sizeof(PostingItem));
 FUNC_3(VAR_18, VAR_13 * sizeof(PostingItem));


 VAR_16 = FUNC_2(VAR_17);
 *VAR_16 = FUNC_1(VAR_17, VAR_12)->key;


 *FUNC_2(VAR_18) = VAR_15;


 *VAR_7 = VAR_17;
 *VAR_8 = VAR_18;
}
