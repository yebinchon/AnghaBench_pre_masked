
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int VP8BitReader ;


 int FUNC_0 (int * const,int const,char*) ;
 int** VAR_0 ;

__attribute__((used)) static int FUNC_1(VP8BitReader* const VAR_1, const uint8_t* const VAR_2) {
  int VAR_3;
  if (!FUNC_0(VAR_1, VAR_2[3], "coeffs")) {
    if (!FUNC_0(VAR_1, VAR_2[4], "coeffs")) {
      VAR_3 = 2;
    } else {
      VAR_3 = 3 + FUNC_0(VAR_1, VAR_2[5], "coeffs");
    }
  } else {
    if (!FUNC_0(VAR_1, VAR_2[6], "coeffs")) {
      if (!FUNC_0(VAR_1, VAR_2[7], "coeffs")) {
        VAR_3 = 5 + FUNC_0(VAR_1, 159, "coeffs");
      } else {
        VAR_3 = 7 + 2 * FUNC_0(VAR_1, 165, "coeffs");
        VAR_3 += FUNC_0(VAR_1, 145, "coeffs");
      }
    } else {
      const uint8_t* VAR_4;
      const int VAR_5 = FUNC_0(VAR_1, VAR_2[8], "coeffs");
      const int VAR_6 = FUNC_0(VAR_1, VAR_2[9 + VAR_5], "coeffs");
      const int VAR_7 = 2 * VAR_5 + VAR_6;
      VAR_3 = 0;
      for (VAR_4 = VAR_0[VAR_7]; *VAR_4; ++VAR_4) {
        VAR_3 += VAR_3 + FUNC_0(VAR_1, *VAR_4, "coeffs");
      }
      VAR_3 += 3 + (8 << VAR_7);
    }
  }
  return VAR_3;
}
