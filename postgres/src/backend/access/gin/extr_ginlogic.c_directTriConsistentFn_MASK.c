
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int queryCategories; int queryValues; int extra_data; int nuserentries; int query; int strategy; int entryRes; int collation; int triConsistentFmgrInfo; } ;
typedef int GinTernaryValue ;
typedef TYPE_1__* GinScanKey ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static GinTernaryValue
FUNC_5(GinScanKey VAR_0)
{
 return FUNC_0(FUNC_1(
              VAR_0->triConsistentFmgrInfo,
              VAR_0->collation,
              FUNC_2(VAR_0->entryRes),
              FUNC_3(VAR_0->strategy),
              VAR_0->query,
              FUNC_4(VAR_0->nuserentries),
              FUNC_2(VAR_0->extra_data),
              FUNC_2(VAR_0->queryValues),
              FUNC_2(VAR_0->queryCategories)));
}
