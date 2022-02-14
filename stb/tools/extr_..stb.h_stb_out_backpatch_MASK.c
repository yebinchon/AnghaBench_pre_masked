
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stb_uint ;
typedef int stb_uchar ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int,int,int ) ;
 int FUNC_3 (void*,int *,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(size_t VAR_3, stb_uint VAR_4)
{
   stb_uchar VAR_5[4] = { (stb_uchar)(VAR_4 >> 24), (stb_uchar)(VAR_4 >> 16), (stb_uchar)(VAR_4 >> 8), (stb_uchar)(VAR_4) };
   if (VAR_1) {
      FUNC_3((void *) VAR_3, VAR_5, 4);
   } else {
      stb_uint VAR_6 = FUNC_1(VAR_2);
      FUNC_0(VAR_2, (long) VAR_3, VAR_0);
      FUNC_2(VAR_5, 4, 1, VAR_2);
      FUNC_0(VAR_2, VAR_6, VAR_0);
   }
}
