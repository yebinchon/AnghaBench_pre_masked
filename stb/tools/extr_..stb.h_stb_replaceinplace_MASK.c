
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,size_t) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,char*) ;

void FUNC_5(char *VAR_0, char *VAR_1, char *VAR_2)
{
   size_t VAR_3 = FUNC_3(VAR_1);
   size_t VAR_4 = FUNC_3(VAR_2);
   int VAR_5;

   char *VAR_6,*VAR_7,*VAR_8;

   VAR_5 = (int) (VAR_4 - VAR_3);
   FUNC_0(VAR_5 <= 0);
   if (VAR_5 > 0) return;

   VAR_7 = FUNC_4(VAR_0, VAR_1);
   if (VAR_7 == ((void*)0)) return;

   VAR_6 = VAR_8 = VAR_7;
   while (*VAR_6) {
      FUNC_1(VAR_8, VAR_2, VAR_4);
      VAR_7 += VAR_3;
      VAR_8 += VAR_4;
      VAR_6 = FUNC_4(VAR_7, VAR_1);
      if (VAR_6 == ((void*)0)) VAR_6 = VAR_7 + FUNC_3(VAR_7);
      FUNC_2(VAR_8, VAR_7, VAR_6-VAR_7);
      VAR_8 += VAR_6-VAR_7;
      VAR_7 = VAR_6;
   }
   *VAR_8 = 0;
}
