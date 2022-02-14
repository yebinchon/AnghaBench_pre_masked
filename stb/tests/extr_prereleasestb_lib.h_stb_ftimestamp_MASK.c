
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int time_t ;
struct stb__stat {int st_mtime; } ;


 int FUNC_0 (int const*,struct stb__stat*) ;
 int FUNC_1 (char*,struct stb__stat*) ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,int ) ;

time_t FUNC_4(char *VAR_0)
{
   struct stb__stat VAR_1;
   if (FUNC_3(
             FUNC_0((const wchar_t *)FUNC_2(VAR_0), &VAR_1),
               FUNC_1(VAR_0,&VAR_1)
          ) == 0)
   {
      return VAR_1.st_mtime;
   } else {
      return 0;
   }
}
