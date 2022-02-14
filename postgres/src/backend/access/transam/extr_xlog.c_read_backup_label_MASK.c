
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;
typedef int uint32 ;
typedef int XLogRecPtr ;
typedef char TimeLineID ;
typedef int FILE ;


 int * FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,char,char) ;
 int FUNC_6 (char*,...) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,...) ;
 scalar_t__ FUNC_9 (char*,char*) ;

__attribute__((used)) static bool
FUNC_10(XLogRecPtr *VAR_9, bool *VAR_10,
      bool *VAR_11)
{
 char VAR_12[VAR_5];
 TimeLineID VAR_13,
    VAR_14;
 FILE *VAR_15;
 char VAR_16;
 char VAR_17[20];
 char VAR_18[20];
 char VAR_19[VAR_6];
 char VAR_20[128];
 uint32 VAR_21,
    VAR_22;

 *VAR_10 = 0;
 *VAR_11 = 0;




 VAR_15 = FUNC_0(VAR_0, "r");
 if (!VAR_15)
 {
  if (VAR_8 != VAR_2)
   FUNC_2(VAR_4,
     (FUNC_4(),
      FUNC_6("could not read file \"%s\": %m",
       VAR_0)));
  return 0;
 }






 if (FUNC_8(VAR_15, "START WAL LOCATION: %X/%X (file %08X%16s)%c",
      &VAR_21, &VAR_22, &VAR_13, VAR_12, &VAR_16) != 5 || VAR_16 != '\n')
  FUNC_2(VAR_4,
    (FUNC_3(VAR_3),
     FUNC_6("invalid data in file \"%s\"", VAR_0)));
 VAR_7 = ((uint64) VAR_21) << 32 | VAR_22;
 if (FUNC_8(VAR_15, "CHECKPOINT LOCATION: %X/%X%c",
      &VAR_21, &VAR_22, &VAR_16) != 3 || VAR_16 != '\n')
  FUNC_2(VAR_4,
    (FUNC_3(VAR_3),
     FUNC_6("invalid data in file \"%s\"", VAR_0)));
 *VAR_9 = ((uint64) VAR_21) << 32 | VAR_22;






 if (FUNC_8(VAR_15, "BACKUP METHOD: %19s\n", VAR_17) == 1)
 {
  if (FUNC_9(VAR_17, "streamed") == 0)
   *VAR_10 = 1;
 }

 if (FUNC_8(VAR_15, "BACKUP FROM: %19s\n", VAR_18) == 1)
 {
  if (FUNC_9(VAR_18, "standby") == 0)
   *VAR_11 = 1;
 }
 if (FUNC_8(VAR_15, "START TIME: %127[^\n]\n", VAR_20) == 1)
  FUNC_2(VAR_1,
    (FUNC_6("backup time %s in file \"%s\"",
      VAR_20, VAR_0)));

 if (FUNC_8(VAR_15, "LABEL: %1023[^\n]\n", VAR_19) == 1)
  FUNC_2(VAR_1,
    (FUNC_6("backup label %s in file \"%s\"",
      VAR_19, VAR_0)));





 if (FUNC_8(VAR_15, "START TIMELINE: %u\n", &VAR_14) == 1)
 {
  if (VAR_13 != VAR_14)
   FUNC_2(VAR_4,
     (FUNC_3(VAR_3),
      FUNC_6("invalid data in file \"%s\"", VAR_0),
      FUNC_5("Timeline ID parsed is %u, but expected %u.",
          VAR_14, VAR_13)));

  FUNC_2(VAR_1,
    (FUNC_6("backup timeline %u in file \"%s\"",
      VAR_14, VAR_0)));
 }

 if (FUNC_7(VAR_15) || FUNC_1(VAR_15))
  FUNC_2(VAR_4,
    (FUNC_4(),
     FUNC_6("could not read file \"%s\": %m",
      VAR_0)));

 return 1;
}
