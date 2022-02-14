
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int recheckCurItem; int* entryRes; int* extra_data; int* queryValues; int* queryCategories; int nuserentries; int query; int strategy; int collation; int consistentFmgrInfo; } ;
typedef TYPE_1__* GinScanKey ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static bool
FUNC_5(GinScanKey VAR_0)
{




 VAR_0->recheckCurItem = 1;

 return FUNC_0(FUNC_1(VAR_0->consistentFmgrInfo,
            VAR_0->collation,
            FUNC_2(VAR_0->entryRes),
            FUNC_3(VAR_0->strategy),
            VAR_0->query,
            FUNC_4(VAR_0->nuserentries),
            FUNC_2(VAR_0->extra_data),
            FUNC_2(&VAR_0->recheckCurItem),
            FUNC_2(VAR_0->queryValues),
            FUNC_2(VAR_0->queryCategories)));
}
