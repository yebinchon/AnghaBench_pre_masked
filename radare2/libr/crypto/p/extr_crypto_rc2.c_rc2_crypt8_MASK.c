
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut16 ;
struct rc2_state {scalar_t__* ekey; } ;



__attribute__((used)) static void FUNC_0(struct rc2_state *VAR_0, const ut8 *VAR_1, ut8 *VAR_2) {
 int VAR_3;
 ut16 VAR_4, VAR_5, VAR_6, VAR_7;

 VAR_4 = (VAR_1[7] << 8) | VAR_1[6];
 VAR_5 = (VAR_1[5] << 8) | VAR_1[4];
 VAR_6 = (VAR_1[3] << 8) | VAR_1[2];
 VAR_7 = (VAR_1[1] << 8) | VAR_1[0];

 for (VAR_3 = 0; VAR_3 < 16; VAR_3++) {
  VAR_7 += ((VAR_6 & ~VAR_4) + (VAR_5 & VAR_4)) + VAR_0->ekey[4 * VAR_3 + 0];
  VAR_7 = (VAR_7 << 1) + (VAR_7 >> 15 & 1);

  VAR_6 += ((VAR_5 & ~VAR_7) + (VAR_4 & VAR_7)) + VAR_0->ekey[4 * VAR_3 + 1];
  VAR_6 = (VAR_6 << 2) + (VAR_6 >> 14 & 3);

  VAR_5 += ((VAR_4 & ~VAR_6) + (VAR_7 & VAR_6)) + VAR_0->ekey[4 * VAR_3 + 2];
  VAR_5 = (VAR_5 << 3) + (VAR_5 >> 13 & 7);

  VAR_4 += ((VAR_7 & ~VAR_5) + (VAR_6 & VAR_5)) + VAR_0->ekey[4 * VAR_3 + 3];
  VAR_4 = (VAR_4 << 5) + (VAR_4 >> 11 & 31);

  if (VAR_3 == 4 || VAR_3 == 10) {
   VAR_7 += VAR_0->ekey[VAR_4 & 63];
   VAR_6 += VAR_0->ekey[VAR_7 & 63];
   VAR_5 += VAR_0->ekey[VAR_6 & 63];
   VAR_4 += VAR_0->ekey[VAR_5 & 63];
  }
 }

 VAR_2[0] = (ut8) VAR_7;
 VAR_2[1] = (ut8) (VAR_7 >> 8);
 VAR_2[2] = (ut8) VAR_6;
 VAR_2[3] = (ut8) (VAR_6 >> 8);
 VAR_2[4] = (ut8) VAR_5;
 VAR_2[5] = (ut8) (VAR_5 >> 8);
 VAR_2[6] = (ut8) VAR_4;
 VAR_2[7] = (ut8) (VAR_4 >> 8);
}
