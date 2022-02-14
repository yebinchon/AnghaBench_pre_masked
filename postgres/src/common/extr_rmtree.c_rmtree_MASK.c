
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (char*,struct stat*) ;
 int FUNC_2 (char*,char const*) ;
 char** FUNC_3 (char const*) ;
 int FUNC_4 (char**) ;
 scalar_t__ FUNC_5 (char const*) ;
 int FUNC_6 (char*,int,char*,char const*,char*) ;
 scalar_t__ FUNC_7 (char*) ;

bool
FUNC_8(const char *VAR_3, bool VAR_4)
{
 bool VAR_5 = 1;
 char VAR_6[VAR_1];
 char **VAR_7;
 char **VAR_8;
 struct stat VAR_9;





 VAR_7 = FUNC_3(VAR_3);

 if (VAR_7 == ((void*)0))
  return 0;


 for (VAR_8 = VAR_7; *VAR_8; VAR_8++)
 {
  FUNC_6(VAR_6, VAR_1, "%s/%s", VAR_3, *VAR_8);
  if (FUNC_1(VAR_6, &VAR_9) != 0)
  {
   if (VAR_2 != VAR_0)
   {
    FUNC_2("could not stat file or directory \"%s\": %m",
          VAR_6);
    VAR_5 = 0;
   }
   continue;
  }

  if (FUNC_0(VAR_9.st_mode))
  {

   if (!FUNC_8(VAR_6, 1))
   {

    VAR_5 = 0;
   }
  }
  else
  {
   if (FUNC_7(VAR_6) != 0)
   {
    if (VAR_2 != VAR_0)
    {
     FUNC_2("could not remove file or directory \"%s\": %m",
           VAR_6);
     VAR_5 = 0;
    }
   }
  }
 }

 if (VAR_4)
 {
  if (FUNC_5(VAR_3) != 0)
  {
   FUNC_2("could not remove file or directory \"%s\": %m",
         VAR_3);
   VAR_5 = 0;
  }
 }

 FUNC_4(VAR_7);

 return VAR_5;
}
