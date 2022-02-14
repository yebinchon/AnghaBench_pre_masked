
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* iq_; int* q_; int* zthresh_; int* sharpen_; int * bias_; } ;
typedef TYPE_1__ VP8Matrix ;


 int FUNC_0 (int const) ;
 int VAR_0 ;
 int VAR_1 ;
 int** VAR_2 ;
 int* VAR_3 ;

__attribute__((used)) static int FUNC_1(VP8Matrix* const VAR_4, int VAR_5) {
  int VAR_6, VAR_7;
  for (VAR_6 = 0; VAR_6 < 2; ++VAR_6) {
    const int VAR_8 = (VAR_6 > 0);
    const int VAR_9 = VAR_2[VAR_5][VAR_8];
    VAR_4->iq_[VAR_6] = (1 << VAR_0) / VAR_4->q_[VAR_6];
    VAR_4->bias_[VAR_6] = FUNC_0(VAR_9);



    VAR_4->zthresh_[VAR_6] = ((1 << VAR_0) - 1 - VAR_4->bias_[VAR_6]) / VAR_4->iq_[VAR_6];
  }
  for (VAR_6 = 2; VAR_6 < 16; ++VAR_6) {
    VAR_4->q_[VAR_6] = VAR_4->q_[1];
    VAR_4->iq_[VAR_6] = VAR_4->iq_[1];
    VAR_4->bias_[VAR_6] = VAR_4->bias_[1];
    VAR_4->zthresh_[VAR_6] = VAR_4->zthresh_[1];
  }
  for (VAR_7 = 0, VAR_6 = 0; VAR_6 < 16; ++VAR_6) {
    if (VAR_5 == 0) {
      VAR_4->sharpen_[VAR_6] = (VAR_3[VAR_6] * VAR_4->q_[VAR_6]) >> VAR_1;
    } else {
      VAR_4->sharpen_[VAR_6] = 0;
    }
    VAR_7 += VAR_4->q_[VAR_6];
  }
  return (VAR_7 + 8) >> 4;
}
