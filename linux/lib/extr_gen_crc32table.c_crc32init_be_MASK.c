
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int** VAR_3 ;

__attribute__((used)) static void FUNC_0(void)
{
 unsigned VAR_4, VAR_5;
 uint32_t VAR_6 = 0x80000000;

 VAR_3[0][0] = 0;

 for (VAR_4 = 1; VAR_4 < VAR_1; VAR_4 <<= 1) {
  VAR_6 = (VAR_6 << 1) ^ ((VAR_6 & 0x80000000) ? VAR_2 : 0);
  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
   VAR_3[0][VAR_4 + VAR_5] = VAR_6 ^ VAR_3[0][VAR_5];
 }
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_6 = VAR_3[0][VAR_4];
  for (VAR_5 = 1; VAR_5 < VAR_0; VAR_5++) {
   VAR_6 = VAR_3[0][(VAR_6 >> 24) & 0xff] ^ (VAR_6 << 8);
   VAR_3[VAR_5][VAR_4] = VAR_6;
  }
 }
}
