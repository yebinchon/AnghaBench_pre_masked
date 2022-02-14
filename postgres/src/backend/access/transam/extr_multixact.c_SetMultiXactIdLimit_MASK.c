
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* oldestMultiXactDB; scalar_t__ nextMXact; int finishedStartup; scalar_t__ multiWrapLimit; scalar_t__ multiStopLimit; scalar_t__ multiWarnLimit; scalar_t__ multiVacLimit; scalar_t__ oldestMultiXactId; } ;
typedef char* Oid ;
typedef scalar_t__ MultiXactId ;


 int FUNC_0 (int) ;
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
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,scalar_t__,char*) ;
 int FUNC_11 (char*,char*,scalar_t__,char*,scalar_t__) ;
 char* FUNC_12 (char*) ;

void
FUNC_13(MultiXactId VAR_11, Oid VAR_12,
     bool VAR_13)
{
 MultiXactId VAR_14;
 MultiXactId VAR_15;
 MultiXactId VAR_16;
 MultiXactId VAR_17;
 MultiXactId VAR_18;
 bool VAR_19;

 FUNC_0(FUNC_4(VAR_11));
 VAR_17 = VAR_11 + (VAR_5 >> 1);
 if (VAR_17 < VAR_1)
  VAR_17 += VAR_1;
 VAR_16 = VAR_17 - 100;
 if (VAR_16 < VAR_1)
  VAR_16 -= VAR_1;
 VAR_15 = VAR_16 - 10000000;
 if (VAR_15 < VAR_1)
  VAR_15 -= VAR_1;
 VAR_14 = VAR_11 + VAR_10;
 if (VAR_14 < VAR_1)
  VAR_14 += VAR_1;


 FUNC_2(VAR_6, VAR_4);
 VAR_7->oldestMultiXactId = VAR_11;
 VAR_7->oldestMultiXactDB = VAR_12;
 VAR_7->multiVacLimit = VAR_14;
 VAR_7->multiWarnLimit = VAR_15;
 VAR_7->multiStopLimit = VAR_16;
 VAR_7->multiWrapLimit = VAR_17;
 VAR_18 = VAR_7->nextMXact;
 FUNC_3(VAR_6);


 FUNC_8(VAR_0,
   (FUNC_10("MultiXactId wrap limit is %u, limited by database with OID %u",
     VAR_17, VAR_12)));
 if (!VAR_7->finishedStartup)
  return;

 FUNC_0(!VAR_2);


 VAR_19 = FUNC_7(VAR_13);
 if ((FUNC_5(VAR_14, VAR_18) ||
   VAR_19) && VAR_3)
  FUNC_6(VAR_8);


 if (FUNC_5(VAR_15, VAR_18))
 {
  char *VAR_20;
  if (FUNC_1())
   VAR_20 = FUNC_12(VAR_12);
  else
   VAR_20 = ((void*)0);

  if (VAR_20)
   FUNC_8(VAR_9,
     (FUNC_11("database \"%s\" must be vacuumed before %u more MultiXactId is used",
           "database \"%s\" must be vacuumed before %u more MultiXactIds are used",
           VAR_17 - VAR_18,
           VAR_20,
           VAR_17 - VAR_18),
      FUNC_9("To avoid a database shutdown, execute a database-wide VACUUM in that database.\n"
        "You might also need to commit or roll back old prepared transactions, or drop stale replication slots.")));
  else
   FUNC_8(VAR_9,
     (FUNC_11("database with OID %u must be vacuumed before %u more MultiXactId is used",
           "database with OID %u must be vacuumed before %u more MultiXactIds are used",
           VAR_17 - VAR_18,
           VAR_12,
           VAR_17 - VAR_18),
      FUNC_9("To avoid a database shutdown, execute a database-wide VACUUM in that database.\n"
        "You might also need to commit or roll back old prepared transactions, or drop stale replication slots.")));
 }
}
