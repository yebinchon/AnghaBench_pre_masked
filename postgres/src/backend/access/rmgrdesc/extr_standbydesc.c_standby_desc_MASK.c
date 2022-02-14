
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nlocks; TYPE_1__* locks; } ;
typedef TYPE_2__ xl_standby_locks ;
typedef int xl_running_xacts ;
struct TYPE_6__ {int relcacheInitFileInval; int tsId; int dbId; int msgs; int nmsgs; } ;
typedef TYPE_3__ xl_invalidations ;
typedef scalar_t__ uint8 ;
typedef int XLogReaderState ;
struct TYPE_4__ {int relOid; int dbOid; int xid; } ;
typedef int StringInfo ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int *) ;

void
FUNC_5(StringInfo VAR_4, XLogReaderState *VAR_5)
{
 char *VAR_6 = FUNC_0(VAR_5);
 uint8 VAR_7 = FUNC_1(VAR_5) & ~VAR_3;

 if (VAR_7 == VAR_2)
 {
  xl_standby_locks *VAR_8 = (xl_standby_locks *) VAR_6;
  int VAR_9;

  for (VAR_9 = 0; VAR_9 < VAR_8->nlocks; VAR_9++)
   FUNC_2(VAR_4, "xid %u db %u rel %u ",
        VAR_8->locks[VAR_9].xid, VAR_8->locks[VAR_9].dbOid,
        VAR_8->locks[VAR_9].relOid);
 }
 else if (VAR_7 == VAR_1)
 {
  xl_running_xacts *VAR_10 = (xl_running_xacts *) VAR_6;

  FUNC_4(VAR_4, VAR_10);
 }
 else if (VAR_7 == VAR_0)
 {
  xl_invalidations *VAR_11 = (xl_invalidations *) VAR_6;

  FUNC_3(VAR_4, VAR_11->nmsgs, VAR_11->msgs,
           VAR_11->dbId, VAR_11->tsId,
           VAR_11->relcacheInitFileInval);
 }
}
