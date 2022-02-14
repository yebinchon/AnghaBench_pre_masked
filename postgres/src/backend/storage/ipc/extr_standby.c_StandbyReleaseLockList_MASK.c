
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int relOid; int dbOid; int xid; } ;
typedef TYPE_1__ xl_standby_lock ;
typedef int List ;
typedef int LOCKTAG ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,char*,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(List *VAR_3)
{
 while (VAR_3)
 {
  xl_standby_lock *VAR_4 = (xl_standby_lock *) FUNC_4(VAR_3);
  LOCKTAG VAR_5;

  FUNC_3(FUNC_7(VAR_1),
    "releasing recovery lock: xid %u db %u rel %u",
    VAR_4->xid, VAR_4->dbOid, VAR_4->relOid);
  FUNC_2(VAR_5, VAR_4->dbOid, VAR_4->relOid);
  if (!FUNC_1(&VAR_5, VAR_0, 1))
  {
   FUNC_3(VAR_2,
     "RecoveryLockLists contains entry for lock no longer recorded by lock manager: xid %u database %u relation %u",
     VAR_4->xid, VAR_4->dbOid, VAR_4->relOid);
   FUNC_0(0);
  }
  FUNC_6(VAR_4);
  VAR_3 = FUNC_5(VAR_3);
 }
}
