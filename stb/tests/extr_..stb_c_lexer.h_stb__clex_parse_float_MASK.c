
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (int,unsigned int) ;

__attribute__((used)) static double FUNC_1(char *VAR_0, char **VAR_1)
{
   char *VAR_2 = VAR_0;
   double VAR_3=0;
   int VAR_4=10;
   int VAR_5=0;
   for (;;) {
      if (*VAR_0 >= '0' && *VAR_0 <= '9')
         VAR_3 = VAR_3*VAR_4 + (*VAR_0++ - '0');






      else
         break;
   }

   if (*VAR_0 == '.') {
      double VAR_6, VAR_7 = 0;
      ++VAR_0;
      for (VAR_6=1; ; VAR_6*=VAR_4) {
         if (*VAR_0 >= '0' && *VAR_0 <= '9')
            VAR_7 = VAR_7*VAR_4 + (*VAR_0++ - '0');






         else
            break;
      }
      VAR_3 += VAR_7 / VAR_6;
   }
      VAR_5 = (*VAR_0 == 'e' || *VAR_0 == 'E');

   if (VAR_5) {
      int VAR_8 = VAR_0[1] == '-';
      unsigned int VAR_9=0;
      double VAR_10=1;
      ++VAR_0;
      if (*VAR_0 == '-' || *VAR_0 == '+')
         ++VAR_0;
      while (*VAR_0 >= '0' && *VAR_0 <= '9')
         VAR_9 = VAR_9*10 + (*VAR_0++ - '0');






         VAR_10 = FUNC_0(10, VAR_9);
      if (VAR_8)
         VAR_3 /= VAR_10;
      else
         VAR_3 *= VAR_10;
   }
   *VAR_1 = VAR_0;
   return VAR_3;
}
