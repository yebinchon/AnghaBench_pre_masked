
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int full_path ;
typedef int FILE ;


 int * FUNC_0 (char*,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,char*,...) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,...) ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (int *,char*,char*) ;
 int FUNC_9 (char*,int,char*,char const*) ;
 long FUNC_10 (char const*,char**,int) ;

void
FUNC_11(const char *VAR_6)
{
 char VAR_7[VAR_3];
 FILE *VAR_8;
 int VAR_9;
 long VAR_10;
 long VAR_11;
 char *VAR_12;
 char VAR_13[64];
 const char *VAR_14 = VAR_4;

 VAR_11 = FUNC_10(VAR_14, &VAR_12, 10);

 FUNC_9(VAR_7, sizeof(VAR_7), "%s/PG_VERSION", VAR_6);

 VAR_8 = FUNC_0(VAR_7, "r");
 if (!VAR_8)
 {
  if (VAR_5 == VAR_0)
   FUNC_2(VAR_2,
     (FUNC_3(VAR_1),
      FUNC_7("\"%s\" is not a valid data directory",
       VAR_6),
      FUNC_5("File \"%s\" is missing.", VAR_7)));
  else
   FUNC_2(VAR_2,
     (FUNC_4(),
      FUNC_7("could not open file \"%s\": %m", VAR_7)));
 }

 VAR_13[0] = '\0';
 VAR_9 = FUNC_8(VAR_8, "%63s", VAR_13);
 VAR_10 = FUNC_10(VAR_13, &VAR_12, 10);

 if (VAR_9 != 1 || VAR_12 == VAR_13)
  FUNC_2(VAR_2,
    (FUNC_3(VAR_1),
     FUNC_7("\"%s\" is not a valid data directory",
      VAR_6),
     FUNC_5("File \"%s\" does not contain valid data.",
         VAR_7),
     FUNC_6("You might need to initdb.")));

 FUNC_1(VAR_8);

 if (VAR_11 != VAR_10)
  FUNC_2(VAR_2,
    (FUNC_3(VAR_1),
     FUNC_7("database files are incompatible with server"),
     FUNC_5("The data directory was initialized by PostgreSQL version %s, "
         "which is not compatible with this version %s.",
         VAR_13, VAR_14)));
}
