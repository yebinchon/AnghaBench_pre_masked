
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;


 size_t FUNC_0 (size_t,int ) ;
 size_t* VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static void
FUNC_1(uint32_t VAR_2[16], uint32_t VAR_3[4]) {
 uint32_t VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11;

 VAR_4 = 0x67452301u;
 VAR_5 = 0xefcdab89u;
 VAR_6 = 0x98badcfeu;
 VAR_7 = 0x10325476u;

 for(VAR_11 = 0; VAR_11<64; VAR_11++) {
  if (VAR_11 < 16) {
   VAR_8 = (VAR_5 & VAR_6) | ((~VAR_5) & VAR_7);
   VAR_9 = VAR_11;
  } else if (VAR_11 < 32) {
   VAR_8 = (VAR_7 & VAR_5) | ((~VAR_7) & VAR_6);
   VAR_9 = (5*VAR_11 + 1) % 16;
  } else if (VAR_11 < 48) {
   VAR_8 = VAR_5 ^ VAR_6 ^ VAR_7;
   VAR_9 = (3*VAR_11 + 5) % 16;
  } else {
   VAR_8 = VAR_6 ^ (VAR_5 | (~VAR_7));
   VAR_9 = (7*VAR_11) % 16;
  }

  VAR_10 = VAR_7;
  VAR_7 = VAR_6;
  VAR_6 = VAR_5;
  VAR_5 = VAR_5 + FUNC_0((VAR_4 + VAR_8 + VAR_0[VAR_11] + VAR_2[VAR_9]), VAR_1[VAR_11]);
  VAR_4 = VAR_10;
 }

 VAR_3[0] = VAR_4;
 VAR_3[1] = VAR_5;
 VAR_3[2] = VAR_6;
 VAR_3[3] = VAR_7;
}
