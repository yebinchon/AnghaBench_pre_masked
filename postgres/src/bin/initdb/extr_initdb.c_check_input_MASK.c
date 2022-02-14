
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*,struct stat*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_6(char *VAR_3)
{
 struct stat VAR_4;

 if (FUNC_5(VAR_3, &VAR_4) != 0)
 {
  if (VAR_1 == VAR_0)
  {
   FUNC_4("file \"%s\" does not exist", VAR_3);
   FUNC_3(VAR_2,
     "%s", FUNC_1("This might mean you have a corrupted installation or identified\n"
       "the wrong directory with the invocation option -L.\n"));
  }
  else
  {
   FUNC_4("could not access file \"%s\": %m", VAR_3);
   FUNC_3(VAR_2,
     "%s", FUNC_1("This might mean you have a corrupted installation or identified\n"
       "the wrong directory with the invocation option -L.\n"));
  }
  FUNC_2(1);
 }
 if (!FUNC_0(VAR_4.st_mode))
 {
  FUNC_4("file \"%s\" is not a regular file", VAR_3);
  FUNC_3(VAR_2,
    "%s", FUNC_1("This might mean you have a corrupted installation or identified\n"
      "the wrong directory with the invocation option -L.\n"));
  FUNC_2(1);
 }
}
