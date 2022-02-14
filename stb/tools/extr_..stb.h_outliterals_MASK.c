
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ stb_uint ;
typedef int stb_uchar ;
typedef int ptrdiff_t ;


 int FUNC_0 (int *,int,int,int ) ;
 int FUNC_1 (scalar_t__,int *,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(stb_uchar *VAR_2, ptrdiff_t VAR_3)
{
   while (VAR_3 > 65536) {
      FUNC_5(VAR_2,65536);
      VAR_2 += 65536;
      VAR_3 -= 65536;
   }

   if (VAR_3 == 0) ;
   else if (VAR_3 <= 32) FUNC_2 (0x000020 + (stb_uint) VAR_3-1);
   else if (VAR_3 <= 2048) FUNC_3(0x000800 + (stb_uint) VAR_3-1);
   else FUNC_4(0x070000 + (stb_uint) VAR_3-1);

   if (VAR_0) {
      FUNC_1(VAR_0,VAR_2,VAR_3);
      VAR_0 += VAR_3;
   } else
      FUNC_0(VAR_2, 1, VAR_3, VAR_1);
}
