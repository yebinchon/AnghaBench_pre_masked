
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;


 int** VAR_0 ;
 int** VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int** VAR_7 ;
 int** VAR_8 ;
 scalar_t__* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int const) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_12)
{
 uint32 VAR_13,
    VAR_14,
    VAR_15,
    VAR_16;
 int VAR_17,
    VAR_18;

 if (!VAR_4)
  FUNC_0();

 VAR_15 = FUNC_1(*(const uint32 *) VAR_12);
 VAR_16 = FUNC_1(*(const uint32 *) (VAR_12 + 4));

 if ((VAR_15 | VAR_16)
  && VAR_15 == VAR_10
  && VAR_16 == VAR_11)
 {





  return 0;
 }
 VAR_10 = VAR_15;
 VAR_11 = VAR_16;




 VAR_13 = VAR_7[0][VAR_15 >> 25]
  | VAR_7[1][(VAR_15 >> 17) & 0x7f]
  | VAR_7[2][(VAR_15 >> 9) & 0x7f]
  | VAR_7[3][(VAR_15 >> 1) & 0x7f]
  | VAR_7[4][VAR_16 >> 25]
  | VAR_7[5][(VAR_16 >> 17) & 0x7f]
  | VAR_7[6][(VAR_16 >> 9) & 0x7f]
  | VAR_7[7][(VAR_16 >> 1) & 0x7f];
 VAR_14 = VAR_8[0][VAR_15 >> 25]
  | VAR_8[1][(VAR_15 >> 17) & 0x7f]
  | VAR_8[2][(VAR_15 >> 9) & 0x7f]
  | VAR_8[3][(VAR_15 >> 1) & 0x7f]
  | VAR_8[4][VAR_16 >> 25]
  | VAR_8[5][(VAR_16 >> 17) & 0x7f]
  | VAR_8[6][(VAR_16 >> 9) & 0x7f]
  | VAR_8[7][(VAR_16 >> 1) & 0x7f];




 VAR_17 = 0;
 for (VAR_18 = 0; VAR_18 < 16; VAR_18++)
 {
  uint32 VAR_19,
     VAR_20;

  VAR_17 += VAR_9[VAR_18];

  VAR_19 = (VAR_13 << VAR_17) | (VAR_13 >> (28 - VAR_17));
  VAR_20 = (VAR_14 << VAR_17) | (VAR_14 >> (28 - VAR_17));

  VAR_2[15 - VAR_18] =
   VAR_5[VAR_18] = VAR_0[0][(VAR_19 >> 21) & 0x7f]
   | VAR_0[1][(VAR_19 >> 14) & 0x7f]
   | VAR_0[2][(VAR_19 >> 7) & 0x7f]
   | VAR_0[3][VAR_19 & 0x7f]
   | VAR_0[4][(VAR_20 >> 21) & 0x7f]
   | VAR_0[5][(VAR_20 >> 14) & 0x7f]
   | VAR_0[6][(VAR_20 >> 7) & 0x7f]
   | VAR_0[7][VAR_20 & 0x7f];

  VAR_3[15 - VAR_18] =
   VAR_6[VAR_18] = VAR_1[0][(VAR_19 >> 21) & 0x7f]
   | VAR_1[1][(VAR_19 >> 14) & 0x7f]
   | VAR_1[2][(VAR_19 >> 7) & 0x7f]
   | VAR_1[3][VAR_19 & 0x7f]
   | VAR_1[4][(VAR_20 >> 21) & 0x7f]
   | VAR_1[5][(VAR_20 >> 14) & 0x7f]
   | VAR_1[6][(VAR_20 >> 7) & 0x7f]
   | VAR_1[7][VAR_20 & 0x7f];
 }
 return 0;
}
