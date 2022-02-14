
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nextMXact; int multiVacLimit; int multiWarnLimit; int multiStopLimit; int multiWrapLimit; char* oldestMultiXactDB; scalar_t__ nextOffset; scalar_t__ offsetStopLimit; scalar_t__ oldestOffset; scalar_t__ oldestOffsetKnown; } ;
typedef char* Oid ;
typedef scalar_t__ MultiXactOffset ;
typedef int MultiXactId ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (scalar_t__) ;
 int VAR_8 ;
 int FUNC_5 (int,int) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__,int) ;
 TYPE_1__* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_7 () ;
 int VAR_12 ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int VAR_13 ;
 int FUNC_10 (int ,char*,int) ;
 int FUNC_11 (int ,char*,int,scalar_t__) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*,char*,scalar_t__,int,scalar_t__) ;
 int FUNC_16 (char*,...) ;
 int FUNC_17 (char*,...) ;
 int FUNC_18 (char*,char*,scalar_t__,char*,scalar_t__) ;
 char* FUNC_19 (char*) ;

__attribute__((used)) static MultiXactId
FUNC_20(int VAR_14, MultiXactOffset *VAR_15)
{
 MultiXactId VAR_16;
 MultiXactOffset VAR_17;

 FUNC_10(VAR_0, "GetNew: for %d xids", VAR_14);


 if (FUNC_7())
  FUNC_12(VAR_2, "cannot assign MultiXactIds during recovery");

 FUNC_2(VAR_8, VAR_5);


 if (VAR_9->nextMXact < VAR_3)
  VAR_9->nextMXact = VAR_3;


 VAR_16 = VAR_9->nextMXact;
 if (!FUNC_5(VAR_16, VAR_9->multiVacLimit))
 {







  MultiXactId VAR_18 = VAR_9->multiWarnLimit;
  MultiXactId VAR_19 = VAR_9->multiStopLimit;
  MultiXactId VAR_20 = VAR_9->multiWrapLimit;
  Oid VAR_21 = VAR_9->oldestMultiXactDB;

  FUNC_3(VAR_8);

  if (VAR_4 &&
   !FUNC_5(VAR_16, VAR_19))
  {
   char *VAR_22 = FUNC_19(VAR_21);





   FUNC_9(VAR_11);


   if (VAR_22)
    FUNC_13(VAR_2,
      (FUNC_14(VAR_1),
       FUNC_17("database is not accepting commands that generate new MultiXactIds to avoid wraparound data loss in database \"%s\"",
        VAR_22),
       FUNC_16("Execute a database-wide VACUUM in that database.\n"
         "You might also need to commit or roll back old prepared transactions, or drop stale replication slots.")));
   else
    FUNC_13(VAR_2,
      (FUNC_14(VAR_1),
       FUNC_17("database is not accepting commands that generate new MultiXactIds to avoid wraparound data loss in database with OID %u",
        VAR_21),
       FUNC_16("Execute a database-wide VACUUM in that database.\n"
         "You might also need to commit or roll back old prepared transactions, or drop stale replication slots.")));
  }






  if (VAR_4 && (VAR_16 % 65536) == 0)
   FUNC_9(VAR_11);

  if (!FUNC_5(VAR_16, VAR_18))
  {
   char *VAR_23 = FUNC_19(VAR_21);


   if (VAR_23)
    FUNC_13(VAR_13,
      (FUNC_18("database \"%s\" must be vacuumed before %u more MultiXactId is used",
            "database \"%s\" must be vacuumed before %u more MultiXactIds are used",
            VAR_20 - VAR_16,
            VAR_23,
            VAR_20 - VAR_16),
       FUNC_16("Execute a database-wide VACUUM in that database.\n"
         "You might also need to commit or roll back old prepared transactions, or drop stale replication slots.")));
   else
    FUNC_13(VAR_13,
      (FUNC_18("database with OID %u must be vacuumed before %u more MultiXactId is used",
            "database with OID %u must be vacuumed before %u more MultiXactIds are used",
            VAR_20 - VAR_16,
            VAR_21,
            VAR_20 - VAR_16),
       FUNC_16("Execute a database-wide VACUUM in that database.\n"
         "You might also need to commit or roll back old prepared transactions, or drop stale replication slots.")));
  }


  FUNC_2(VAR_8, VAR_5);
  VAR_16 = VAR_9->nextMXact;
  if (VAR_16 < VAR_3)
   VAR_16 = VAR_3;
 }


 FUNC_1(VAR_16);






 VAR_17 = VAR_9->nextOffset;
 if (VAR_17 == 0)
 {
  *VAR_15 = 1;
  VAR_14++;
 }
 else
  *VAR_15 = VAR_17;
 if (VAR_9->oldestOffsetKnown &&
  FUNC_6(VAR_9->offsetStopLimit, VAR_17,
         VAR_14))
 {

  FUNC_9(VAR_11);

  FUNC_13(VAR_2,
    (FUNC_14(VAR_1),
     FUNC_17("multixact \"members\" limit exceeded"),
     FUNC_15("This command would create a multixact with %u members, but the remaining space is only enough for %u member.",
          "This command would create a multixact with %u members, but the remaining space is only enough for %u members.",
          VAR_9->offsetStopLimit - VAR_17 - 1,
          VAR_14,
          VAR_9->offsetStopLimit - VAR_17 - 1),
     FUNC_16("Execute a database-wide VACUUM in database with OID %u with reduced vacuum_multixact_freeze_min_age and vacuum_multixact_freeze_table_age settings.",
       VAR_9->oldestMultiXactDB)));
 }







 if (!VAR_9->oldestOffsetKnown ||
  (VAR_9->nextOffset - VAR_9->oldestOffset
   > VAR_7))
 {






  if ((FUNC_4(VAR_17) / VAR_12) !=
   (FUNC_4(VAR_17 + VAR_14) / VAR_12))
   FUNC_9(VAR_11);
 }

 if (VAR_9->oldestOffsetKnown &&
  FUNC_6(VAR_9->offsetStopLimit,
         VAR_17,
         VAR_14 + VAR_6 * VAR_12 * 20))
  FUNC_13(VAR_13,
    (FUNC_14(VAR_1),
     FUNC_18("database with OID %u must be vacuumed before %d more multixact member is used",
          "database with OID %u must be vacuumed before %d more multixact members are used",
          VAR_9->offsetStopLimit - VAR_17 + VAR_14,
          VAR_9->oldestMultiXactDB,
          VAR_9->offsetStopLimit - VAR_17 + VAR_14),
     FUNC_16("Execute a database-wide VACUUM in that database with reduced vacuum_multixact_freeze_min_age and vacuum_multixact_freeze_table_age settings.")));

 FUNC_0(VAR_17, VAR_14);
 FUNC_8();
 (VAR_9->nextMXact)++;

 VAR_9->nextOffset += VAR_14;

 FUNC_3(VAR_8);

 FUNC_11(VAR_0, "GetNew: returning %u offset %u", VAR_16, *VAR_15);
 return VAR_16;
}
