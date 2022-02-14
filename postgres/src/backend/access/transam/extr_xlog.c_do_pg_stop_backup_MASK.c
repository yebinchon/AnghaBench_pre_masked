
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64 ;
typedef int uint32 ;
struct stat {int st_size; } ;
typedef int strfbuf ;
typedef int startpoint ;
typedef scalar_t__ pg_time_t ;
typedef int XLogSegNo ;
typedef scalar_t__ XLogRecPtr ;
typedef int TimeLineID ;
struct TYPE_6__ {scalar_t__ minRecoveryPoint; int minRecoveryPointTLI; } ;
struct TYPE_4__ {scalar_t__ exclusiveBackupState; scalar_t__ nonExclusiveBackups; int forcePageWrites; } ;
struct TYPE_5__ {scalar_t__ lastFpwDisableRecPtr; int info_lck; TYPE_1__ Insert; } ;
typedef int FILE ;
typedef int Datum ;


 int * FUNC_0 (char*,char*) ;
 int FUNC_1 (int) ;
 char* VAR_0 ;
 int FUNC_2 (char*,int,int ,scalar_t__,int ) ;
 int FUNC_3 (char*,int,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int VAR_14 ;
 int FUNC_12 () ;
 int FUNC_13 (int) ;
 int VAR_15 ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 char* VAR_16 ;
 int VAR_17 ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int VAR_18 ;
 int FUNC_18 (scalar_t__,int ,int ) ;
 int FUNC_19 (scalar_t__,int ,int ) ;
 int VAR_19 ;
 scalar_t__ FUNC_20 (char*) ;
 scalar_t__ FUNC_21 () ;
 scalar_t__ FUNC_22 () ;
 int FUNC_23 () ;
 TYPE_2__* VAR_20 ;
 int FUNC_24 (char*,int,int ,int ) ;
 scalar_t__ FUNC_25 (int ,int ) ;
 int FUNC_26 () ;
 int FUNC_27 (char*,int) ;
 int FUNC_28 (char*,int ) ;
 int FUNC_29 (int ,int ) ;
 int FUNC_30 (int ) ;
 int FUNC_31 () ;
 int FUNC_32 (char*) ;
 int FUNC_33 (char*,...) ;
 scalar_t__ VAR_21 ;
 scalar_t__ FUNC_34 (int *) ;
 scalar_t__ FUNC_35 (int *) ;
 int FUNC_36 (int *,char*,...) ;
 int FUNC_37 (char*,int,int,int *) ;
 int VAR_22 ;
 char* FUNC_38 (int) ;
 int FUNC_39 (scalar_t__*,int ) ;
 int VAR_23 ;
 int FUNC_40 (char*,int,char*,int ) ;
 int FUNC_41 (long) ;
 int VAR_24 ;
 int FUNC_42 (char*,char*,...) ;
 scalar_t__ FUNC_43 (char*,struct stat*) ;
 char* FUNC_44 (char*,char) ;
 scalar_t__ FUNC_45 (char*,char*) ;
 char* FUNC_46 (char*,char*) ;
 scalar_t__ FUNC_47 (int *) ;
 int VAR_25 ;

XLogRecPtr
FUNC_48(char *VAR_26, bool VAR_27, TimeLineID *VAR_28)
{
 bool VAR_29 = (VAR_26 == ((void*)0));
 bool VAR_30 = 0;
 XLogRecPtr VAR_31;
 XLogRecPtr VAR_32;
 TimeLineID VAR_33;
 pg_time_t VAR_34;
 char VAR_35[128];
 char VAR_36[VAR_12];
 char VAR_37[VAR_11];
 char VAR_38[VAR_11];
 char VAR_39[VAR_11];
 char VAR_40[VAR_11];
 char VAR_41[20];
 XLogSegNo VAR_42;
 FILE *VAR_43;
 FILE *VAR_44;
 char VAR_45;
 int VAR_46;
 int VAR_47 = 0;
 bool VAR_48 = 0;
 char *VAR_49;
 char *VAR_50;
 uint32 VAR_51,
    VAR_52;

 VAR_30 = FUNC_12();




 if (VAR_30 && VAR_29)
  FUNC_29(VAR_6,
    (FUNC_30(VAR_5),
     FUNC_33("recovery is in progress"),
     FUNC_32("WAL control functions cannot be executed during recovery.")));





 if (!VAR_30 && !FUNC_26())
  FUNC_29(VAR_6,
    (FUNC_30(VAR_5),
     FUNC_33("WAL level not sufficient for making an online backup"),
     FUNC_32("wal_level must be set to \"replica\" or \"logical\" at server start.")));

 if (VAR_29)
 {





  FUNC_16();
  if (VAR_20->Insert.exclusiveBackupState != VAR_7)
  {
   FUNC_17();
   FUNC_29(VAR_6,
     (FUNC_30(VAR_5),
      FUNC_33("exclusive backup not in progress")));
  }
  VAR_20->Insert.exclusiveBackupState = VAR_9;
  FUNC_17();





  FUNC_11(VAR_23, (Datum) FUNC_4(VAR_29));
  {



   struct stat VAR_53;
   int VAR_54;

   if (FUNC_43(VAR_0, &VAR_53))
   {

    if (VAR_21 != VAR_4)
     FUNC_29(VAR_6,
       (FUNC_31(),
        FUNC_33("could not stat file \"%s\": %m",
         VAR_0)));
    FUNC_29(VAR_6,
      (FUNC_30(VAR_5),
       FUNC_33("a backup is not in progress")));
   }

   VAR_43 = FUNC_0(VAR_0, "r");
   if (!VAR_43)
   {
    FUNC_29(VAR_6,
      (FUNC_31(),
       FUNC_33("could not read file \"%s\": %m",
        VAR_0)));
   }
   VAR_26 = FUNC_38(VAR_53.st_size + 1);
   VAR_54 = FUNC_37(VAR_26, VAR_53.st_size, 1, VAR_43);
   VAR_26[VAR_53.st_size] = '\0';




   if (VAR_54 != 1 || FUNC_34(VAR_43) || FUNC_7(VAR_43))
    FUNC_29(VAR_6,
      (FUNC_31(),
       FUNC_33("could not read file \"%s\": %m",
        VAR_0)));
   FUNC_28(VAR_0, VAR_6);





   FUNC_28(VAR_16, VAR_3);
  }
  FUNC_10(VAR_23, (Datum) FUNC_4(VAR_29));
 }
 FUNC_16();
 if (VAR_29)
 {
  VAR_20->Insert.exclusiveBackupState = VAR_8;
 }
 else
 {






  FUNC_1(VAR_20->Insert.nonExclusiveBackups > 0);
  VAR_20->Insert.nonExclusiveBackups--;
 }

 if (VAR_20->Insert.exclusiveBackupState == VAR_8 &&
  VAR_20->Insert.nonExclusiveBackups == 0)
 {
  VAR_20->Insert.forcePageWrites = 0;
 }
 VAR_24 = VAR_15;

 FUNC_17();





 if (FUNC_42(VAR_26, "START WAL LOCATION: %X/%X (file %24s)%c",
      &VAR_51, &VAR_52, VAR_37,
      &VAR_45) != 4 || VAR_45 != '\n')
  FUNC_29(VAR_6,
    (FUNC_30(VAR_5),
     FUNC_33("invalid data in file \"%s\"", VAR_0)));
 VAR_31 = ((uint64) VAR_51) << 32 | VAR_52;
 VAR_49 = FUNC_44(VAR_26, '\n') + 1;






 VAR_50 = FUNC_46(VAR_49, "BACKUP FROM:");
 if (!VAR_50 || FUNC_42(VAR_50, "BACKUP FROM: %19s\n", VAR_41) != 1)
  FUNC_29(VAR_6,
    (FUNC_30(VAR_5),
     FUNC_33("invalid data in file \"%s\"", VAR_0)));
 if (FUNC_45(VAR_41, "standby") == 0 && !VAR_30)
  FUNC_29(VAR_6,
    (FUNC_30(VAR_5),
     FUNC_33("the standby was promoted during online backup"),
     FUNC_32("This means that the backup being taken is corrupt "
       "and should not be used. "
       "Try taking another online backup.")));
 if (VAR_30)
 {
  XLogRecPtr VAR_55;





  FUNC_14(&VAR_20->info_lck);
  VAR_55 = VAR_20->lastFpwDisableRecPtr;
  FUNC_15(&VAR_20->info_lck);

  if (VAR_31 <= VAR_55)
   FUNC_29(VAR_6,
     (FUNC_30(VAR_5),
      FUNC_33("WAL generated with full_page_writes=off was replayed "
       "during online backup"),
      FUNC_32("This means that the backup being taken on the standby "
        "is corrupt and should not be used. "
        "Enable full_page_writes and run CHECKPOINT on the master, "
        "and then try an online backup again.")));


  FUNC_8(VAR_2, VAR_10);
  VAR_32 = VAR_1->minRecoveryPoint;
  VAR_33 = VAR_1->minRecoveryPointTLI;
  FUNC_9(VAR_2);
 }
 else
 {



  FUNC_23();
  FUNC_27((char *) (&VAR_31), sizeof(VAR_31));
  VAR_32 = FUNC_25(VAR_14, VAR_19);
  VAR_33 = VAR_17;





  FUNC_13(0);

  FUNC_18(VAR_32, VAR_42, VAR_25);
  FUNC_24(VAR_38, VAR_33, VAR_42, VAR_25);


  VAR_34 = (pg_time_t) FUNC_47(((void*)0));
  FUNC_40(VAR_35, sizeof(VAR_35),
     "%Y-%m-%d %H:%M:%S %Z",
     FUNC_39(&VAR_34, VAR_22));




  FUNC_19(VAR_31, VAR_42, VAR_25);
  FUNC_3(VAR_36, VAR_33, VAR_42,
         VAR_31, VAR_25);
  VAR_44 = FUNC_0(VAR_36, "w");
  if (!VAR_44)
   FUNC_29(VAR_6,
     (FUNC_31(),
      FUNC_33("could not create file \"%s\": %m",
       VAR_36)));
  FUNC_36(VAR_44, "START WAL LOCATION: %X/%X (file %s)\n",
    (uint32) (VAR_31 >> 32), (uint32) VAR_31, VAR_37);
  FUNC_36(VAR_44, "STOP WAL LOCATION: %X/%X (file %s)\n",
    (uint32) (VAR_32 >> 32), (uint32) VAR_32, VAR_38);





  FUNC_36(VAR_44, "%s", VAR_49);
  FUNC_36(VAR_44, "STOP TIME: %s\n", VAR_35);
  FUNC_36(VAR_44, "STOP TIMELINE: %u\n", VAR_33);
  if (FUNC_35(VAR_44) || FUNC_34(VAR_44) || FUNC_7(VAR_44))
   FUNC_29(VAR_6,
     (FUNC_31(),
      FUNC_33("could not write file \"%s\": %m",
       VAR_36)));







  FUNC_6();
 }
 if (VAR_27 &&
  ((!VAR_30 && FUNC_21()) ||
   (VAR_30 && FUNC_22())))
 {
  FUNC_18(VAR_32, VAR_42, VAR_25);
  FUNC_24(VAR_39, VAR_33, VAR_42, VAR_25);

  FUNC_19(VAR_31, VAR_42, VAR_25);
  FUNC_2(VAR_40, VAR_33, VAR_42,
         VAR_31, VAR_25);

  VAR_46 = 60;
  VAR_47 = 0;

  while (FUNC_20(VAR_39) ||
      FUNC_20(VAR_40))
  {
   FUNC_5();

   if (!VAR_48 && VAR_47 > 5)
   {
    FUNC_29(VAR_13,
      (FUNC_33("base backup done, waiting for required WAL segments to be archived")));
    VAR_48 = 1;
   }

   FUNC_41(1000000L);

   if (++VAR_47 >= VAR_46)
   {
    VAR_46 *= 2;
    FUNC_29(VAR_18,
      (FUNC_33("still waiting for all required WAL segments to be archived (%d seconds elapsed)",
        VAR_47),
       FUNC_32("Check that your archive_command is executing properly.  "
         "You can safely cancel this backup, "
         "but the database backup will not be usable without all the WAL segments.")));
   }
  }

  FUNC_29(VAR_13,
    (FUNC_33("all required WAL segments have been archived")));
 }
 else if (VAR_27)
  FUNC_29(VAR_13,
    (FUNC_33("WAL archiving is not enabled; you must ensure that all required WAL segments are copied through other means to complete the backup")));




 if (VAR_28)
  *VAR_28 = VAR_33;
 return VAR_32;
}
