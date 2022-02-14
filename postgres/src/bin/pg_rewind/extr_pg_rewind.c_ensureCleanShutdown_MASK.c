
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int full_path ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 int FUNC_1 (char const*,char*,int ,char*) ;
 int FUNC_2 (char*,char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;
 int VAR_6 ;
 int FUNC_5 (char*,int,char*,char*,char*,char*) ;
 int FUNC_6 (char*,int ,int) ;
 scalar_t__ FUNC_7 (char*) ;

__attribute__((used)) static void
FUNC_8(const char *VAR_7)
{
 int VAR_8;

 char VAR_9[VAR_2];
 char VAR_10[(2 * VAR_2)];


 if ((VAR_8 = FUNC_1(VAR_7, "postgres",
          VAR_3,
          VAR_9)) < 0)
 {
  char VAR_11[VAR_2];

  if (FUNC_0(VAR_7, VAR_11) < 0)
   FUNC_6(VAR_11, VAR_6, sizeof(VAR_11));

  if (VAR_8 == -1)
   FUNC_2("The program \"%s\" is needed by %s but was\n"
      "not found in the same directory as \"%s\".\n"
      "Check your installation.",
      "postgres", VAR_6, VAR_11);
  else
   FUNC_2("The program \"%s\" was found by \"%s\" but was\n"
      "not the same version as %s.\n"
      "Check your installation.",
      "postgres", VAR_11, VAR_6);
 }

 FUNC_4("executing \"%s\" for target server to complete crash recovery",
    VAR_9);





 if (VAR_5)
  return;






 FUNC_5(VAR_10, (2 * VAR_2), "\"%s\" --single -F -D \"%s\" template1 < \"%s\"",
    VAR_9, VAR_4, VAR_0);

 if (FUNC_7(VAR_10) != 0)
 {
  FUNC_3("postgres single-user mode of target instance failed");
  FUNC_2("Command was: %s", VAR_10);
 }
}
