
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int,int) ;
 int FUNC_1 (char*,char*,int) ;
 char* FUNC_2 (char*,char) ;

int FUNC_3(char *VAR_0, char *VAR_1, int VAR_2, int VAR_3)
{
   char VAR_4[256];

   char *VAR_5 = FUNC_2(VAR_0, ';');
   char *VAR_6 = VAR_0;
   while (VAR_5) {
      int VAR_7;

      if (VAR_5 - VAR_6 < 256) {
         FUNC_1(VAR_4, VAR_6, VAR_5-VAR_6+1);
         VAR_7 = FUNC_0(VAR_4, VAR_1, VAR_2, VAR_3);
      } else {
         *VAR_5 = 0;
         VAR_7 = FUNC_0(VAR_6, VAR_1, VAR_2, VAR_3);
         *VAR_5 = ';';
      }
      if (VAR_7 >= 0) return VAR_7;
      VAR_6 = VAR_5+1;
      VAR_5 = FUNC_2(VAR_6, ';');
   }
   return FUNC_0(VAR_6, VAR_1, VAR_2, VAR_3);
}
