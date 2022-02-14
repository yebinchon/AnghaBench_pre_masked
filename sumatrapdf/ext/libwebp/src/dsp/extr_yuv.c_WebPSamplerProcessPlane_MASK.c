
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int (* WebPSamplerRowFunc ) (int const*,int const*,int const*,int *,int) ;



void FUNC_0(const uint8_t* VAR_0, int VAR_1,
                             const uint8_t* VAR_2, const uint8_t* VAR_3, int VAR_4,
                             uint8_t* VAR_5, int VAR_6,
                             int VAR_7, int VAR_8, WebPSamplerRowFunc VAR_9) {
  int VAR_10;
  for (VAR_10 = 0; VAR_10 < VAR_8; ++VAR_10) {
    VAR_9(VAR_0, VAR_2, VAR_3, VAR_5, VAR_7);
    VAR_0 += VAR_1;
    if (VAR_10 & 1) {
      VAR_2 += VAR_4;
      VAR_3 += VAR_4;
    }
    VAR_5 += VAR_6;
  }
}
