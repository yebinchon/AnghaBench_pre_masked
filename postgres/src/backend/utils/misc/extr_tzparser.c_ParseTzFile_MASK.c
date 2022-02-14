
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tzbuf ;
typedef int tzEntry ;
typedef int file_path ;
typedef int FILE ;
typedef int DIR ;


 int * FUNC_0 (char*) ;
 int * FUNC_1 (char*,char*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,char const*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int **,int*,int,int *,int) ;
 int VAR_3 ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int * FUNC_9 (char*,int,int *) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (unsigned char) ;
 scalar_t__ FUNC_12 (unsigned char) ;
 int VAR_4 ;
 scalar_t__ FUNC_13 (char*,char*,int) ;
 char* FUNC_14 (char*) ;
 int FUNC_15 (char*,int,char*,char*,...) ;
 int FUNC_16 (char const*,int,char*,int *) ;
 int FUNC_17 (char*) ;
 char* FUNC_18 (char*,int ) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static int
FUNC_20(const char *VAR_5, int VAR_6,
   tzEntry **VAR_7, int *VAR_8, int VAR_9)
{
 char VAR_10[VAR_1];
 char VAR_11[VAR_1];
 FILE *VAR_12;
 char VAR_13[1024];
 char *VAR_14;
 tzEntry VAR_15;
 int VAR_16 = 0;
 bool VAR_17 = 0;
 const char *VAR_18;







 for (VAR_18 = VAR_5; *VAR_18; VAR_18++)
 {
  if (!FUNC_11((unsigned char) *VAR_18))
  {

   if (VAR_6 > 0)
    FUNC_5("invalid time zone file name \"%s\"",
         VAR_5);
   return -1;
  }
 }






 if (VAR_6 > 3)
 {
  FUNC_5("time zone file recursion limit exceeded in file \"%s\"",
       VAR_5);
  return -1;
 }

 FUNC_10(VAR_4, VAR_10);
 FUNC_15(VAR_11, sizeof(VAR_11), "%s/timezonesets/%s",
    VAR_10, VAR_5);
 VAR_12 = FUNC_1(VAR_11, "r");
 if (!VAR_12)
 {






  int VAR_19 = VAR_3;
  DIR *VAR_20;

  FUNC_15(VAR_11, sizeof(VAR_11), "%s/timezonesets",
     VAR_10);
  VAR_20 = FUNC_0(VAR_11);
  if (VAR_20 == ((void*)0))
  {
   FUNC_5("could not open directory \"%s\": %m",
        VAR_11);
   FUNC_4("This may indicate an incomplete PostgreSQL installation, or that the file \"%s\" has been moved away from its proper location.",
         VAR_4);
   return -1;
  }
  FUNC_2(VAR_20);
  VAR_3 = VAR_19;





  if (VAR_3 != VAR_0 || VAR_6 > 0)
   FUNC_5("could not read time zone file \"%s\": %m",
        VAR_5);

  return -1;
 }

 while (!FUNC_7(VAR_12))
 {
  VAR_16++;
  if (FUNC_9(VAR_13, sizeof(VAR_13), VAR_12) == ((void*)0))
  {
   if (FUNC_8(VAR_12))
   {
    FUNC_5("could not read time zone file \"%s\": %m",
         VAR_5);
    return -1;
   }

   break;
  }
  if (FUNC_17(VAR_13) == sizeof(VAR_13) - 1)
  {

   FUNC_5("line is too long in time zone file \"%s\", line %d",
        VAR_5, VAR_16);
   return -1;
  }


  VAR_14 = VAR_13;
  while (*VAR_14 && FUNC_12((unsigned char) *VAR_14))
   VAR_14++;

  if (*VAR_14 == '\0')
   continue;
  if (*VAR_14 == '#')
   continue;

  if (FUNC_13(VAR_14, "@INCLUDE", FUNC_17("@INCLUDE")) == 0)
  {

   char *VAR_21 = FUNC_14(VAR_14 + FUNC_17("@INCLUDE"));

   VAR_21 = FUNC_18(VAR_21, VAR_2);
   if (!VAR_21 || !*VAR_21)
   {
    FUNC_5("@INCLUDE without file name in time zone file \"%s\", line %d",
         VAR_5, VAR_16);
    return -1;
   }
   VAR_9 = FUNC_20(VAR_21, VAR_6 + 1,
       VAR_7, VAR_8, VAR_9);
   if (VAR_9 < 0)
    return -1;
   continue;
  }

  if (FUNC_13(VAR_14, "@OVERRIDE", FUNC_17("@OVERRIDE")) == 0)
  {
   VAR_17 = 1;
   continue;
  }

  if (!FUNC_16(VAR_5, VAR_16, VAR_14, &VAR_15))
   return -1;
  if (!FUNC_19(&VAR_15))
   return -1;
  VAR_9 = FUNC_6(VAR_7, VAR_8, VAR_9, &VAR_15, VAR_17);
  if (VAR_9 < 0)
   return -1;
 }

 FUNC_3(VAR_12);

 return VAR_9;
}
