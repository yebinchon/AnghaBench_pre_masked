
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int ** VAR_9 ;

int
FUNC_1(int VAR_10, int *VAR_11)
{
 int VAR_12 = VAR_10, VAR_13, VAR_14;
 const int VAR_15[10] = {6, 9, 3, 1, 5, 4, 2, 8, 0, 7};

 *VAR_11 = 0;
 if (VAR_10 >= VAR_2 && VAR_10 <= VAR_1) {
  VAR_13 = VAR_10 - VAR_2;
  if (VAR_13 == 0x006e || (VAR_13 >= 0x007a && VAR_13 <= 0x0083)) {
   *VAR_11 = VAR_0[VAR_13];
   if (*VAR_11 > 0xf000) {
    *VAR_11 += 0x10000;
   }
   VAR_12 = 0x20E3;
  } else {
   VAR_12 = VAR_0[VAR_13];
   if (VAR_12 > 0xf000) {
    VAR_12 += 0x10000;
   } else if (VAR_12 > 0xe000) {
    VAR_12 += 0xf0000;
   }
  }
 } else if (VAR_10 >= VAR_5 && VAR_10 <= VAR_4) {
  VAR_13 = VAR_10 - VAR_5;
  VAR_12 = VAR_3[VAR_13];
  if (VAR_12 > 0xf000) {
   VAR_12 += 0x10000;
  } else if (VAR_12 > 0xe000) {
   VAR_12 += 0xf0000;
  }
 } else if (VAR_10 >= VAR_8 && VAR_10 <= VAR_7) {
  VAR_13 = VAR_10 - VAR_8;
  if (VAR_13 >= 0x0069 && VAR_13 <= 0x0072) {
   VAR_14 = VAR_15[VAR_13-0x0069];
   *VAR_11 = FUNC_0(VAR_9[VAR_14][0]); VAR_12 = FUNC_0(VAR_9[VAR_14][1]);
  } else {
   VAR_12 = VAR_6[VAR_13];
   if (VAR_12 > 0xf000) {
    VAR_12 += 0x10000;
   } else if (VAR_12 > 0xe000) {
    VAR_12 += 0xf0000;
   }
  }
 }
 return VAR_12;
}
