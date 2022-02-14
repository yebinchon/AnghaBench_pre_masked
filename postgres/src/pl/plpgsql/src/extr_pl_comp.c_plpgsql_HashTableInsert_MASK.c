
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int key; TYPE_2__* function; } ;
typedef TYPE_1__ plpgsql_HashEnt ;
struct TYPE_5__ {int * fn_hashkey; } ;
typedef TYPE_2__ PLpgSQL_function ;
typedef int PLpgSQL_func_hashkey ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,void*,int ,int*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_2(PLpgSQL_function *VAR_3,
      PLpgSQL_func_hashkey *VAR_4)
{
 plpgsql_HashEnt *VAR_5;
 bool VAR_6;

 VAR_5 = (plpgsql_HashEnt *) FUNC_1(VAR_2,
            (void *) VAR_4,
            VAR_0,
            &VAR_6);
 if (VAR_6)
  FUNC_0(VAR_1, "trying to insert a function that already exists");

 VAR_5->function = VAR_3;

 VAR_3->fn_hashkey = &VAR_5->key;
}
