
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,int *) ;

int FUNC_3(char *VAR_0, char *VAR_1)
{
   FILE *VAR_2 = FUNC_1(VAR_0, "rb");
   FILE *VAR_3 = FUNC_1(VAR_1, "rb");

   if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0)) {
      if (VAR_2) FUNC_0(VAR_2);
      if (VAR_3) {
         FUNC_0(VAR_3);
         return 1;
      }
      return VAR_2 != ((void*)0);
   }

   return FUNC_2(VAR_2,VAR_3);
}
