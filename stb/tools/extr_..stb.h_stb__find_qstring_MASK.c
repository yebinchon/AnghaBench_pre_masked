
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char*,int,int) ;
 char FUNC_1 (char) ;

__attribute__((used)) static int FUNC_2(char *VAR_0, char *VAR_1, int VAR_2, int VAR_3)
{
   char VAR_4;

   int VAR_5=0;
   while (*VAR_1 == '?') {
      ++VAR_1;
      --VAR_2;
      ++VAR_0;
      if (VAR_2 == 0) return 0;
      if (*VAR_0 == 0) return -1;
   }

   VAR_4 = *VAR_1++;
   --VAR_2;
   if (VAR_3) VAR_4 = FUNC_1(VAR_4);

   while (VAR_0[VAR_5]) {
      if (VAR_4 == (VAR_3 ? FUNC_1(VAR_0[VAR_5]) : VAR_0[VAR_5]))
         if (FUNC_0(VAR_0+VAR_5+1, VAR_1, VAR_2, VAR_3))
            return VAR_5;
      ++VAR_5;
   }

   return -1;
}
