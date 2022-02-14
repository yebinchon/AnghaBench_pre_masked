
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char*,int ,int) ;
 int FUNC_1 (unsigned char,unsigned char,unsigned char,unsigned char*,unsigned char*,unsigned char*,unsigned char*) ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;

void FUNC_2(unsigned char *VAR_7, int VAR_8, int VAR_9, int VAR_10, int VAR_11,
                int VAR_12)
{
  int VAR_13 = VAR_6[VAR_11];
  int VAR_14 = VAR_4[VAR_11];
  int VAR_15 = VAR_3[VAR_11];
  int VAR_16 = VAR_5[VAR_11];
  int VAR_17, VAR_18;

  for (VAR_18 = 0; VAR_18 < VAR_10; VAR_18++) {
    int VAR_19 = (VAR_12 & VAR_0) ? VAR_10 - VAR_18 - 1 : VAR_18;

    for (VAR_17 = 0; VAR_17 < VAR_8; VAR_17++) {
      unsigned char VAR_20 = (VAR_17 * 256 / VAR_8) % 256;
      unsigned char VAR_21 = (VAR_18 * 256 / VAR_10) % 256;
      unsigned char VAR_22 = (VAR_18 * 256 / VAR_10 + VAR_17 * 256 / VAR_8) % 256;

      FUNC_0(&VAR_7[VAR_19 * VAR_9 + VAR_17 * VAR_16], 0, VAR_16);
      if (VAR_11 == VAR_2) VAR_7[VAR_19 * VAR_9 + VAR_17 * VAR_16] = VAR_22;
      else if (VAR_11 == VAR_1)
        FUNC_1(VAR_20, VAR_21, VAR_22, &VAR_7[VAR_19 * VAR_9 + VAR_17 * VAR_16 + 0],
                    &VAR_7[VAR_19 * VAR_9 + VAR_17 * VAR_16 + 1],
                    &VAR_7[VAR_19 * VAR_9 + VAR_17 * VAR_16 + 2],
                    &VAR_7[VAR_19 * VAR_9 + VAR_17 * VAR_16 + 3]);
      else {
        VAR_7[VAR_19 * VAR_9 + VAR_17 * VAR_16 + VAR_13] = VAR_20;
        VAR_7[VAR_19 * VAR_9 + VAR_17 * VAR_16 + VAR_14] = VAR_21;
        VAR_7[VAR_19 * VAR_9 + VAR_17 * VAR_16 + VAR_15] = VAR_22;
      }
    }
  }
}
