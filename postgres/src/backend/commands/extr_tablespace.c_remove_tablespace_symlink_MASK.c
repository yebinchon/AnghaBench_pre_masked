
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,char const*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_6 (char const*,struct stat*) ;
 scalar_t__ FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (char const*) ;

void
FUNC_9(const char *VAR_4)
{
 struct stat VAR_5;

 if (FUNC_6(VAR_4, &VAR_5) < 0)
 {
  if (VAR_3 == VAR_0)
   return;
  FUNC_2(VAR_2,
    (FUNC_4(),
     FUNC_5("could not stat file \"%s\": %m", VAR_4)));
 }

 if (FUNC_0(VAR_5.st_mode))
 {




  if (FUNC_7(VAR_4) < 0 && VAR_3 != VAR_0)
   FUNC_2(VAR_2,
     (FUNC_4(),
      FUNC_5("could not remove directory \"%s\": %m",
       VAR_4)));
 }
 else
 {

  FUNC_2(VAR_2,
    (FUNC_3(VAR_1),
     FUNC_5("\"%s\" is not a directory or symbolic link",
      VAR_4)));
 }
}
