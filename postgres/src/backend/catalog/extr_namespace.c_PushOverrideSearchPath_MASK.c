
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ addTemp; scalar_t__ addCatalog; int schemas; } ;
struct TYPE_5__ {int creationNamespace; int * searchPath; int nestLevel; } ;
typedef TYPE_1__ OverrideStackEntry ;
typedef TYPE_2__ OverrideSearchPath ;
typedef int Oid ;
typedef int MemoryContext ;
typedef int List ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int * FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_7 (int) ;

void
FUNC_8(OverrideSearchPath *VAR_9)
{
 OverrideStackEntry *VAR_10;
 List *VAR_11;
 Oid VAR_12;
 MemoryContext VAR_13;





 VAR_13 = FUNC_1(VAR_3);

 VAR_11 = FUNC_6(VAR_9->schemas);




 if (VAR_11 == VAR_1)
  VAR_12 = VAR_0;
 else
  VAR_12 = FUNC_5(VAR_11);






 if (VAR_9->addCatalog)
  VAR_11 = FUNC_4(VAR_2, VAR_11);

 if (VAR_9->addTemp && FUNC_2(VAR_7))
  VAR_11 = FUNC_4(VAR_7, VAR_11);




 VAR_10 = (OverrideStackEntry *) FUNC_7(sizeof(OverrideStackEntry));
 VAR_10->searchPath = VAR_11;
 VAR_10->creationNamespace = VAR_12;
 VAR_10->nestLevel = FUNC_0();

 VAR_8 = FUNC_3(VAR_10, VAR_8);


 VAR_5 = VAR_10->searchPath;
 VAR_4 = VAR_10->creationNamespace;
 VAR_6 = 0;

 FUNC_1(VAR_13);
}
