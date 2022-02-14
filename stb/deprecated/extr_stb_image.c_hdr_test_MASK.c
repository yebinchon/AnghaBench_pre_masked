
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stbi ;


 char const FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(stbi *VAR_0)
{
   const char *VAR_1 = "#?RADIANCE\n";
   int VAR_2;
   for (VAR_2=0; VAR_1[VAR_2]; ++VAR_2)
      if (FUNC_0(VAR_0) != VAR_1[VAR_2])
         return 0;
   return 1;
}
