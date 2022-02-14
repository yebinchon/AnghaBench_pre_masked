
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;

int FUNC_1(int *VAR_0, int VAR_1, int VAR_2, char *VAR_3)
{
   int VAR_4=0,VAR_5=0, VAR_6=0,VAR_7=0;
   if (VAR_0 == ((void*)0)) VAR_1 = 0x7ffffff0;
   else VAR_1 *= 2;

   for(;;) {
      int VAR_8=VAR_5;
      int VAR_9;

      while (FUNC_0(VAR_3[VAR_5])) {
         if (VAR_3[VAR_5] == '\n' || VAR_3[VAR_5] == '\r') {
            if (VAR_3[VAR_5] + VAR_3[VAR_5+1] == '\n' + '\r') ++VAR_5;
            if (VAR_4 >= VAR_1) return -1;
            if (VAR_0) VAR_0[VAR_4] = VAR_6, VAR_0[VAR_4+1] = VAR_8-VAR_6;
            VAR_4 += 2;
            VAR_7=0;
            VAR_6 = VAR_5+1;
            VAR_8 = VAR_6;
         }
         ++VAR_5;
      }
      if (VAR_5 >= VAR_6+VAR_2) {

         if (VAR_7) {
            if (VAR_4 >= VAR_1) return -1;
            if (VAR_0) VAR_0[VAR_4] = VAR_6, VAR_0[VAR_4+1] = VAR_8-VAR_6;
            VAR_4 += 2;
            VAR_6 = VAR_8 = VAR_5;
            VAR_7=0;
         } else {

            while (VAR_5 >= VAR_6+VAR_2) {
               if (VAR_4 >= VAR_1) return -1;
               if (VAR_0) VAR_0[VAR_4] = VAR_6, VAR_0[VAR_4+1] = VAR_2;
               VAR_4 += 2;
               VAR_6 += VAR_2;
            }
            VAR_8 = VAR_6;
         }
      }

      if (VAR_3[VAR_5] == 0) break;

      VAR_9 = VAR_5;
      while (VAR_3[VAR_5] && !FUNC_0(VAR_3[VAR_5])) {
         ++VAR_5;
      }

      if (VAR_5 > VAR_6 + VAR_2) {

         if (VAR_5-VAR_8 <= VAR_2) {
            if (VAR_4 >= VAR_1) return -1;
            if (VAR_0) VAR_0[VAR_4] = VAR_6, VAR_0[VAR_4+1] = VAR_8-VAR_6;
            VAR_4 += 2;
            VAR_6 = VAR_9;
         } else {



            if ((VAR_9-VAR_6) + ((VAR_5-VAR_9) % VAR_2) <= VAR_2 || !VAR_7) {

               if (VAR_4 >= VAR_1) return -1;
               if (VAR_0) VAR_0[VAR_4] = VAR_6, VAR_0[VAR_4+1] = VAR_2;
               VAR_4 += 2;
               VAR_6 += VAR_2;
               VAR_9 = VAR_6;
            } else {

               if (VAR_8 != VAR_6) {
                  if (VAR_4 >= VAR_1) return -1;
                  if (VAR_0) VAR_0[VAR_4] = VAR_6, VAR_0[VAR_4+1] = VAR_8-VAR_6;
                  VAR_4 += 2;
                  VAR_6 = VAR_9;
               }
            }

            while (VAR_6 + VAR_2 <= VAR_5) {
               if (VAR_4 >= VAR_1) return -1;
               if (VAR_0) VAR_0[VAR_4] = VAR_6, VAR_0[VAR_4+1] = VAR_2;
               VAR_4 += 2;
               VAR_6 += VAR_2;
            }
         }
      }
      VAR_7=1;
   }
   if (VAR_6 < VAR_5) {
      if (VAR_4 >= VAR_1) return -1;
      if (VAR_0) VAR_0[VAR_4] = VAR_6, VAR_0[VAR_4+1] = VAR_5-VAR_6;
      VAR_4 += 2;
   }
   return VAR_4>>1;
}
