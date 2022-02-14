
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static char **FUNC_2(char *VAR_0, char *VAR_1, int *VAR_2,
                             int VAR_3, int VAR_4, char *VAR_5, char *VAR_6)
{
   int VAR_7 = 0;
   unsigned char *VAR_8 = (unsigned char *) VAR_0;
   static char VAR_9[256];
   static char VAR_10[256],VAR_11[256];
   char *VAR_12;
   char **VAR_13;
   int VAR_14=0;
   unsigned char *VAR_15;

   VAR_15 = (unsigned char *) VAR_1; while (*VAR_15) VAR_9[*VAR_15++] = 1;
   if (VAR_5) {
      VAR_15 = (unsigned char *) VAR_5; while (*VAR_15) VAR_10[*VAR_15++] = 1;
      VAR_15 = (unsigned char *) VAR_6; if (VAR_15) while (*VAR_15) VAR_10[*VAR_15++] = 1;
      VAR_15 = (unsigned char *) VAR_6; if (VAR_15) while (*VAR_15) VAR_11[*VAR_15++] = 1;
   }
   VAR_10[0] = 1;


   VAR_15 = (unsigned char *) VAR_8;
   while (*VAR_15) {


      if (!VAR_4) {
         VAR_9[0] = 0;
         while (VAR_9[*VAR_15])
            ++VAR_15;
         if (!*VAR_15) break;
      }
      ++VAR_14;

      VAR_9[0] = 1;
      if (VAR_3 == 2) {
         while (!VAR_9[*VAR_15]) {
            if (*VAR_15 != '"')
               ++VAR_15;
            else {
               ++VAR_15;
               if (*VAR_15 == '"')
                  ++VAR_15;
               else {

                  while (*VAR_15) {
                     if (VAR_15[0] == '"') {
                        if (VAR_15[1] == '"') VAR_15 += 2;
                        else { ++VAR_15; break; }
                     } else
                        ++VAR_15;
                  }
               }
            }
         }
      } else
         while (VAR_7 || !VAR_9[*VAR_15]) {
            if (VAR_10[*VAR_15]) {
               if (!*VAR_15) break;
               if (VAR_6 ? VAR_11[*VAR_15] : VAR_7)
                  --VAR_7;
               else
                  ++VAR_7;
            }
            ++VAR_15;
         }
      if (VAR_4) {
         if (*VAR_15) ++VAR_15;
      }
   }



   VAR_13 = (char **) FUNC_1(sizeof(*VAR_13) * (VAR_14+1) + (VAR_15-VAR_8+1));
   if (VAR_13 == ((void*)0)) return VAR_13;
   VAR_12 = (char *) (VAR_13 + (VAR_14+1));

   VAR_15 = (unsigned char *) VAR_8;
   VAR_14 = 0;
   VAR_7 = 0;
   while (*VAR_15) {
      char *VAR_16;


      if (!VAR_4) {
         VAR_9[0] = 0;
         if (VAR_3)
            while (VAR_9[*VAR_15] || FUNC_0(*VAR_15))
               ++VAR_15;
         else
            while (VAR_9[*VAR_15])
               ++VAR_15;
      } else if (VAR_3) {
         while (FUNC_0(*VAR_15)) ++VAR_15;
      }
      if (!*VAR_15) break;

      VAR_13[VAR_14] = VAR_12;
      ++VAR_14;

      VAR_9[0] = 1;
      VAR_16 = VAR_12-1;
      if (VAR_3 == 2) {
         while (!VAR_9[*VAR_15]) {
            if (*VAR_15 != '"') {
               if (!FUNC_0(*VAR_15)) VAR_16 = VAR_12;
               *VAR_12++ = *VAR_15++;
            } else {
               ++VAR_15;
               if (*VAR_15 == '"') {
                  if (!FUNC_0(*VAR_15)) VAR_16 = VAR_12;
                  *VAR_12++ = *VAR_15++;
               } else {

                  while (*VAR_15) {
                     if (VAR_15[0] == '"') {
                        if (VAR_15[1] == '"') { *VAR_12++ = *VAR_15; VAR_15 += 2; }
                        else { ++VAR_15; break; }
                     } else
                        *VAR_12++ = *VAR_15++;
                  }
                  VAR_16 = VAR_12-1;
               }
            }
         }
      } else {
         while (VAR_7 || !VAR_9[*VAR_15]) {
            if (!FUNC_0(*VAR_15)) VAR_16 = VAR_12;
            if (VAR_10[*VAR_15]) {
               if (!*VAR_15) break;
               if (VAR_6 ? VAR_11[*VAR_15] : VAR_7)
                  --VAR_7;
               else
                  ++VAR_7;
            }
            *VAR_12++ = *VAR_15++;
         }
      }

      if (VAR_3)
         VAR_12 = VAR_16+1;
      *VAR_12++ = '\0';

      if (*VAR_15) ++VAR_15;
   }
   VAR_15 = (unsigned char *) VAR_1; while (*VAR_15) VAR_9[*VAR_15++] = 0;
   if (VAR_5) {
      VAR_15 = (unsigned char *) VAR_5; while (*VAR_15) VAR_10[*VAR_15++] = 1;
      VAR_15 = (unsigned char *) VAR_6; if (VAR_15) while (*VAR_15) VAR_10[*VAR_15++] = 1;
      VAR_15 = (unsigned char *) VAR_6; if (VAR_15) while (*VAR_15) VAR_11[*VAR_15++] = 1;
   }
   if (VAR_2 != ((void*)0)) *VAR_2 = VAR_14;
   VAR_13[VAR_14] = 0;
   return VAR_13;
}
