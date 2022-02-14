
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint8_t ;


 int FUNC_0 (unsigned int*,int,int,int,int,int) ;
 double FUNC_1 (unsigned int* const,int,unsigned int* const,int,int,int,int,int) ;
 int FUNC_2 (unsigned int* const) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(uint8_t* VAR_0, int VAR_1,
                            const uint8_t* VAR_2, int VAR_3,
                            int VAR_4, int VAR_5, int VAR_6, int VAR_7) {
  int VAR_8, VAR_9;
  int VAR_10 = 0;
  uint8_t* const VAR_11 = (uint8_t*)FUNC_3(2 * VAR_5 * VAR_6 * sizeof(*VAR_11));
  uint8_t* const VAR_12 = VAR_11 + VAR_5 * VAR_6;
  if (VAR_11 == ((void*)0)) return -1;


  for (VAR_9 = 0; VAR_9 < VAR_6; ++VAR_9) {
    for (VAR_8 = 0; VAR_8 < VAR_5; ++VAR_8) {
      VAR_11[VAR_8 + VAR_9 * VAR_5] = VAR_0[VAR_8 * VAR_4 + VAR_9 * VAR_1];
      VAR_12[VAR_8 + VAR_9 * VAR_5] = VAR_2[VAR_8 * VAR_4 + VAR_9 * VAR_3];
    }
  }
  for (VAR_9 = 0; VAR_9 < VAR_6; ++VAR_9) {
    for (VAR_8 = 0; VAR_8 < VAR_5; ++VAR_8) {
      const double VAR_13 = FUNC_1(VAR_11, VAR_5, VAR_12, VAR_5, VAR_8, VAR_9, VAR_5, VAR_6);
      int VAR_14 = (int)(255 * (1. - VAR_13));
      if (VAR_14 < 0) {
        VAR_14 = 0;
      } else if (VAR_14 > VAR_10) {
        VAR_10 = VAR_14;
      }
      VAR_0[VAR_8 * VAR_4 + VAR_9 * VAR_1] = (VAR_14 > 255) ? 255u : (uint8_t)VAR_14;
    }
  }
  FUNC_2(VAR_11);

  if (VAR_7) FUNC_0(VAR_0, VAR_5, VAR_6, VAR_4, VAR_1, VAR_10);
  return VAR_10;
}
