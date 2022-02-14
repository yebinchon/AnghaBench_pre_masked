
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
 int ** VAR_6 ;

int
FUNC_1(int VAR_7, int *VAR_8)
{
 int VAR_9 = VAR_7, VAR_10, VAR_11;
 const int VAR_12[] = {3, 1, 5, 4, 0, 7};

 *VAR_8 = 0;
 if (VAR_7 >= VAR_2 && VAR_7 <= VAR_1) {
  VAR_10 = VAR_7 - VAR_2;
  if (VAR_10 == 0x0008) {
   *VAR_8 = FUNC_0(VAR_6[2][0]); VAR_9 = FUNC_0(VAR_6[2][1]);
  } else if (VAR_10 == 0x0009) {
   *VAR_8 = FUNC_0(VAR_6[8][0]); VAR_9 = FUNC_0(VAR_6[8][1]);
  } else if (VAR_10 >= 0x008d && VAR_10 <= 0x0092) {
   VAR_11 = VAR_12[VAR_10-0x008d];
   *VAR_8 = FUNC_0(VAR_6[VAR_11][0]); VAR_9 = FUNC_0(VAR_6[VAR_11][1]);
  } else if (VAR_10 == 0x0104) {
   *VAR_8 = 0x0023; VAR_9 = 0x20E3;
  } else {
   VAR_9 = VAR_0[VAR_10];
   if (VAR_9 > 0xf000) {
    VAR_9 += 0x10000;
   } else if (VAR_9 > 0xe000) {
    VAR_9 += 0xf0000;
   }
  }
 } else if (VAR_7 >= VAR_5 && VAR_7 <= VAR_4) {
  VAR_10 = VAR_7 - VAR_5;
  if (VAR_10 == 100) {
   *VAR_8 = FUNC_0(VAR_6[6][0]); VAR_9 = FUNC_0(VAR_6[6][1]);
  } else if (VAR_10 >= 0x00ba && VAR_10 <= 0x00c2) {
   *VAR_8 = VAR_10-0x00ba+0x0031; VAR_9 = 0x20E3;
  } else if (VAR_10 == 0x010b) {
   *VAR_8 = FUNC_0(VAR_6[9][0]); VAR_9 = FUNC_0(VAR_6[9][1]);
  } else if (VAR_10 == 0x0144) {
   *VAR_8 = 0x0030; VAR_9 = 0x20E3;
  } else {
   VAR_9 = VAR_3[VAR_10];
   if (VAR_9 > 0xf000) {
    VAR_9 += 0x10000;
   } else if (VAR_9 > 0xe000) {
    VAR_9 += 0xf0000;
   }
  }
 }
 return VAR_9;
}
