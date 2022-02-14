
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct stb__stat {int dummy; } ;


 int FUNC_0 (int const*,struct stb__stat*) ;
 int FUNC_1 (char*,struct stb__stat*) ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,int ) ;

int FUNC_4(char *VAR_0)
{
   struct stb__stat VAR_1;
   return FUNC_3(
             FUNC_0((const wchar_t *)FUNC_2(VAR_0), &VAR_1),
               FUNC_1(VAR_0,&VAR_1)
          ) == 0;
}
