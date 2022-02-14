
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char,unsigned char,unsigned char,unsigned char,unsigned char*,unsigned char*,unsigned char*) ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;

int FUNC_1(unsigned char *VAR_8, int VAR_9, int VAR_10, int VAR_11, int VAR_12,
              int VAR_13, int VAR_14)
{
  int VAR_15 = VAR_7[VAR_12];
  int VAR_16 = VAR_5[VAR_12];
  int VAR_17 = VAR_4[VAR_12];
  int VAR_18 = VAR_3[VAR_12];
  int VAR_19 = VAR_6[VAR_12];
  int VAR_20, VAR_21;

  for (VAR_21 = 0; VAR_21 < VAR_11; VAR_21++) {
    int VAR_22 = (VAR_13 & VAR_0) ? VAR_11 - VAR_21 - 1 : VAR_21;

    for (VAR_20 = 0; VAR_20 < VAR_9; VAR_20++) {
      unsigned char VAR_23 = (VAR_20 * 256 / VAR_9) % 256;
      unsigned char VAR_24 = (VAR_21 * 256 / VAR_11) % 256;
      unsigned char VAR_25 = (VAR_21 * 256 / VAR_11 + VAR_20 * 256 / VAR_9) % 256;

      if (VAR_12 == VAR_2) {
        if (VAR_8[VAR_22 * VAR_10 + VAR_20 * VAR_19] != VAR_25)
          return 0;
      } else if (VAR_12 == VAR_1) {
        unsigned char VAR_26, VAR_27, VAR_28;

        FUNC_0(VAR_8[VAR_22 * VAR_10 + VAR_20 * VAR_19 + 0],
                    VAR_8[VAR_22 * VAR_10 + VAR_20 * VAR_19 + 1],
                    VAR_8[VAR_22 * VAR_10 + VAR_20 * VAR_19 + 2],
                    VAR_8[VAR_22 * VAR_10 + VAR_20 * VAR_19 + 3], &VAR_26, &VAR_27, &VAR_28);
        if (VAR_14) {
          if (VAR_26 != VAR_25 || VAR_27 != VAR_25 || VAR_28 != VAR_25)
            return 0;
        } else if (VAR_26 != VAR_23 || VAR_27 != VAR_24 || VAR_28 != VAR_25) return 0;
      } else {
        if (VAR_14) {
          if (VAR_8[VAR_22 * VAR_10 + VAR_20 * VAR_19 + VAR_15] != VAR_25 ||
              VAR_8[VAR_22 * VAR_10 + VAR_20 * VAR_19 + VAR_16] != VAR_25 ||
              VAR_8[VAR_22 * VAR_10 + VAR_20 * VAR_19 + VAR_17] != VAR_25)
            return 0;
        } else if (VAR_8[VAR_22 * VAR_10 + VAR_20 * VAR_19 + VAR_15] != VAR_23 ||
                   VAR_8[VAR_22 * VAR_10 + VAR_20 * VAR_19 + VAR_16] != VAR_24 ||
                   VAR_8[VAR_22 * VAR_10 + VAR_20 * VAR_19 + VAR_17] != VAR_25)
          return 0;
        if (VAR_18 >= 0 && VAR_8[VAR_22 * VAR_10 + VAR_20 * VAR_19 + VAR_18] != 0xFF)
          return 0;
      }
    }
  }
  return 1;
}
