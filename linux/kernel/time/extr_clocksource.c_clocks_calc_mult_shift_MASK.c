
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int FUNC_0 (int,int) ;

void
FUNC_1(u32 *VAR_0, u32 *VAR_1, u32 VAR_2, u32 VAR_3, u32 VAR_4)
{
 u64 VAR_5;
 u32 VAR_6, VAR_7= 32;





 VAR_5 = ((u64)VAR_4 * VAR_2) >> 32;
 while (VAR_5) {
  VAR_5 >>=1;
  VAR_7--;
 }





 for (VAR_6 = 32; VAR_6 > 0; VAR_6--) {
  VAR_5 = (u64) VAR_3 << VAR_6;
  VAR_5 += VAR_2 / 2;
  FUNC_0(VAR_5, VAR_2);
  if ((VAR_5 >> VAR_7) == 0)
   break;
 }
 *VAR_0 = VAR_5;
 *VAR_1 = VAR_6;
}
