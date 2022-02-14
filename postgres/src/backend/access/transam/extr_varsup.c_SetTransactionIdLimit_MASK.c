
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ TransactionId ;
struct TYPE_2__ {char* oldestXidDB; int nextFullXid; scalar_t__ xidWrapLimit; scalar_t__ xidStopLimit; scalar_t__ xidWarnLimit; scalar_t__ xidVacLimit; scalar_t__ oldestXid; } ;
typedef char* Oid ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 TYPE_1__* VAR_7 ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int VAR_8 ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,char*,scalar_t__) ;
 char* FUNC_11 (char*) ;

void
FUNC_12(TransactionId VAR_11, Oid VAR_12)
{
 TransactionId VAR_13;
 TransactionId VAR_14;
 TransactionId VAR_15;
 TransactionId VAR_16;
 TransactionId VAR_17;

 FUNC_0(FUNC_6(VAR_11));
 VAR_16 = VAR_11 + (VAR_5 >> 1);
 if (VAR_16 < VAR_1)
  VAR_16 += VAR_1;
 VAR_15 = VAR_16 - 1000000;
 if (VAR_15 < VAR_1)
  VAR_15 -= VAR_1;
 VAR_14 = VAR_15 - 10000000;
 if (VAR_14 < VAR_1)
  VAR_14 -= VAR_1;
 VAR_13 = VAR_11 + VAR_10;
 if (VAR_13 < VAR_1)
  VAR_13 += VAR_1;


 FUNC_2(VAR_9, VAR_4);
 VAR_7->oldestXid = VAR_11;
 VAR_7->xidVacLimit = VAR_13;
 VAR_7->xidWarnLimit = VAR_14;
 VAR_7->xidStopLimit = VAR_15;
 VAR_7->xidWrapLimit = VAR_16;
 VAR_7->oldestXidDB = VAR_12;
 VAR_17 = FUNC_7(VAR_7->nextFullXid);
 FUNC_3(VAR_9);


 FUNC_8(VAR_0,
   (FUNC_10("transaction ID wrap limit is %u, limited by database with OID %u",
     VAR_16, VAR_12)));
 if (FUNC_5(VAR_17, VAR_13) &&
  VAR_3 && !VAR_2)
  FUNC_4(VAR_6);


 if (FUNC_5(VAR_17, VAR_14) && !VAR_2)
 {
  char *VAR_18;
  if (FUNC_1())
   VAR_18 = FUNC_11(VAR_12);
  else
   VAR_18 = ((void*)0);

  if (VAR_18)
   FUNC_8(VAR_8,
     (FUNC_10("database \"%s\" must be vacuumed within %u transactions",
       VAR_18,
       VAR_16 - VAR_17),
      FUNC_9("To avoid a database shutdown, execute a database-wide VACUUM in that database.\n"
        "You might also need to commit or roll back old prepared transactions, or drop stale replication slots.")));
  else
   FUNC_8(VAR_8,
     (FUNC_10("database with OID %u must be vacuumed within %u transactions",
       VAR_12,
       VAR_16 - VAR_17),
      FUNC_9("To avoid a database shutdown, execute a database-wide VACUUM in that database.\n"
        "You might also need to commit or roll back old prepared transactions, or drop stale replication slots.")));
 }
}
