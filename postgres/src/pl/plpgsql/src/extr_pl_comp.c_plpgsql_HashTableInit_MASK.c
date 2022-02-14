
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int plpgsql_HashEnt ;
typedef int ctl ;
struct TYPE_4__ {int keysize; int entrysize; } ;
typedef int PLpgSQL_func_hashkey ;
typedef TYPE_1__ HASHCTL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (char*,int ,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int * VAR_3 ;

void
FUNC_3(void)
{
 HASHCTL VAR_4;


 FUNC_0(VAR_3 == ((void*)0));

 FUNC_2(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.keysize = sizeof(PLpgSQL_func_hashkey);
 VAR_4.entrysize = sizeof(plpgsql_HashEnt);
 VAR_3 = FUNC_1("PLpgSQL function hash",
         VAR_0,
         &VAR_4,
         VAR_2 | VAR_1);
}
