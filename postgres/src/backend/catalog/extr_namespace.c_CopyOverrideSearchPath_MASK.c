
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int addTemp; int addCatalog; int schemas; } ;
typedef TYPE_1__ OverrideSearchPath ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;

OverrideSearchPath *
FUNC_2(OverrideSearchPath *VAR_0)
{
 OverrideSearchPath *VAR_1;

 VAR_1 = (OverrideSearchPath *) FUNC_1(sizeof(OverrideSearchPath));
 VAR_1->schemas = FUNC_0(VAR_0->schemas);
 VAR_1->addCatalog = VAR_0->addCatalog;
 VAR_1->addTemp = VAR_0->addTemp;

 return VAR_1;
}
