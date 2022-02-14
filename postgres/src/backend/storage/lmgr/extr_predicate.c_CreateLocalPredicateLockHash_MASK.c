
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int hash_ctl ;
struct TYPE_4__ {int keysize; int entrysize; } ;
typedef int PREDICATELOCKTARGETTAG ;
typedef int LOCALPREDICATELOCK ;
typedef TYPE_1__ HASHCTL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int * FUNC_2 (char*,int ,TYPE_1__*,int) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_3(void)
{
 HASHCTL VAR_4;


 FUNC_0(VAR_2 == ((void*)0));
 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.keysize = sizeof(PREDICATELOCKTARGETTAG);
 VAR_4.entrysize = sizeof(LOCALPREDICATELOCK);
 VAR_2 = FUNC_2("Local predicate lock",
           VAR_3,
           &VAR_4,
           VAR_1 | VAR_0);
}
