
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int mb_w_; int mb_h_; } ;
typedef TYPE_1__ VP8Encoder ;
struct TYPE_5__ {int x_; int y_; int * uv_top_; int * y_top_; int * v_left_; int * u_left_; int * y_left_; int * yuv_out_; TYPE_1__* enc_; } ;
typedef TYPE_2__ VP8EncIterator ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int const* const,int) ;

void FUNC_1(VP8EncIterator* const VAR_3) {
  VP8Encoder* const VAR_4 = VAR_3->enc_;
  const int VAR_5 = VAR_3->x_, VAR_6 = VAR_3->y_;
  const uint8_t* const VAR_7 = VAR_3->yuv_out_ + VAR_2;
  const uint8_t* const VAR_8 = VAR_3->yuv_out_ + VAR_1;
  if (VAR_5 < VAR_4->mb_w_ - 1) {
    int VAR_9;
    for (VAR_9 = 0; VAR_9 < 16; ++VAR_9) {
      VAR_3->y_left_[VAR_9] = VAR_7[15 + VAR_9 * VAR_0];
    }
    for (VAR_9 = 0; VAR_9 < 8; ++VAR_9) {
      VAR_3->u_left_[VAR_9] = VAR_8[7 + VAR_9 * VAR_0];
      VAR_3->v_left_[VAR_9] = VAR_8[15 + VAR_9 * VAR_0];
    }

    VAR_3->y_left_[-1] = VAR_3->y_top_[15];
    VAR_3->u_left_[-1] = VAR_3->uv_top_[0 + 7];
    VAR_3->v_left_[-1] = VAR_3->uv_top_[8 + 7];
  }
  if (VAR_6 < VAR_4->mb_h_ - 1) {
    FUNC_0(VAR_3->y_top_, VAR_7 + 15 * VAR_0, 16);
    FUNC_0(VAR_3->uv_top_, VAR_8 + 7 * VAR_0, 8 + 8);
  }
}
