
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,int *) ;

int FUNC_3(char *VAR_1, char *VAR_2)
{
   FILE *VAR_3 = FUNC_1(VAR_1, "rb");
   FILE *VAR_4 = FUNC_1(VAR_2, "rb");

   if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0)) {
      if (VAR_3) FUNC_0(VAR_3);
      if (VAR_4) {
         FUNC_0(VAR_4);
         return VAR_0;
      }
      return VAR_3 != ((void*)0);
   }

   return FUNC_2(VAR_3,VAR_4);
}
