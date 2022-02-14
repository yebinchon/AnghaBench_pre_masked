
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct stat {int st_mode; } ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*,struct stat*) ;
 int * FUNC_4 (char const*) ;

int FUNC_5(const char *VAR_2)
{
 int VAR_3 = 0;
 struct stat VAR_4;
 if(VAR_2 && !FUNC_3(VAR_2, &VAR_4))
 {
  if(FUNC_1(VAR_4.st_mode))
   VAR_3=1;
 }

 return VAR_3;
}
