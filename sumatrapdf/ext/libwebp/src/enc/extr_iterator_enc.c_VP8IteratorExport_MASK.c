
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int const y_stride; int const uv_stride; int const width; int const height; int * v; int * u; int * y; } ;
typedef TYPE_2__ WebPPicture ;
struct TYPE_8__ {TYPE_2__* pic_; TYPE_1__* config_; } ;
typedef TYPE_3__ VP8Encoder ;
struct TYPE_9__ {int x_; int y_; int * yuv_out_; TYPE_3__* enc_; } ;
typedef TYPE_4__ VP8EncIterator ;
struct TYPE_6__ {scalar_t__ show_compressed; } ;


 int FUNC_0 (int const* const,int * const,int const,int const,int const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_1(const VP8EncIterator* const VAR_3) {
  const VP8Encoder* const VAR_4 = VAR_3->enc_;
  if (VAR_4->config_->show_compressed) {
    const int VAR_5 = VAR_3->x_, VAR_6 = VAR_3->y_;
    const uint8_t* const VAR_7 = VAR_3->yuv_out_ + VAR_2;
    const uint8_t* const VAR_8 = VAR_3->yuv_out_ + VAR_0;
    const uint8_t* const VAR_9 = VAR_3->yuv_out_ + VAR_1;
    const WebPPicture* const VAR_10 = VAR_4->pic_;
    uint8_t* const VAR_11 = VAR_10->y + (VAR_6 * VAR_10->y_stride + VAR_5) * 16;
    uint8_t* const VAR_12 = VAR_10->u + (VAR_6 * VAR_10->uv_stride + VAR_5) * 8;
    uint8_t* const VAR_13 = VAR_10->v + (VAR_6 * VAR_10->uv_stride + VAR_5) * 8;
    int VAR_14 = (VAR_10->width - VAR_5 * 16);
    int VAR_15 = (VAR_10->height - VAR_6 * 16);

    if (VAR_14 > 16) VAR_14 = 16;
    if (VAR_15 > 16) VAR_15 = 16;


    FUNC_0(VAR_7, VAR_11, VAR_10->y_stride, VAR_14, VAR_15);

    {
      const int VAR_16 = (VAR_14 + 1) >> 1;
      const int VAR_17 = (VAR_15 + 1) >> 1;
      FUNC_0(VAR_8, VAR_12, VAR_10->uv_stride, VAR_16, VAR_17);
      FUNC_0(VAR_9, VAR_13, VAR_10->uv_stride, VAR_16, VAR_17);
    }
  }
}
