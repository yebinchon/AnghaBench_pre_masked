
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int entry; scalar_t__ isDelete; } ;
typedef scalar_t__ Size ;
typedef int Page ;
typedef int OffsetNumber ;
typedef int ItemIdData ;
typedef int IndexTuple ;
typedef TYPE_1__ GinBtreeEntryInsertData ;
typedef int GinBtree ;
typedef int Buffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static bool
FUNC_8(GinBtree VAR_0, Buffer VAR_1, OffsetNumber VAR_2,
       GinBtreeEntryInsertData *VAR_3)
{
 Size VAR_4 = 0;
 Size VAR_5;
 Page VAR_6 = FUNC_1(VAR_1);

 FUNC_0(VAR_3->entry);
 FUNC_0(!FUNC_2(VAR_6));

 if (VAR_3->isDelete)
 {
  IndexTuple VAR_7 = (IndexTuple) FUNC_6(VAR_6, FUNC_7(VAR_6, VAR_2));

  VAR_4 = FUNC_4(FUNC_3(VAR_7)) + sizeof(ItemIdData);
 }

 VAR_5 = FUNC_4(FUNC_3(VAR_3->entry)) + sizeof(ItemIdData);

 if (FUNC_5(VAR_6) + VAR_4 >= VAR_5)
  return 1;

 return 0;
}
