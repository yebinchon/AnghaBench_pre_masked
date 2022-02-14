
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {char* d_name; } ;
typedef int DIR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 int * FUNC_1 (char const*) ;
 struct dirent* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char*,char*) ;

int
FUNC_4(const char *VAR_2)
{
 int VAR_3 = 1;
 DIR *VAR_4;
 struct dirent *VAR_5;
 bool VAR_6 = 0;
 bool VAR_7 = 0;
 int VAR_8;

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4 == ((void*)0))
  return (VAR_1 == VAR_0) ? 0 : -1;

 while (VAR_1 = 0, (VAR_5 = FUNC_2(VAR_4)) != ((void*)0))
 {
  if (FUNC_3(".", VAR_5->d_name) == 0 ||
   FUNC_3("..", VAR_5->d_name) == 0)
  {

   continue;
  }


  else if (VAR_5->d_name[0] == '.')
  {
   VAR_6 = 1;
  }

  else if (FUNC_3("lost+found", VAR_5->d_name) == 0)
  {
   VAR_7 = 1;
  }

  else
  {
   VAR_3 = 4;
   break;
  }
 }

 if (VAR_1)
  VAR_3 = -1;


 VAR_8 = VAR_1;
 if (FUNC_0(VAR_4))
  VAR_3 = -1;
 else
  VAR_1 = VAR_8;


 if (VAR_3 == 1 && VAR_7)
  VAR_3 = 3;


 if (VAR_3 == 1 && VAR_6)
  VAR_3 = 2;

 return VAR_3;
}
