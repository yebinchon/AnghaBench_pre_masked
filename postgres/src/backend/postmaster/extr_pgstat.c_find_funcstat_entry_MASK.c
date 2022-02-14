
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PgStat_BackendFunctionEntry ;
typedef int Oid ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,void*,int ,int *) ;
 int * VAR_1 ;

PgStat_BackendFunctionEntry *
FUNC_1(Oid VAR_2)
{
 if (VAR_1 == ((void*)0))
  return ((void*)0);

 return (PgStat_BackendFunctionEntry *) FUNC_0(VAR_1,
                (void *) &VAR_2,
                VAR_0, ((void*)0));
}
