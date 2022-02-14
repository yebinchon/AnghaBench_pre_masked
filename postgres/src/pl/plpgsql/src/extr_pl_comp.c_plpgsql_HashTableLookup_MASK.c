
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * function; } ;
typedef TYPE_1__ plpgsql_HashEnt ;
typedef int PLpgSQL_function ;
typedef int PLpgSQL_func_hashkey ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,void*,int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static PLpgSQL_function *
FUNC_1(PLpgSQL_func_hashkey *VAR_2)
{
 plpgsql_HashEnt *VAR_3;

 VAR_3 = (plpgsql_HashEnt *) FUNC_0(VAR_1,
            (void *) VAR_2,
            VAR_0,
            ((void*)0));
 if (VAR_3)
  return VAR_3->function;
 else
  return ((void*)0);
}
