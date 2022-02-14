
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;


 scalar_t__ FUNC_0 (float,int) ;

__attribute__((used)) static float FUNC_1(uint32 VAR_0)
{

   uint32 VAR_1 = VAR_0 & 0x1fffff;
   uint32 VAR_2 = VAR_0 & 0x80000000;
   uint32 VAR_3 = (VAR_0 & 0x7fe00000) >> 21;
   double VAR_4 = VAR_2 ? -(double)VAR_1 : (double)VAR_1;
   return (float) FUNC_0((float)VAR_4, VAR_3-788);
}
