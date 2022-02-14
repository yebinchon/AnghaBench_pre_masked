
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ u_char ;
struct php_crypt_extended_data {int old_rawkey0; int old_rawkey1; int* de_keysl; int* en_keysl; int* de_keysr; int* en_keysr; } ;


 int** VAR_0 ;
 int** VAR_1 ;
 int** VAR_2 ;
 int** VAR_3 ;
 scalar_t__* VAR_4 ;

__attribute__((used)) static int
FUNC_0(const char *VAR_5, struct php_crypt_extended_data *VAR_6)
{
 uint32_t VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11, VAR_12;

 VAR_9 =
  (uint32_t)(u_char)VAR_5[3] |
  ((uint32_t)(u_char)VAR_5[2] << 8) |
  ((uint32_t)(u_char)VAR_5[1] << 16) |
  ((uint32_t)(u_char)VAR_5[0] << 24);
 VAR_10 =
  (uint32_t)(u_char)VAR_5[7] |
  ((uint32_t)(u_char)VAR_5[6] << 8) |
  ((uint32_t)(u_char)VAR_5[5] << 16) |
  ((uint32_t)(u_char)VAR_5[4] << 24);

 if ((VAR_9 | VAR_10)
     && VAR_9 == VAR_6->old_rawkey0
     && VAR_10 == VAR_6->old_rawkey1) {






  return(0);
 }
 VAR_6->old_rawkey0 = VAR_9;
 VAR_6->old_rawkey1 = VAR_10;




 VAR_7 = VAR_2[0][VAR_9 >> 25]
    | VAR_2[1][(VAR_9 >> 17) & 0x7f]
    | VAR_2[2][(VAR_9 >> 9) & 0x7f]
    | VAR_2[3][(VAR_9 >> 1) & 0x7f]
    | VAR_2[4][VAR_10 >> 25]
    | VAR_2[5][(VAR_10 >> 17) & 0x7f]
    | VAR_2[6][(VAR_10 >> 9) & 0x7f]
    | VAR_2[7][(VAR_10 >> 1) & 0x7f];
 VAR_8 = VAR_3[0][VAR_9 >> 25]
    | VAR_3[1][(VAR_9 >> 17) & 0x7f]
    | VAR_3[2][(VAR_9 >> 9) & 0x7f]
    | VAR_3[3][(VAR_9 >> 1) & 0x7f]
    | VAR_3[4][VAR_10 >> 25]
    | VAR_3[5][(VAR_10 >> 17) & 0x7f]
    | VAR_3[6][(VAR_10 >> 9) & 0x7f]
    | VAR_3[7][(VAR_10 >> 1) & 0x7f];



 VAR_11 = 0;
 for (VAR_12 = 0; VAR_12 < 16; VAR_12++) {
  uint32_t VAR_13, VAR_14;

  VAR_11 += VAR_4[VAR_12];

  VAR_13 = (VAR_7 << VAR_11) | (VAR_7 >> (28 - VAR_11));
  VAR_14 = (VAR_8 << VAR_11) | (VAR_8 >> (28 - VAR_11));

  VAR_6->de_keysl[15 - VAR_12] =
  VAR_6->en_keysl[VAR_12] = VAR_0[0][(VAR_13 >> 21) & 0x7f]
    | VAR_0[1][(VAR_13 >> 14) & 0x7f]
    | VAR_0[2][(VAR_13 >> 7) & 0x7f]
    | VAR_0[3][VAR_13 & 0x7f]
    | VAR_0[4][(VAR_14 >> 21) & 0x7f]
    | VAR_0[5][(VAR_14 >> 14) & 0x7f]
    | VAR_0[6][(VAR_14 >> 7) & 0x7f]
    | VAR_0[7][VAR_14 & 0x7f];

  VAR_6->de_keysr[15 - VAR_12] =
  VAR_6->en_keysr[VAR_12] = VAR_1[0][(VAR_13 >> 21) & 0x7f]
    | VAR_1[1][(VAR_13 >> 14) & 0x7f]
    | VAR_1[2][(VAR_13 >> 7) & 0x7f]
    | VAR_1[3][VAR_13 & 0x7f]
    | VAR_1[4][(VAR_14 >> 21) & 0x7f]
    | VAR_1[5][(VAR_14 >> 14) & 0x7f]
    | VAR_1[6][(VAR_14 >> 7) & 0x7f]
    | VAR_1[7][VAR_14 & 0x7f];
 }
 return(0);
}
