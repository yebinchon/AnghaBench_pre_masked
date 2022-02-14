
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct php_crypt_extended_data {int* en_keysl; int* en_keysr; int* de_keysl; int* de_keysr; int saltbits; } ;


 int** VAR_0 ;
 int** VAR_1 ;
 int** VAR_2 ;
 int** VAR_3 ;
 size_t** VAR_4 ;
 int** VAR_5 ;

__attribute__((used)) static int
FUNC_0(uint32_t VAR_6, uint32_t VAR_7, uint32_t *VAR_8, uint32_t *VAR_9,
 int VAR_10, struct php_crypt_extended_data *VAR_11)
{



 uint32_t VAR_12, VAR_13, *VAR_14, *VAR_15, *VAR_16, *VAR_17;
 uint32_t VAR_18, VAR_19, VAR_20, VAR_21;
 int VAR_22;

 if (VAR_10 == 0) {
  return(1);
 } else if (VAR_10 > 0) {



  VAR_16 = VAR_11->en_keysl;
  VAR_17 = VAR_11->en_keysr;
 } else {



  VAR_10 = -VAR_10;
  VAR_16 = VAR_11->de_keysl;
  VAR_17 = VAR_11->de_keysr;
 }




 VAR_12 = VAR_2[0][VAR_6 >> 24]
   | VAR_2[1][(VAR_6 >> 16) & 0xff]
   | VAR_2[2][(VAR_6 >> 8) & 0xff]
   | VAR_2[3][VAR_6 & 0xff]
   | VAR_2[4][VAR_7 >> 24]
   | VAR_2[5][(VAR_7 >> 16) & 0xff]
   | VAR_2[6][(VAR_7 >> 8) & 0xff]
   | VAR_2[7][VAR_7 & 0xff];
 VAR_13 = VAR_3[0][VAR_6 >> 24]
   | VAR_3[1][(VAR_6 >> 16) & 0xff]
   | VAR_3[2][(VAR_6 >> 8) & 0xff]
   | VAR_3[3][VAR_6 & 0xff]
   | VAR_3[4][VAR_7 >> 24]
   | VAR_3[5][(VAR_7 >> 16) & 0xff]
   | VAR_3[6][(VAR_7 >> 8) & 0xff]
   | VAR_3[7][VAR_7 & 0xff];

 VAR_21 = VAR_11->saltbits;
 while (VAR_10--) {



  VAR_14 = VAR_16;
  VAR_15 = VAR_17;
  VAR_22 = 16;
  while (VAR_22--) {



   VAR_19 = ((VAR_13 & 0x00000001) << 23)
    | ((VAR_13 & 0xf8000000) >> 9)
    | ((VAR_13 & 0x1f800000) >> 11)
    | ((VAR_13 & 0x01f80000) >> 13)
    | ((VAR_13 & 0x001f8000) >> 15);

   VAR_20 = ((VAR_13 & 0x0001f800) << 7)
    | ((VAR_13 & 0x00001f80) << 5)
    | ((VAR_13 & 0x000001f8) << 3)
    | ((VAR_13 & 0x0000001f) << 1)
    | ((VAR_13 & 0x80000000) >> 31);




   VAR_18 = (VAR_19 ^ VAR_20) & VAR_21;
   VAR_19 ^= VAR_18 ^ *VAR_14++;
   VAR_20 ^= VAR_18 ^ *VAR_15++;




   VAR_18 = VAR_5[0][VAR_4[0][VAR_19 >> 12]]
     | VAR_5[1][VAR_4[1][VAR_19 & 0xfff]]
     | VAR_5[2][VAR_4[2][VAR_20 >> 12]]
     | VAR_5[3][VAR_4[3][VAR_20 & 0xfff]];



   VAR_18 ^= VAR_12;
   VAR_12 = VAR_13;
   VAR_13 = VAR_18;
  }
  VAR_13 = VAR_12;
  VAR_12 = VAR_18;
 }



 *VAR_8 = VAR_0[0][VAR_12 >> 24]
  | VAR_0[1][(VAR_12 >> 16) & 0xff]
  | VAR_0[2][(VAR_12 >> 8) & 0xff]
  | VAR_0[3][VAR_12 & 0xff]
  | VAR_0[4][VAR_13 >> 24]
  | VAR_0[5][(VAR_13 >> 16) & 0xff]
  | VAR_0[6][(VAR_13 >> 8) & 0xff]
  | VAR_0[7][VAR_13 & 0xff];
 *VAR_9 = VAR_1[0][VAR_12 >> 24]
  | VAR_1[1][(VAR_12 >> 16) & 0xff]
  | VAR_1[2][(VAR_12 >> 8) & 0xff]
  | VAR_1[3][VAR_12 & 0xff]
  | VAR_1[4][VAR_13 >> 24]
  | VAR_1[5][(VAR_13 >> 16) & 0xff]
  | VAR_1[6][(VAR_13 >> 8) & 0xff]
  | VAR_1[7][VAR_13 & 0xff];
 return(0);
}
