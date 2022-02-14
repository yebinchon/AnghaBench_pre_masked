
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_13__ {int stride; int * rgba; } ;
typedef TYPE_2__ WebPRGBABuffer ;
struct TYPE_12__ {TYPE_2__ RGBA; } ;
struct TYPE_14__ {scalar_t__ height; int colorspace; TYPE_1__ u; } ;
typedef TYPE_3__ WebPDecBuffer ;
struct TYPE_15__ {int width_; int last_row_; int last_out_row_; int height_; TYPE_3__* output_; scalar_t__ argb_cache_; TYPE_5__* io_; int * pixels_; } ;
typedef TYPE_4__ VP8LDecoder ;
struct TYPE_16__ {int crop_bottom; int width; int mb_h; int mb_w; scalar_t__ use_scaling; } ;
typedef TYPE_5__ VP8Io ;


 int FUNC_0 (TYPE_4__* const,int,int const,int const* const) ;
 int FUNC_1 (TYPE_4__* const,int *,int const,int ,int * const,int) ;
 int const FUNC_2 (TYPE_4__* const,int *,int const,int ) ;
 int FUNC_3 (int ,int *,int const,int ,int ,int * const,int) ;
 int const FUNC_4 (TYPE_4__* const,int *,int const,int ,int ) ;
 int const VAR_0 ;
 int FUNC_5 (TYPE_5__* const,int,int,int **,int const) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(VP8LDecoder* const VAR_1, int VAR_2) {
  const uint32_t* const VAR_3 = VAR_1->pixels_ + VAR_1->width_ * VAR_1->last_row_;
  const int VAR_4 = VAR_2 - VAR_1->last_row_;

  FUNC_7(VAR_2 <= VAR_1->io_->crop_bottom);


  FUNC_7(VAR_4 <= VAR_0);
  if (VAR_4 > 0) {
    VP8Io* const VAR_5 = VAR_1->io_;
    uint8_t* VAR_6 = (uint8_t*)VAR_1->argb_cache_;
    const int VAR_7 = VAR_5->width * sizeof(uint32_t);
    FUNC_0(VAR_1, VAR_1->last_row_, VAR_4, VAR_3);
    if (!FUNC_5(VAR_5, VAR_1->last_row_, VAR_2, &VAR_6, VAR_7)) {

    } else {
      const WebPDecBuffer* const VAR_8 = VAR_1->output_;
      if (FUNC_6(VAR_8->colorspace)) {
        const WebPRGBABuffer* const VAR_9 = &VAR_8->u.RGBA;
        uint8_t* const VAR_10 = VAR_9->rgba + VAR_1->last_out_row_ * VAR_9->stride;
        const int VAR_11 =

         VAR_5->use_scaling ?
            FUNC_1(VAR_1, VAR_6, VAR_7, VAR_5->mb_h,
                                 VAR_10, VAR_9->stride) :

            FUNC_3(VAR_8->colorspace, VAR_6, VAR_7,
                     VAR_5->mb_w, VAR_5->mb_h, VAR_10, VAR_9->stride);

        VAR_1->last_out_row_ += VAR_11;
      } else {
        VAR_1->last_out_row_ = VAR_5->use_scaling ?
            FUNC_2(VAR_1, VAR_6, VAR_7, VAR_5->mb_h) :
            FUNC_4(VAR_1, VAR_6, VAR_7, VAR_5->mb_w, VAR_5->mb_h);
      }
      FUNC_7(VAR_1->last_out_row_ <= VAR_8->height);
    }
  }


  VAR_1->last_row_ = VAR_2;
  FUNC_7(VAR_1->last_row_ <= VAR_1->height_);
}
