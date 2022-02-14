
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char*,int,int) ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;

void FUNC_1(unsigned char *VAR_7, int VAR_8, int VAR_9, int VAR_10, int VAR_11)
{
  int VAR_12 = VAR_6[VAR_10];
  int VAR_13 = VAR_4[VAR_10];
  int VAR_14 = VAR_3[VAR_10];
  int VAR_15 = VAR_5[VAR_10];
  int VAR_16, VAR_17, VAR_18, VAR_19 = 16;

  if (VAR_10 == VAR_2) {
    FUNC_0(VAR_7, 0, VAR_8 * VAR_9 * VAR_15);
    for (VAR_17 = 0; VAR_17 < VAR_9; VAR_17++) {
      for (VAR_18 = 0; VAR_18 < VAR_8; VAR_18++) {
        if (VAR_11 & VAR_0) VAR_16 = (VAR_9 - VAR_17 - 1) * VAR_8 + VAR_18;
        else VAR_16 = VAR_17 * VAR_8 + VAR_18;
        if (((VAR_17 / 8) + (VAR_18 / 8)) % 2 == 0)
          VAR_7[VAR_16] = (VAR_17 < VAR_19) ? 255 : 0;
        else VAR_7[VAR_16] = (VAR_17 < VAR_19) ? 76 : 226;
      }
    }
  } else if (VAR_10 == VAR_1) {
    FUNC_0(VAR_7, 255, VAR_8 * VAR_9 * VAR_15);
    for (VAR_17 = 0; VAR_17 < VAR_9; VAR_17++) {
      for (VAR_18 = 0; VAR_18 < VAR_8; VAR_18++) {
        if (VAR_11 & VAR_0) VAR_16 = (VAR_9 - VAR_17 - 1) * VAR_8 + VAR_18;
        else VAR_16 = VAR_17 * VAR_8 + VAR_18;
        if (((VAR_17 / 8) + (VAR_18 / 8)) % 2 == 0) {
          if (VAR_17 >= VAR_19) VAR_7[VAR_16 * VAR_15 + 3] = 0;
        } else {
          VAR_7[VAR_16 * VAR_15 + 2] = 0;
          if (VAR_17 < VAR_19) VAR_7[VAR_16 * VAR_15 + 1] = 0;
        }
      }
    }
  } else {
    FUNC_0(VAR_7, 0, VAR_8 * VAR_9 * VAR_15);
    for (VAR_17 = 0; VAR_17 < VAR_9; VAR_17++) {
      for (VAR_18 = 0; VAR_18 < VAR_8; VAR_18++) {
        if (VAR_11 & VAR_0) VAR_16 = (VAR_9 - VAR_17 - 1) * VAR_8 + VAR_18;
        else VAR_16 = VAR_17 * VAR_8 + VAR_18;
        if (((VAR_17 / 8) + (VAR_18 / 8)) % 2 == 0) {
          if (VAR_17 < VAR_19) {
            VAR_7[VAR_16 * VAR_15 + VAR_12] = 255;
            VAR_7[VAR_16 * VAR_15 + VAR_13] = 255;
            VAR_7[VAR_16 * VAR_15 + VAR_14] = 255;
          }
        } else {
          VAR_7[VAR_16 * VAR_15 + VAR_12] = 255;
          if (VAR_17 >= VAR_19) VAR_7[VAR_16 * VAR_15 + VAR_13] = 255;
        }
      }
    }
  }
}
