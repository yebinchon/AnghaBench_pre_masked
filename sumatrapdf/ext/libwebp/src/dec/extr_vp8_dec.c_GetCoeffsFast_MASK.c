
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int* quant_t ;
typedef int int16_t ;
typedef int * VP8ProbaArray ;
typedef int VP8BitReader ;
struct TYPE_3__ {int ** probas_; } ;
typedef TYPE_1__ VP8BandProbas ;


 int FUNC_0 (int * const,int const*) ;
 int FUNC_1 (int * const,int const,char*) ;
 int FUNC_2 (int * const,int,char*) ;
 size_t* VAR_0 ;

__attribute__((used)) static int FUNC_3(VP8BitReader* const VAR_1,
                         const VP8BandProbas* const VAR_2[],
                         int VAR_3, const quant_t VAR_4, int VAR_5, int16_t* VAR_6) {
  const uint8_t* VAR_7 = VAR_2[VAR_5]->probas_[VAR_3];
  for (; VAR_5 < 16; ++VAR_5) {
    if (!FUNC_1(VAR_1, VAR_7[0], "coeffs")) {
      return VAR_5;
    }
    while (!FUNC_1(VAR_1, VAR_7[1], "coeffs")) {
      VAR_7 = VAR_2[++VAR_5]->probas_[0];
      if (VAR_5 == 16) return 16;
    }
    {
      const VP8ProbaArray* const VAR_8 = &VAR_2[VAR_5 + 1]->probas_[0];
      int VAR_9;
      if (!FUNC_1(VAR_1, VAR_7[2], "coeffs")) {
        VAR_9 = 1;
        VAR_7 = VAR_8[1];
      } else {
        VAR_9 = FUNC_0(VAR_1, VAR_7);
        VAR_7 = VAR_8[2];
      }
      VAR_6[VAR_0[VAR_5]] = FUNC_2(VAR_1, VAR_9, "coeffs") * VAR_4[VAR_5 > 0];
    }
  }
  return 16;
}
