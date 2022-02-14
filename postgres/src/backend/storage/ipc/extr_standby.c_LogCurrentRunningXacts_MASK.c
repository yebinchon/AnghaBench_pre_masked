
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int xcnt; int subxcnt; int latestCompletedXid; int oldestRunningXid; int nextXid; scalar_t__ subxid_overflow; } ;
typedef TYPE_1__ xl_running_xacts ;
typedef int uint32 ;
typedef int XLogRecPtr ;
typedef int TransactionId ;
struct TYPE_5__ {int xcnt; int subxcnt; int nextXid; int latestCompletedXid; int oldestRunningXid; scalar_t__ subxid_overflow; scalar_t__ xids; } ;
typedef TYPE_2__* RunningTransactions ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int,int,int ,int ,int ,int ,...) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static XLogRecPtr
FUNC_7(RunningTransactions VAR_5)
{
 xl_running_xacts VAR_6;
 XLogRecPtr VAR_7;

 VAR_6.xcnt = VAR_5->xcnt;
 VAR_6.subxcnt = VAR_5->subxcnt;
 VAR_6.subxid_overflow = VAR_5->subxid_overflow;
 VAR_6.nextXid = VAR_5->nextXid;
 VAR_6.oldestRunningXid = VAR_5->oldestRunningXid;
 VAR_6.latestCompletedXid = VAR_5->latestCompletedXid;


 FUNC_0();
 FUNC_4(VAR_3);
 FUNC_2((char *) (&VAR_6), VAR_1);


 if (VAR_6.xcnt > 0)
  FUNC_2((char *) VAR_5->xids,
       (VAR_6.xcnt + VAR_6.subxcnt) * sizeof(TransactionId));

 VAR_7 = FUNC_1(VAR_2, VAR_4);

 if (VAR_5->subxid_overflow)
  FUNC_5(FUNC_6(VAR_0),
    "snapshot of %u running transactions overflowed (lsn %X/%X oldest xid %u latest complete %u next xid %u)",
    VAR_5->xcnt,
    (uint32) (VAR_7 >> 32), (uint32) VAR_7,
    VAR_5->oldestRunningXid,
    VAR_5->latestCompletedXid,
    VAR_5->nextXid);
 else
  FUNC_5(FUNC_6(VAR_0),
    "snapshot of %u+%u running transaction ids (lsn %X/%X oldest xid %u latest complete %u next xid %u)",
    VAR_5->xcnt, VAR_5->subxcnt,
    (uint32) (VAR_7 >> 32), (uint32) VAR_7,
    VAR_5->oldestRunningXid,
    VAR_5->latestCompletedXid,
    VAR_5->nextXid);
 FUNC_3(VAR_7);

 return VAR_7;
}
