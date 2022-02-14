
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int hash_ctl ;
struct TYPE_4__ {int keysize; int entrysize; } ;
typedef int PLyProcedureKey ;
typedef int PLyProcedureEntry ;
typedef TYPE_1__ HASHCTL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void
FUNC_2(void)
{
 HASHCTL VAR_3;

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.keysize = sizeof(PLyProcedureKey);
 VAR_3.entrysize = sizeof(PLyProcedureEntry);
 VAR_2 = FUNC_0("PL/Python procedures", 32, &VAR_3,
           VAR_1 | VAR_0);
}
