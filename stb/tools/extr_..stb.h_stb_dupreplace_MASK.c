
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,char*,size_t) ;
 int FUNC_3 (char*,int,char*) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*,char*) ;

char *FUNC_7(char *VAR_0, char *VAR_1, char *VAR_2)
{
   size_t VAR_3 = FUNC_5(VAR_1);
   size_t VAR_4 = FUNC_5(VAR_2);
   int VAR_5 = 0;

   char *VAR_6,*VAR_7,*VAR_8;

   VAR_6 = FUNC_6(VAR_0, VAR_1);
   if (VAR_6 == ((void*)0)) return FUNC_4(VAR_0);
   do {
      ++VAR_5;
      VAR_6 = FUNC_6(VAR_6 + VAR_3, VAR_1);
   } while (VAR_6 != ((void*)0));

   VAR_7 = (char *) FUNC_1(FUNC_5(VAR_0) + VAR_5 * (VAR_4 - VAR_3) + 1);
   if (VAR_7 == ((void*)0)) return VAR_7;
   VAR_8 = VAR_7;
   VAR_6 = VAR_0;
   for (;;) {
      char *VAR_9 = FUNC_6(VAR_6, VAR_1);
      if (VAR_9 == ((void*)0)) {
         FUNC_3(VAR_8,FUNC_5(VAR_0)+VAR_5*(VAR_4-VAR_3)+1,VAR_6);
         FUNC_0(FUNC_5(VAR_7) == FUNC_5(VAR_0) + VAR_5*(VAR_4-VAR_3));
         return VAR_7;
      }
      FUNC_2(VAR_8, VAR_6, VAR_9-VAR_6);
      VAR_8 += VAR_9-VAR_6;
      FUNC_2(VAR_8, VAR_2, VAR_4);
      VAR_8 += VAR_4;
      VAR_6 = VAR_9 + VAR_3;
   }
}
