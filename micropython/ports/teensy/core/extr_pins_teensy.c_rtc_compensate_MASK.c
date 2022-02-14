
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;

void FUNC_0(int VAR_1)
{
 uint32_t VAR_2, VAR_3, VAR_4;






 if (VAR_1 >= 0) {
  VAR_2 = VAR_1;
  VAR_3 = 256;
  while (1) {
   VAR_4 = VAR_2 * VAR_3;
   if (VAR_4 < 128*256) break;
   if (--VAR_3 == 1) break;
  }
  VAR_4 = VAR_4 >> 8;
 } else {
  VAR_2 = -VAR_1;
  VAR_3 = 256;
  while (1) {
   VAR_4 = VAR_2 * VAR_3;
   if (VAR_4 < 129*256) break;
   if (--VAR_3 == 1) break;
  }
  VAR_4 = VAR_4 >> 8;
  VAR_4 = 256 - VAR_4;
 }
 VAR_0 = ((VAR_3 - 1) << 8) | VAR_4;
}
