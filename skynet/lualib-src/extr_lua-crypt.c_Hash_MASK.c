
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static void
FUNC_0(const char * VAR_0, int VAR_1, uint8_t VAR_2[8]) {
 uint32_t VAR_3 = 5381L;
 uint32_t VAR_4 = 1315423911L;

 int VAR_5;
 for (VAR_5=0;VAR_5<VAR_1;VAR_5++) {
  uint8_t VAR_6 = (uint8_t)VAR_0[VAR_5];
  VAR_3 += (VAR_3 << 5) + VAR_6;
  VAR_4 ^= ((VAR_4 << 5) + VAR_6 + (VAR_4 >> 2));
 }

 VAR_2[0] = VAR_3 & 0xff;
 VAR_2[1] = (VAR_3 >> 8) & 0xff;
 VAR_2[2] = (VAR_3 >> 16) & 0xff;
 VAR_2[3] = (VAR_3 >> 24) & 0xff;

 VAR_2[4] = VAR_4 & 0xff;
 VAR_2[5] = (VAR_4 >> 8) & 0xff;
 VAR_2[6] = (VAR_4 >> 16) & 0xff;
 VAR_2[7] = (VAR_4 >> 24) & 0xff;
}
