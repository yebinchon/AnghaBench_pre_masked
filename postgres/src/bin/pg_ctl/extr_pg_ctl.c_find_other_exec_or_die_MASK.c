
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int full_path ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int FUNC_3 (char const*,char const*,char const*,char*) ;
 char* FUNC_4 (int) ;
 char* VAR_1 ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (int ,char const*,char*,char*) ;

__attribute__((used)) static char *
FUNC_7(const char *VAR_2, const char *VAR_3, const char *VAR_4)
{
 int VAR_5;
 char *VAR_6;

 VAR_6 = FUNC_4(VAR_0);

 if ((VAR_5 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_6)) < 0)
 {
  char VAR_7[VAR_0];

  if (FUNC_2(VAR_2, VAR_7) < 0)
   FUNC_5(VAR_7, VAR_1, sizeof(VAR_7));

  if (VAR_5 == -1)
   FUNC_6(FUNC_0("The program \"%s\" is needed by %s "
         "but was not found in the\n"
         "same directory as \"%s\".\n"
         "Check your installation.\n"),
       VAR_3, VAR_1, VAR_7);
  else
   FUNC_6(FUNC_0("The program \"%s\" was found by \"%s\"\n"
         "but was not the same version as %s.\n"
         "Check your installation.\n"),
       VAR_3, VAR_7, VAR_1);
  FUNC_1(1);
 }

 return VAR_6;
}
