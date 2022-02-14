
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {char* d_name; } ;
typedef int DIR ;


 int * FUNC_0 (char const*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 struct dirent* FUNC_2 (int *,char const*,int ) ;
 scalar_t__ FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static bool
FUNC_6(const char *VAR_1, const char *VAR_2, int VAR_3,
      char *VAR_4, int VAR_5)
{
 bool VAR_6 = 0;
 DIR *VAR_7;
 struct dirent *VAR_8;

 VAR_7 = FUNC_0(VAR_1);

 while ((VAR_8 = FUNC_2(VAR_7, VAR_1, VAR_0)) != ((void*)0))
 {




  if (VAR_8->d_name[0] == '.')
   continue;

  if (FUNC_5(VAR_8->d_name) == VAR_3 &&
   FUNC_3(VAR_8->d_name, VAR_2, VAR_3) == 0)
  {

   FUNC_4(VAR_4, VAR_8->d_name, VAR_5);
   VAR_6 = 1;
   break;
  }
 }

 FUNC_1(VAR_7);

 return VAR_6;
}
