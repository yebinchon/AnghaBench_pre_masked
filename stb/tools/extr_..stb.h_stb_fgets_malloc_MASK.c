
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int quick_buffer ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int,int *) ;
 scalar_t__ FUNC_2 (char*,size_t) ;
 char* FUNC_3 (char*) ;
 size_t FUNC_4 (char*) ;

char * FUNC_5(FILE *VAR_0)
{

   char VAR_1[800];
   VAR_1[sizeof(VAR_1)-2] = 0;
   if (!FUNC_1(VAR_1, sizeof(VAR_1), VAR_0))
      return ((void*)0);

   if (VAR_1[sizeof(VAR_1)-2] == 0) {
      size_t VAR_2 = FUNC_4(VAR_1);
      if (VAR_2 > 0 && VAR_1[VAR_2-1] == '\n')
         VAR_1[VAR_2-1] = 0;
      return FUNC_3(VAR_1);
   } else {
      char *VAR_3;
      char *VAR_4 = FUNC_3(VAR_1);
      size_t VAR_5 = sizeof(VAR_1)-1;

      while (!FUNC_0(VAR_0)) {
         if (VAR_4[VAR_5-1] == '\n') break;
         VAR_4 = (char *) FUNC_2(VAR_4, VAR_5*2);
         VAR_3 = &VAR_4[VAR_5];
         VAR_3[VAR_5-2] = 0;
         if (!FUNC_1(VAR_3, (int) VAR_5, VAR_0))
            break;
         if (VAR_3[VAR_5-2] == 0) {
            VAR_5 += FUNC_4(VAR_3);
            break;
         }
         VAR_5 = VAR_5 + (VAR_5-1);
      }
      if (VAR_4[VAR_5-1] == '\n')
         VAR_4[VAR_5-1] = 0;
      return VAR_4;
   }
}
