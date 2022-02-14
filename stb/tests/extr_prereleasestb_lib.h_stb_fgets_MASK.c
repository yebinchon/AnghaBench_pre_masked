
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 char* FUNC_0 (char*,int,int *) ;
 int FUNC_1 (char*) ;

char * FUNC_2(char *VAR_0, int VAR_1, FILE *VAR_2)
{
   char *VAR_3;
   VAR_0[0] = 0;
   VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
   if (VAR_3) {
      int VAR_4 = FUNC_1(VAR_3)-1;
      if (VAR_4 >= 0)
         if (VAR_3[VAR_4] == '\n')
            VAR_3[VAR_4] = 0;
   }
   return VAR_3;
}
