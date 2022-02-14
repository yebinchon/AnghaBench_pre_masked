
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int nlocks; TYPE_1__* locks; } ;
typedef TYPE_2__ xl_standby_locks ;
struct TYPE_9__ {int xids; int oldestRunningXid; int latestCompletedXid; int nextXid; int subxid_overflow; int subxcnt; int xcnt; } ;
typedef TYPE_3__ xl_running_xacts ;
struct TYPE_10__ {int tsId; int dbId; int relcacheInitFileInval; int nmsgs; int msgs; } ;
typedef TYPE_4__ xl_invalidations ;
typedef scalar_t__ uint8 ;
typedef int XLogReaderState ;
struct TYPE_11__ {int xids; int oldestRunningXid; int latestCompletedXid; int nextXid; int subxid_overflow; int subxcnt; int xcnt; } ;
struct TYPE_7__ {int relOid; int dbOid; int xid; } ;
typedef TYPE_5__ RunningTransactionsData ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char*,scalar_t__) ;
 scalar_t__ VAR_6 ;

void
FUNC_8(XLogReaderState *VAR_7)
{
 uint8 VAR_8 = FUNC_5(VAR_7) & ~VAR_5;


 FUNC_0(!FUNC_6(VAR_7));


 if (VAR_6 == VAR_1)
  return;

 if (VAR_8 == VAR_4)
 {
  xl_standby_locks *VAR_9 = (xl_standby_locks *) FUNC_4(VAR_7);
  int VAR_10;

  for (VAR_10 = 0; VAR_10 < VAR_9->nlocks; VAR_10++)
   FUNC_3(VAR_9->locks[VAR_10].xid,
             VAR_9->locks[VAR_10].dbOid,
             VAR_9->locks[VAR_10].relOid);
 }
 else if (VAR_8 == VAR_3)
 {
  xl_running_xacts *VAR_11 = (xl_running_xacts *) FUNC_4(VAR_7);
  RunningTransactionsData VAR_12;

  VAR_12.xcnt = VAR_11->xcnt;
  VAR_12.subxcnt = VAR_11->subxcnt;
  VAR_12.subxid_overflow = VAR_11->subxid_overflow;
  VAR_12.nextXid = VAR_11->nextXid;
  VAR_12.latestCompletedXid = VAR_11->latestCompletedXid;
  VAR_12.oldestRunningXid = VAR_11->oldestRunningXid;
  VAR_12.xids = VAR_11->xids;

  FUNC_1(&VAR_12);
 }
 else if (VAR_8 == VAR_2)
 {
  xl_invalidations *VAR_13 = (xl_invalidations *) FUNC_4(VAR_7);

  FUNC_2(VAR_13->msgs,
            VAR_13->nmsgs,
            VAR_13->relcacheInitFileInval,
            VAR_13->dbId,
            VAR_13->tsId);
 }
 else
  FUNC_7(VAR_0, "standby_redo: unknown op code %u", VAR_8);
}
