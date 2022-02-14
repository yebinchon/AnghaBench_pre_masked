
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int addTemp; int addCatalog; int * schemas; } ;
typedef TYPE_1__ OverrideSearchPath ;
typedef int MemoryContext ;
typedef int List ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int * FUNC_4 (int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 () ;

OverrideSearchPath *
FUNC_7(MemoryContext VAR_4)
{
 OverrideSearchPath *VAR_5;
 List *VAR_6;
 MemoryContext VAR_7;

 FUNC_6();

 VAR_7 = FUNC_1(VAR_4);

 VAR_5 = (OverrideSearchPath *) FUNC_5(sizeof(OverrideSearchPath));
 VAR_6 = FUNC_3(VAR_2);
 while (VAR_6 && FUNC_2(VAR_6) != VAR_1)
 {
  if (FUNC_2(VAR_6) == VAR_3)
   VAR_5->addTemp = 1;
  else
  {
   FUNC_0(FUNC_2(VAR_6) == VAR_0);
   VAR_5->addCatalog = 1;
  }
  VAR_6 = FUNC_4(VAR_6);
 }
 VAR_5->schemas = VAR_6;

 FUNC_1(VAR_7);

 return VAR_5;
}
