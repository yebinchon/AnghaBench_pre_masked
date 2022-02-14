
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_8__ {int xid; int nxids; int overflowed; } ;
struct TYPE_5__ {int* xids; } ;
struct TYPE_7__ {TYPE_1__ subxids; } ;
struct TYPE_6__ {int xidVacLimit; int xidWarnLimit; int xidStopLimit; int xidWrapLimit; char* oldestXidDB; int nextFullXid; } ;
typedef char* Oid ;
typedef int FullTransactionId ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ VAR_3 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int VAR_4 ;
 TYPE_4__* VAR_5 ;
 TYPE_3__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (int ) ;
 TYPE_2__* VAR_9 ;
 scalar_t__ FUNC_12 (int,int) ;
 int VAR_10 ;
 int FUNC_13 (int ) ;
 int VAR_11 ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (char*,char*,...) ;
 char* FUNC_19 (char*) ;
 int FUNC_20 () ;

FullTransactionId
FUNC_21(bool VAR_12)
{
 FullTransactionId VAR_13;
 TransactionId VAR_14;





 if (FUNC_7())
  FUNC_14(VAR_2, "cannot assign TransactionIds during a parallel operation");





 if (FUNC_6())
 {
  FUNC_0(!VAR_12);
  VAR_5->xid = VAR_0;
  return FUNC_5(0, VAR_0);
 }


 if (FUNC_10())
  FUNC_14(VAR_2, "cannot assign TransactionIds during recovery");

 FUNC_8(VAR_11, VAR_4);

 VAR_13 = VAR_9->nextFullXid;
 VAR_14 = FUNC_13(VAR_13);
 if (FUNC_12(VAR_14, VAR_9->xidVacLimit))
 {







  TransactionId VAR_15 = VAR_9->xidWarnLimit;
  TransactionId VAR_16 = VAR_9->xidStopLimit;
  TransactionId VAR_17 = VAR_9->xidWrapLimit;
  Oid VAR_18 = VAR_9->oldestXidDB;

  FUNC_9(VAR_11);






  if (VAR_3 && (VAR_14 % 65536) == 0)
   FUNC_11(VAR_8);

  if (VAR_3 &&
   FUNC_12(VAR_14, VAR_16))
  {
   char *VAR_19 = FUNC_19(VAR_18);


   if (VAR_19)
    FUNC_15(VAR_2,
      (FUNC_16(VAR_1),
       FUNC_18("database is not accepting commands to avoid wraparound data loss in database \"%s\"",
        VAR_19),
       FUNC_17("Stop the postmaster and vacuum that database in single-user mode.\n"
         "You might also need to commit or roll back old prepared transactions, or drop stale replication slots.")));
   else
    FUNC_15(VAR_2,
      (FUNC_16(VAR_1),
       FUNC_18("database is not accepting commands to avoid wraparound data loss in database with OID %u",
        VAR_18),
       FUNC_17("Stop the postmaster and vacuum that database in single-user mode.\n"
         "You might also need to commit or roll back old prepared transactions, or drop stale replication slots.")));
  }
  else if (FUNC_12(VAR_14, VAR_15))
  {
   char *VAR_20 = FUNC_19(VAR_18);


   if (VAR_20)
    FUNC_15(VAR_10,
      (FUNC_18("database \"%s\" must be vacuumed within %u transactions",
        VAR_20,
        VAR_17 - VAR_14),
       FUNC_17("To avoid a database shutdown, execute a database-wide VACUUM in that database.\n"
         "You might also need to commit or roll back old prepared transactions, or drop stale replication slots.")));
   else
    FUNC_15(VAR_10,
      (FUNC_18("database with OID %u must be vacuumed within %u transactions",
        VAR_18,
        VAR_17 - VAR_14),
       FUNC_17("To avoid a database shutdown, execute a database-wide VACUUM in that database.\n"
         "You might also need to commit or roll back old prepared transactions, or drop stale replication slots.")));
  }


  FUNC_8(VAR_11, VAR_4);
  VAR_13 = VAR_9->nextFullXid;
  VAR_14 = FUNC_13(VAR_13);
 }
 FUNC_1(VAR_14);
 FUNC_2(VAR_14);
 FUNC_3(VAR_14);







 FUNC_4(&VAR_9->nextFullXid);
 if (!VAR_12)
  VAR_5->xid = VAR_14;
 else
 {
  int VAR_21 = VAR_5->nxids;

  if (VAR_21 < VAR_7)
  {
   VAR_6->subxids.xids[VAR_21] = VAR_14;
   FUNC_20();
   VAR_5->nxids = VAR_21 + 1;
  }
  else
   VAR_5->overflowed = 1;
 }

 FUNC_9(VAR_11);

 return VAR_13;
}
