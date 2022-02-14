
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (int ) ;

int FUNC_1(char *VAR_1)
{
   const char *VAR_2 = FUNC_0(VAR_0);
   for(;;) {
      char *VAR_3 = VAR_1;
      for (;;) {
         if (*VAR_3 == 0) {
            if (*VAR_2 == 0 || *VAR_2 == ' ') return 1;
            break;
         }
         if (*VAR_2 != *VAR_3)
            break;
         ++VAR_2, ++VAR_3;
      }
      while (*VAR_2 && *VAR_2 != ' ') ++VAR_2;
      if (!*VAR_2) return 0;
      ++VAR_2;
   }
}
