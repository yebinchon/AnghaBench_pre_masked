
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int* y; int const y_stride; int* u; int const uv_stride; int* v; scalar_t__ height; scalar_t__ width; } ;
typedef TYPE_1__ WebPPicture ;
struct TYPE_7__ {TYPE_1__* pic_; } ;
typedef TYPE_2__ VP8Encoder ;
struct TYPE_8__ {int x_; int y_; int* y_left_; int* u_left_; int* v_left_; int* y_top_; int* uv_top_; scalar_t__ yuv_in_; TYPE_2__* enc_; } ;
typedef TYPE_3__ VP8EncIterator ;


 int FUNC_0 (int const* const,int const,scalar_t__,int const,int const,int) ;
 int FUNC_1 (int const* const,int,int* const,int const,int) ;
 int FUNC_2 (TYPE_3__* const) ;
 int FUNC_3 (scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int* const,int,int) ;

void FUNC_5(VP8EncIterator* const VAR_3, uint8_t* const VAR_4) {
  const VP8Encoder* const VAR_5 = VAR_3->enc_;
  const int VAR_6 = VAR_3->x_, VAR_7 = VAR_3->y_;
  const WebPPicture* const VAR_8 = VAR_5->pic_;
  const uint8_t* const VAR_9 = VAR_8->y + (VAR_7 * VAR_8->y_stride + VAR_6) * 16;
  const uint8_t* const VAR_10 = VAR_8->u + (VAR_7 * VAR_8->uv_stride + VAR_6) * 8;
  const uint8_t* const VAR_11 = VAR_8->v + (VAR_7 * VAR_8->uv_stride + VAR_6) * 8;
  const int VAR_12 = FUNC_3(VAR_8->width - VAR_6 * 16, 16);
  const int VAR_13 = FUNC_3(VAR_8->height - VAR_7 * 16, 16);
  const int VAR_14 = (VAR_12 + 1) >> 1;
  const int VAR_15 = (VAR_13 + 1) >> 1;

  FUNC_0(VAR_9, VAR_8->y_stride, VAR_3->yuv_in_ + VAR_2, VAR_12, VAR_13, 16);
  FUNC_0(VAR_10, VAR_8->uv_stride, VAR_3->yuv_in_ + VAR_0, VAR_14, VAR_15, 8);
  FUNC_0(VAR_11, VAR_8->uv_stride, VAR_3->yuv_in_ + VAR_1, VAR_14, VAR_15, 8);

  if (VAR_4 == ((void*)0)) return;


  if (VAR_6 == 0) {
    FUNC_2(VAR_3);
  } else {
    if (VAR_7 == 0) {
      VAR_3->y_left_[-1] = VAR_3->u_left_[-1] = VAR_3->v_left_[-1] = 127;
    } else {
      VAR_3->y_left_[-1] = VAR_9[- 1 - VAR_8->y_stride];
      VAR_3->u_left_[-1] = VAR_10[- 1 - VAR_8->uv_stride];
      VAR_3->v_left_[-1] = VAR_11[- 1 - VAR_8->uv_stride];
    }
    FUNC_1(VAR_9 - 1, VAR_8->y_stride, VAR_3->y_left_, VAR_13, 16);
    FUNC_1(VAR_10 - 1, VAR_8->uv_stride, VAR_3->u_left_, VAR_15, 8);
    FUNC_1(VAR_11 - 1, VAR_8->uv_stride, VAR_3->v_left_, VAR_15, 8);
  }

  VAR_3->y_top_ = VAR_4 + 0;
  VAR_3->uv_top_ = VAR_4 + 16;
  if (VAR_7 == 0) {
    FUNC_4(VAR_4, 127, 32 * sizeof(*VAR_4));
  } else {
    FUNC_1(VAR_9 - VAR_8->y_stride, 1, VAR_4, VAR_12, 16);
    FUNC_1(VAR_10 - VAR_8->uv_stride, 1, VAR_4 + 16, VAR_14, 8);
    FUNC_1(VAR_11 - VAR_8->uv_stride, 1, VAR_4 + 16 + 8, VAR_14, 8);
  }
}
