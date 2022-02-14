
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* relOid; void* dbOid; int xid; } ;
typedef TYPE_1__ xl_standby_lock ;
typedef void* Oid ;


 int FUNC_0 () ;
 int FUNC_1 (int,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_2(Oid VAR_2, Oid VAR_3)
{
 xl_standby_lock VAR_4;

 VAR_4.xid = FUNC_0();

 VAR_4.dbOid = VAR_2;
 VAR_4.relOid = VAR_3;

 FUNC_1(1, &VAR_4);
 VAR_0 |= VAR_1;
}
