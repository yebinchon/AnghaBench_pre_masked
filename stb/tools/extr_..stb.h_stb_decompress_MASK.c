
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stb_uint ;
typedef int stb_uchar ;


 int FUNC_0 (int) ;
 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int*,int) ;
 int FUNC_3 (int*) ;
 int* FUNC_4 (int*) ;

stb_uint FUNC_5(stb_uchar *VAR_5, stb_uchar *VAR_6, stb_uint VAR_7)
{
   stb_uint VAR_8;
   if (FUNC_1(0) != 0x57bC0000) return 0;
   if (FUNC_1(4) != 0) return 0;
   VAR_8 = FUNC_3(VAR_6);
   VAR_1 = VAR_6;
   VAR_2 = VAR_6+VAR_7;
   VAR_0 = VAR_5 + VAR_8;
   VAR_3 = VAR_5;
   VAR_6 += 16;

   VAR_4 = VAR_5;
   while (1) {
      stb_uchar *VAR_9 = VAR_6;
      VAR_6 = FUNC_4(VAR_6);
      if (VAR_6 == VAR_9) {
         if (*VAR_6 == 0x05 && VAR_6[1] == 0xfa) {
            FUNC_0(VAR_4 == VAR_5 + VAR_8);
            if (VAR_4 != VAR_5 + VAR_8) return 0;
            if (FUNC_2(1, VAR_5, VAR_8) != (stb_uint) FUNC_1(2))
               return 0;
            return VAR_8;
         } else {
            FUNC_0(0);
            return 0;
         }
      }
      FUNC_0(VAR_4 <= VAR_5 + VAR_8);
      if (VAR_4 > VAR_5 + VAR_8)
         return 0;
   }
}
