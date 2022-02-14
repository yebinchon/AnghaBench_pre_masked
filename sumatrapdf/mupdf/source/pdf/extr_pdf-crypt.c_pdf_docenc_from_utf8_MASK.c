
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int*,char const*) ;
 int* VAR_0 ;

__attribute__((used)) static void FUNC_1(char *VAR_1, const char *VAR_2, int VAR_3)
{
 int VAR_4 = 0, VAR_5, VAR_6;
 while (*VAR_2 && VAR_4 + 1 < VAR_3)
 {
  VAR_2 += FUNC_0(&VAR_6, VAR_2);
  for (VAR_5 = 0; VAR_5 < 256; VAR_5++)
  {
   if (VAR_6 == VAR_0[VAR_5])
   {
    VAR_1[VAR_4++] = VAR_5;
    break;
   }
  }

 }
 VAR_1[VAR_4] = 0;
}
