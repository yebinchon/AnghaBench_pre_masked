
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int*,int*) ;

__attribute__((used)) static void
FUNC_1(uint32_t VAR_0[2], uint32_t VAR_1[2], uint32_t VAR_2[2]) {
 uint32_t VAR_3[16];
 uint32_t VAR_4[4];
 int VAR_5;
 for (VAR_5=0;VAR_5<12;VAR_5+=4) {
  VAR_3[VAR_5] = VAR_0[0];
  VAR_3[VAR_5+1] = VAR_0[1];
  VAR_3[VAR_5+2] = VAR_1[0];
  VAR_3[VAR_5+3] = VAR_1[1];
 }

 VAR_3[12] = 0x80;
 VAR_3[13] = 0;
 VAR_3[14] = 384;
 VAR_3[15] = 0;

 FUNC_0(VAR_3,VAR_4);

 VAR_2[0] = (VAR_4[0] + 0x67452301u) ^ (VAR_4[2] + 0x98badcfeu);
 VAR_2[1] = (VAR_4[1] + 0xefcdab89u) ^ (VAR_4[3] + 0x10325476u);
}
