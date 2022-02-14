
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static u8 FUNC_0(const u8 VAR_0, const unsigned int VAR_1)
{




 static const u8 VAR_2[16] = {0, 1, 3, 5, 7, 9, 11, 13, 14,
       12, 10, 8, 6, 4, 2, 0};





 static const u8 VAR_3[15] = {0x8, 0x7, 0x9, 0x6, 0xa, 0x5, 0xb, 0x4,
       0xc, 0x3, 0xd, 0x2, 0xe, 0x1, 0xf};


 static const u8 VAR_4[15] = {0x0, 0x6, 0xf, 0x8, 0x7, 0x5, 0x3, 0x4,
       0xc, 0xd, 0xe, 0x1, 0x2, 0xb, 0xa};







 static const u8 VAR_5[16] = {0, 11, 12, 6, 7, 5, 1, 4,
       3, 0x00, 14, 13, 8, 9, 10, 2};

 const u8 VAR_6 = VAR_0 & 0xf;
 const u8 VAR_7 = (VAR_0 >> 4) & 0xf;
 const u8 VAR_8 = (VAR_7 == 0x9) ? 0x9 : VAR_4[(VAR_5[VAR_7] + VAR_1) % 15];

 if (VAR_2[VAR_6] < VAR_1)
  return 0x00;

 return ((VAR_3[14 + VAR_1 - VAR_2[VAR_6]]) | (VAR_8 << 4));
}
