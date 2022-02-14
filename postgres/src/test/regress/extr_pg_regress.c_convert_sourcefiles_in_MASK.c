
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int line ;
typedef int FILE ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*) ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char*,int,int *) ;
 int * FUNC_6 (char*,char*) ;
 int FUNC_7 (int ,char*,char*,char*,...) ;
 int FUNC_8 (char*,int *) ;
 char* VAR_4 ;
 int FUNC_9 (char*) ;
 char* VAR_5 ;
 char** FUNC_10 (char*) ;
 int FUNC_11 (char**) ;
 char* VAR_6 ;
 int FUNC_12 (char*,char*,char*) ;
 int FUNC_13 (char*,int) ;
 int FUNC_14 (char*,int,char*,char const*,...) ;
 int FUNC_15 (char*,struct stat*) ;
 int VAR_7 ;
 scalar_t__ FUNC_16 (char*,char*) ;
 char* FUNC_17 (int ) ;
 int FUNC_18 (char*) ;

__attribute__((used)) static void
FUNC_19(const char *VAR_8, const char *VAR_9, const char *VAR_10, const char *VAR_11)
{
 char VAR_12[VAR_1];
 char VAR_13[VAR_1];
 struct stat VAR_14;
 int VAR_15;
 char **VAR_16;
 char **VAR_17;
 int VAR_18 = 0;

 FUNC_14(VAR_13, VAR_1, "%s/%s", VAR_4, VAR_8);


 VAR_15 = FUNC_15(VAR_13, &VAR_14);
 if (VAR_15 != 0 || !FUNC_0(VAR_14.st_mode))
 {




  return;
 }

 VAR_17 = FUNC_10(VAR_13);
 if (!VAR_17)

  FUNC_3(2);

 FUNC_14(VAR_12, VAR_1, "%s/testtablespace", VAR_5);
 for (VAR_16 = VAR_17; *VAR_16; VAR_16++)
 {
  char VAR_19[VAR_1];
  char VAR_20[VAR_1];
  char VAR_21[VAR_1];
  FILE *VAR_22,
       *VAR_23;
  char VAR_24[1024];


  if (FUNC_18(*VAR_16) < 8)
   continue;
  if (FUNC_16(*VAR_16 + FUNC_18(*VAR_16) - 7, ".source") != 0)
   continue;

  VAR_18++;


  FUNC_14(VAR_21, FUNC_18(*VAR_16) - 6, "%s", *VAR_16);
  FUNC_14(VAR_19, VAR_1, "%s/%s", VAR_13, *VAR_16);
  FUNC_14(VAR_20, VAR_1, "%s/%s/%s.%s", VAR_9, VAR_10,
     VAR_21, VAR_11);

  VAR_22 = FUNC_6(VAR_19, "r");
  if (!VAR_22)
  {
   FUNC_7(VAR_7, FUNC_1("%s: could not open file \"%s\" for reading: %s\n"),
     VAR_6, VAR_19, FUNC_17(VAR_3));
   FUNC_3(2);
  }
  VAR_23 = FUNC_6(VAR_20, "w");
  if (!VAR_23)
  {
   FUNC_7(VAR_7, FUNC_1("%s: could not open file \"%s\" for writing: %s\n"),
     VAR_6, VAR_20, FUNC_17(VAR_3));
   FUNC_3(2);
  }
  while (FUNC_5(VAR_24, sizeof(VAR_24), VAR_22))
  {
   FUNC_12(VAR_24, "@abs_srcdir@", VAR_4);
   FUNC_12(VAR_24, "@abs_builddir@", VAR_5);
   FUNC_12(VAR_24, "@testtablespace@", VAR_12);
   FUNC_12(VAR_24, "@libdir@", VAR_2);
   FUNC_12(VAR_24, "@DLSUFFIX@", VAR_0);
   FUNC_8(VAR_24, VAR_23);
  }
  FUNC_4(VAR_22);
  FUNC_4(VAR_23);
 }





 if (VAR_18 <= 0)
 {
  FUNC_7(VAR_7, FUNC_1("%s: no *.source files found in \"%s\"\n"),
    VAR_6, VAR_13);
  FUNC_3(2);
 }

 FUNC_11(VAR_17);
}
