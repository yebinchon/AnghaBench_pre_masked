
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* relOid; void* dbOid; void* xid; } ;
typedef TYPE_1__ xl_standby_lock ;
typedef void* TransactionId ;
struct TYPE_7__ {int locks; void* xid; } ;
typedef TYPE_2__ RecoveryLockListsEntry ;
typedef void* Oid ;
typedef int LOCKTAG ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int,int) ;
 int VAR_3 ;
 int FUNC_2 (void*) ;
 int VAR_4 ;
 int FUNC_3 (int ,void*,void*) ;
 scalar_t__ FUNC_4 (void*) ;
 scalar_t__ FUNC_5 (void*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int ,char*,void*,void*) ;
 TYPE_2__* FUNC_8 (int ,void**,int ,int*) ;
 int FUNC_9 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_10 (int) ;
 int FUNC_11 (int ) ;

void
FUNC_12(TransactionId VAR_5, Oid VAR_6, Oid VAR_7)
{
 RecoveryLockListsEntry *VAR_8;
 xl_standby_lock *VAR_9;
 LOCKTAG VAR_10;
 bool VAR_11;


 if (!FUNC_6(VAR_5) ||
  FUNC_5(VAR_5) ||
  FUNC_4(VAR_5))
  return;

 FUNC_7(FUNC_11(VAR_1),
   "adding recovery lock: db %u rel %u", VAR_6, VAR_7);


 FUNC_0(FUNC_2(VAR_7));


 VAR_8 = FUNC_8(VAR_4, &VAR_5, VAR_2, &VAR_11);
 if (!VAR_11)
 {
  VAR_8->xid = VAR_5;
  VAR_8->locks = VAR_3;
 }

 VAR_9 = FUNC_10(sizeof(xl_standby_lock));
 VAR_9->xid = VAR_5;
 VAR_9->dbOid = VAR_6;
 VAR_9->relOid = VAR_7;
 VAR_8->locks = FUNC_9(VAR_8->locks, VAR_9);

 FUNC_3(VAR_10, VAR_9->dbOid, VAR_9->relOid);

 (void) FUNC_1(&VAR_10, VAR_0, 1, 0);
}
