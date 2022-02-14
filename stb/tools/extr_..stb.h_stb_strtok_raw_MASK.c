
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * FUNC_0 (char*,char) ;

__attribute__((used)) static char *FUNC_1(char *VAR_0, char *VAR_1, char *VAR_2, int VAR_3, int VAR_4)
{
   if (VAR_4) {
      while (*VAR_1 && FUNC_0(VAR_2, *VAR_1) != ((void*)0)) {
         *VAR_0++ = *VAR_1++;
      }
   } else {
      while (*VAR_1 && FUNC_0(VAR_2, *VAR_1) == ((void*)0)) {
         *VAR_0++ = *VAR_1++;
      }
   }
   *VAR_0 = 0;
   if (VAR_3)
      return VAR_1;
   else
      return *VAR_1 ? VAR_1+1 : VAR_1;
}
