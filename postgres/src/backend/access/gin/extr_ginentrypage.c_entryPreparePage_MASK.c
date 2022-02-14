
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int entry; scalar_t__ isDelete; } ;
typedef int Page ;
typedef int OffsetNumber ;
typedef int IndexTuple ;
typedef TYPE_1__ GinBtreeEntryInsertData ;
typedef int GinBtree ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void
FUNC_7(GinBtree VAR_1, Page VAR_2, OffsetNumber VAR_3,
     GinBtreeEntryInsertData *VAR_4, BlockNumber VAR_5)
{
 FUNC_0(VAR_4->entry);
 FUNC_0(!FUNC_1(VAR_2));

 if (VAR_4->isDelete)
 {
  FUNC_0(FUNC_2(VAR_2));
  FUNC_6(VAR_2, VAR_3);
 }

 if (!FUNC_2(VAR_2) && VAR_5 != VAR_0)
 {
  IndexTuple VAR_6 = (IndexTuple) FUNC_4(VAR_2, FUNC_5(VAR_2, VAR_3));

  FUNC_3(VAR_6, VAR_5);
 }
}
