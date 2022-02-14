
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int plpgsql_HashEnt ;
struct TYPE_3__ {int * fn_hashkey; } ;
typedef TYPE_1__ PLpgSQL_function ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,void*,int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_2(PLpgSQL_function *VAR_3)
{
 plpgsql_HashEnt *VAR_4;


 if (VAR_3->fn_hashkey == ((void*)0))
  return;

 VAR_4 = (plpgsql_HashEnt *) FUNC_1(VAR_2,
            (void *) VAR_3->fn_hashkey,
            VAR_0,
            ((void*)0));
 if (VAR_4 == ((void*)0))
  FUNC_0(VAR_1, "trying to delete function that does not exist");


 VAR_3->fn_hashkey = ((void*)0);
}
