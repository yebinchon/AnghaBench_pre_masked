
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int recheckCurItem; int queryCategories; int queryValues; int extra_data; int nuserentries; int query; int strategy; int entryRes; int collation; int triConsistentFmgrInfo; } ;
typedef scalar_t__ GinTernaryValue ;
typedef TYPE_1__* GinScanKey ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static bool
FUNC_5(GinScanKey VAR_1)
{
 GinTernaryValue VAR_2;

 VAR_2 = FUNC_0(FUNC_1(
                VAR_1->triConsistentFmgrInfo,
                VAR_1->collation,
                FUNC_2(VAR_1->entryRes),
                FUNC_3(VAR_1->strategy),
                VAR_1->query,
                FUNC_4(VAR_1->nuserentries),
                FUNC_2(VAR_1->extra_data),
                FUNC_2(VAR_1->queryValues),
                FUNC_2(VAR_1->queryCategories)));
 if (VAR_2 == VAR_0)
 {
  VAR_1->recheckCurItem = 1;
  return 1;
 }
 else
 {
  VAR_1->recheckCurItem = 0;
  return VAR_2;
 }
}
