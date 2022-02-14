
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int,int) ;
 scalar_t__ FUNC_2 (char*,char*,int,int) ;
 scalar_t__ FUNC_3 (char) ;

int FUNC_4(char *VAR_0, char *VAR_1, int VAR_2, int VAR_3)
{
   int VAR_4=0;
   int VAR_5 = -1;

   if (!VAR_2) {

      if (*VAR_0 != '*')
         VAR_5 = 0;
      while (*VAR_0 != '*') {
         if (!*VAR_0)
            return *VAR_1 == 0 ? 0 : -1;
         if (*VAR_0 == '?') {
            if (!*VAR_1) return -1;
         } else {
            if (VAR_3) {
               if (FUNC_3(*VAR_1) != FUNC_3(*VAR_0))
                  return -1;
            } else
               if (*VAR_1 != *VAR_0)
                  return -1;
         }
         ++VAR_1, ++VAR_0, ++VAR_4;
      }
   } else {

      if (!*VAR_0)
         return 0;
   }

   FUNC_0(VAR_2 || *VAR_0 == '*');
   if (!VAR_2)
      ++VAR_0;



   while (*VAR_0) {
      int VAR_6=0;

      while (VAR_0[0] == '*') ++VAR_0;




      if (!VAR_0[0]) return VAR_5 >= 0 ? VAR_5 : 0;


      VAR_6 = 0;
      while (VAR_0[VAR_6] != '*') {
         if (VAR_0[VAR_6] == 0)
            break;
         ++VAR_6;
      }

      if (VAR_0[VAR_6] == 0 && !VAR_2) {
         int VAR_7;
         for (VAR_7=0; VAR_7 < VAR_6; ++VAR_7)
            if (VAR_1[VAR_7] == 0)
               return -1;
         while (VAR_1[VAR_7])
            ++VAR_7;

         if (FUNC_2(VAR_1+VAR_7-VAR_6, VAR_0, VAR_6, VAR_3))
            return VAR_5 >= 0 ? VAR_5 : 0;
         return -1;
      } else {

         int VAR_8 = FUNC_1(VAR_1, VAR_0, VAR_6, VAR_3);
         if (VAR_8 < 0)
            return -1;
         if (VAR_5 < 0)
            VAR_5 = VAR_4 + VAR_8;
         VAR_0 += VAR_6;
         VAR_1 += VAR_8+VAR_6;
      }

      if (*VAR_0 == 0) {
         FUNC_0(VAR_2);
         return VAR_5;
      }

      FUNC_0(*VAR_0 == '*');
      ++VAR_0;
   }

   return VAR_5 >= 0 ? VAR_5 : 0;
}
