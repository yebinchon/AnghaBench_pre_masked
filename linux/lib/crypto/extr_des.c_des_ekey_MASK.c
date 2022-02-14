
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned long u32 ;


 unsigned long FUNC_0 (unsigned long,unsigned long,unsigned long,unsigned long) ;
 int FUNC_1 (unsigned long,int) ;
 unsigned long* VAR_0 ;
 unsigned long* VAR_1 ;
 unsigned long* VAR_2 ;

__attribute__((used)) static unsigned long FUNC_2(u32 *VAR_3, const u8 *VAR_4)
{

 unsigned long VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 const u32 *VAR_10 = VAR_1;

 VAR_8 = VAR_4[4]; VAR_8 &= 0x0e; VAR_8 <<= 4; VAR_8 |= VAR_4[0] & 0x1e; VAR_8 = VAR_0[VAR_8];
 VAR_7 = VAR_4[5]; VAR_7 &= 0x0e; VAR_7 <<= 4; VAR_7 |= VAR_4[1] & 0x1e; VAR_7 = VAR_0[VAR_7];
 VAR_6 = VAR_4[6]; VAR_6 &= 0x0e; VAR_6 <<= 4; VAR_6 |= VAR_4[2] & 0x1e; VAR_6 = VAR_0[VAR_6];
 VAR_5 = VAR_4[7]; VAR_5 &= 0x0e; VAR_5 <<= 4; VAR_5 |= VAR_4[3] & 0x1e; VAR_5 = VAR_0[VAR_5];

 VAR_3[15 * 2 + 0] = FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8); VAR_8 = VAR_2[VAR_8];
 VAR_3[14 * 2 + 0] = FUNC_0(VAR_8, VAR_5, VAR_6, VAR_7); VAR_7 = VAR_2[VAR_7]; VAR_6 = VAR_2[VAR_6];
 VAR_3[13 * 2 + 0] = FUNC_0(VAR_6, VAR_7, VAR_8, VAR_5); VAR_5 = VAR_2[VAR_5]; VAR_8 = VAR_2[VAR_8];
 VAR_3[12 * 2 + 0] = FUNC_0(VAR_8, VAR_5, VAR_6, VAR_7); VAR_7 = VAR_2[VAR_7]; VAR_6 = VAR_2[VAR_6];
 VAR_3[11 * 2 + 0] = FUNC_0(VAR_6, VAR_7, VAR_8, VAR_5); VAR_5 = VAR_2[VAR_5]; VAR_8 = VAR_2[VAR_8];
 VAR_3[10 * 2 + 0] = FUNC_0(VAR_8, VAR_5, VAR_6, VAR_7); VAR_7 = VAR_2[VAR_7]; VAR_6 = VAR_2[VAR_6];
 VAR_3[ 9 * 2 + 0] = FUNC_0(VAR_6, VAR_7, VAR_8, VAR_5); VAR_5 = VAR_2[VAR_5]; VAR_8 = VAR_2[VAR_8];
 VAR_3[ 8 * 2 + 0] = FUNC_0(VAR_8, VAR_5, VAR_6, VAR_7); VAR_7 = VAR_2[VAR_7];
 VAR_3[ 7 * 2 + 0] = FUNC_0(VAR_7, VAR_8, VAR_5, VAR_6); VAR_6 = VAR_2[VAR_6]; VAR_5 = VAR_2[VAR_5];
 VAR_3[ 6 * 2 + 0] = FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8); VAR_8 = VAR_2[VAR_8]; VAR_7 = VAR_2[VAR_7];
 VAR_3[ 5 * 2 + 0] = FUNC_0(VAR_7, VAR_8, VAR_5, VAR_6); VAR_6 = VAR_2[VAR_6]; VAR_5 = VAR_2[VAR_5];
 VAR_3[ 4 * 2 + 0] = FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8); VAR_8 = VAR_2[VAR_8]; VAR_7 = VAR_2[VAR_7];
 VAR_3[ 3 * 2 + 0] = FUNC_0(VAR_7, VAR_8, VAR_5, VAR_6); VAR_6 = VAR_2[VAR_6]; VAR_5 = VAR_2[VAR_5];
 VAR_3[ 2 * 2 + 0] = FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8); VAR_8 = VAR_2[VAR_8]; VAR_7 = VAR_2[VAR_7];
 VAR_3[ 1 * 2 + 0] = FUNC_0(VAR_7, VAR_8, VAR_5, VAR_6); VAR_6 = VAR_2[VAR_6];
 VAR_3[ 0 * 2 + 0] = FUNC_0(VAR_6, VAR_7, VAR_8, VAR_5);


 VAR_9 = (VAR_5 ^ VAR_7) | (VAR_6 ^ VAR_8) | (VAR_2[VAR_5] ^ VAR_7) | (VAR_6 ^ VAR_2[VAR_8]);


 VAR_10 += 512;

 VAR_8 = VAR_4[0]; VAR_8 &= 0xe0; VAR_8 >>= 4; VAR_8 |= VAR_4[4] & 0xf0; VAR_8 = VAR_0[VAR_8 + 1];
 VAR_7 = VAR_4[1]; VAR_7 &= 0xe0; VAR_7 >>= 4; VAR_7 |= VAR_4[5] & 0xf0; VAR_7 = VAR_0[VAR_7 + 1];
 VAR_6 = VAR_4[2]; VAR_6 &= 0xe0; VAR_6 >>= 4; VAR_6 |= VAR_4[6] & 0xf0; VAR_6 = VAR_0[VAR_6 + 1];
 VAR_5 = VAR_4[3]; VAR_5 &= 0xe0; VAR_5 >>= 4; VAR_5 |= VAR_4[7] & 0xf0; VAR_5 = VAR_0[VAR_5 + 1];


 VAR_9 |= (VAR_5 ^ VAR_7) | (VAR_6 ^ VAR_8) | (VAR_2[VAR_5] ^ VAR_7) | (VAR_6 ^ VAR_2[VAR_8]);

 VAR_3[15 * 2 + 1] = FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8); VAR_8 = VAR_2[VAR_8];
 VAR_3[14 * 2 + 1] = FUNC_0(VAR_8, VAR_5, VAR_6, VAR_7); VAR_7 = VAR_2[VAR_7]; VAR_6 = VAR_2[VAR_6];
 VAR_3[13 * 2 + 1] = FUNC_0(VAR_6, VAR_7, VAR_8, VAR_5); VAR_5 = VAR_2[VAR_5]; VAR_8 = VAR_2[VAR_8];
 VAR_3[12 * 2 + 1] = FUNC_0(VAR_8, VAR_5, VAR_6, VAR_7); VAR_7 = VAR_2[VAR_7]; VAR_6 = VAR_2[VAR_6];
 VAR_3[11 * 2 + 1] = FUNC_0(VAR_6, VAR_7, VAR_8, VAR_5); VAR_5 = VAR_2[VAR_5]; VAR_8 = VAR_2[VAR_8];
 VAR_3[10 * 2 + 1] = FUNC_0(VAR_8, VAR_5, VAR_6, VAR_7); VAR_7 = VAR_2[VAR_7]; VAR_6 = VAR_2[VAR_6];
 VAR_3[ 9 * 2 + 1] = FUNC_0(VAR_6, VAR_7, VAR_8, VAR_5); VAR_5 = VAR_2[VAR_5]; VAR_8 = VAR_2[VAR_8];
 VAR_3[ 8 * 2 + 1] = FUNC_0(VAR_8, VAR_5, VAR_6, VAR_7); VAR_7 = VAR_2[VAR_7];
 VAR_3[ 7 * 2 + 1] = FUNC_0(VAR_7, VAR_8, VAR_5, VAR_6); VAR_6 = VAR_2[VAR_6]; VAR_5 = VAR_2[VAR_5];
 VAR_3[ 6 * 2 + 1] = FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8); VAR_8 = VAR_2[VAR_8]; VAR_7 = VAR_2[VAR_7];
 VAR_3[ 5 * 2 + 1] = FUNC_0(VAR_7, VAR_8, VAR_5, VAR_6); VAR_6 = VAR_2[VAR_6]; VAR_5 = VAR_2[VAR_5];
 VAR_3[ 4 * 2 + 1] = FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8); VAR_8 = VAR_2[VAR_8]; VAR_7 = VAR_2[VAR_7];
 VAR_3[ 3 * 2 + 1] = FUNC_0(VAR_7, VAR_8, VAR_5, VAR_6); VAR_6 = VAR_2[VAR_6]; VAR_5 = VAR_2[VAR_5];
 VAR_3[ 2 * 2 + 1] = FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8); VAR_8 = VAR_2[VAR_8]; VAR_7 = VAR_2[VAR_7];
 VAR_3[ 1 * 2 + 1] = FUNC_0(VAR_7, VAR_8, VAR_5, VAR_6); VAR_6 = VAR_2[VAR_6];
 VAR_3[ 0 * 2 + 1] = FUNC_0(VAR_6, VAR_7, VAR_8, VAR_5);


 for (VAR_8 = 0; VAR_8 < 16; ++VAR_8) {
  VAR_5 = VAR_3[2 * VAR_8];
  VAR_6 = VAR_3[2 * VAR_8 + 1];
  VAR_7 = VAR_5 ^ VAR_6;
  VAR_7 &= 0xffff0000;
  VAR_5 ^= VAR_7;
  VAR_6 ^= VAR_7;
  FUNC_1(VAR_6, 18);
  VAR_3[2 * VAR_8] = VAR_5;
  VAR_3[2 * VAR_8 + 1] = VAR_6;
 }


 return VAR_9;
}
