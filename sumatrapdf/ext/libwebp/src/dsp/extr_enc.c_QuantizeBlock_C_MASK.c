
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ int16_t ;
struct TYPE_3__ {scalar_t__* sharpen_; scalar_t__ const* zthresh_; scalar_t__* q_; scalar_t__* iq_; scalar_t__* bias_; } ;
typedef TYPE_1__ VP8Matrix ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__ const,scalar_t__ const,scalar_t__ const) ;
 int* VAR_1 ;

__attribute__((used)) static int FUNC_1(int16_t VAR_2[16], int16_t VAR_3[16],
                           const VP8Matrix* const VAR_4) {
  int VAR_5 = -1;
  int VAR_6;
  for (VAR_6 = 0; VAR_6 < 16; ++VAR_6) {
    const int VAR_7 = VAR_1[VAR_6];
    const int VAR_8 = (VAR_2[VAR_7] < 0);
    const uint32_t VAR_9 = (VAR_8 ? -VAR_2[VAR_7] : VAR_2[VAR_7]) + VAR_4->sharpen_[VAR_7];
    if (VAR_9 > VAR_4->zthresh_[VAR_7]) {
      const uint32_t VAR_10 = VAR_4->q_[VAR_7];
      const uint32_t VAR_11 = VAR_4->iq_[VAR_7];
      const uint32_t VAR_12 = VAR_4->bias_[VAR_7];
      int VAR_13 = FUNC_0(VAR_9, VAR_11, VAR_12);
      if (VAR_13 > VAR_0) VAR_13 = VAR_0;
      if (VAR_8) VAR_13 = -VAR_13;
      VAR_2[VAR_7] = VAR_13 * (int)VAR_10;
      VAR_3[VAR_6] = VAR_13;
      if (VAR_13) VAR_5 = VAR_6;
    } else {
      VAR_3[VAR_6] = 0;
      VAR_2[VAR_7] = 0;
    }
  }
  return (VAR_5 >= 0);
}
