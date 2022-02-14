
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {int dummy; } ;
typedef int DIR ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char const*) ;
 scalar_t__ VAR_0 ;
 struct dirent* FUNC_3 (int *) ;

struct dirent *
FUNC_4(DIR *VAR_1, const char *VAR_2, int VAR_3)
{
 struct dirent *VAR_4;


 if (VAR_1 == ((void*)0))
 {
  FUNC_0(VAR_3,
    (FUNC_1(),
     FUNC_2("could not open directory \"%s\": %m",
      VAR_2)));
  return ((void*)0);
 }

 VAR_0 = 0;
 if ((VAR_4 = FUNC_3(VAR_1)) != ((void*)0))
  return VAR_4;

 if (VAR_0)
  FUNC_0(VAR_3,
    (FUNC_1(),
     FUNC_2("could not read directory \"%s\": %m",
      VAR_2)));
 return ((void*)0);
}
