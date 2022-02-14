
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int16_t ;
typedef int VP8Residual ;
typedef int VP8Encoder ;
struct TYPE_3__ {int i4_; int* top_nz_; int* left_nz_; int * enc_; } ;
typedef TYPE_1__ VP8EncIterator ;


 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int ,int,int * const,int *) ;
 int FUNC_2 (int const*,int *) ;

int FUNC_3(VP8EncIterator* const VAR_0, const int16_t VAR_1[16]) {
  const int VAR_2 = (VAR_0->i4_ & 3), VAR_3 = (VAR_0->i4_ >> 2);
  VP8Residual VAR_4;
  VP8Encoder* const VAR_5 = VAR_0->enc_;
  int VAR_6 = 0;
  int VAR_7;

  FUNC_1(0, 3, VAR_5, &VAR_4);
  VAR_7 = VAR_0->top_nz_[VAR_2] + VAR_0->left_nz_[VAR_3];
  FUNC_2(VAR_1, &VAR_4);
  VAR_6 += FUNC_0(VAR_7, &VAR_4);
  return VAR_6;
}
