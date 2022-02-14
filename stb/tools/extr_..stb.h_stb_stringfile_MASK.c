
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 size_t FUNC_1 (char*,int,size_t,int *) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char**,char*,size_t) ;
 int * FUNC_5 (char*,char*) ;
 size_t FUNC_6 (int *) ;

char ** FUNC_7(char *VAR_0, int *VAR_1)
{
   FILE *VAR_2 = FUNC_5(VAR_0, "rb");
   char *VAR_3, **VAR_4=((void*)0), *VAR_5;
   size_t VAR_6, VAR_7, VAR_8;

   if (!VAR_2) return ((void*)0);
   VAR_6 = FUNC_6(VAR_2);
   VAR_3 = (char *) FUNC_3(VAR_6+1);
   VAR_6 = FUNC_1(VAR_3, 1, VAR_6, VAR_2);
   VAR_3[VAR_6] = 0;
   FUNC_0(VAR_2);


   for (VAR_8=0; VAR_8 < 2; ++VAR_8) {
      VAR_5 = VAR_3;
      if (VAR_8 == 1)
         VAR_4[0] = VAR_5;
      VAR_7 = 1;
      while (*VAR_5) {
         if (*VAR_5 == '\n' || *VAR_5 == '\r') {

            int VAR_9 = (VAR_5[0] + VAR_5[1]) == ('\n' + '\r');
            if (VAR_8 == 1) *VAR_5 = 0;
            if (VAR_9) ++VAR_5;
            if (VAR_5[1]) {
               if (VAR_8 == 1) VAR_4[VAR_7] = VAR_5+1;
               ++VAR_7;
            }
         }
         ++VAR_5;
      }
      if (VAR_8 == 0) {
         VAR_4 = (char **) FUNC_3(sizeof(*VAR_4) * (VAR_7+1) + VAR_6+1);
         if (!VAR_4) return ((void*)0);
         VAR_4[VAR_7] = 0;

         FUNC_4(&VAR_4[VAR_7+1], VAR_3, VAR_6+1);
         FUNC_2(VAR_3);
         VAR_3 = (char *) &VAR_4[VAR_7+1];
         if (VAR_1) *VAR_1 = (int) VAR_7;
      }
   }
   return VAR_4;
}
