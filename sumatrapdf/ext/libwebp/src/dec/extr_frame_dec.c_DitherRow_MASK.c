
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int id_; TYPE_2__* mb_data_; } ;
typedef TYPE_1__ VP8ThreadContext ;
struct TYPE_6__ {scalar_t__ dither_; } ;
typedef TYPE_2__ VP8MBData ;
struct TYPE_7__ {int tl_mb_x_; int br_mb_x_; int cache_uv_stride_; int dithering_rg_; int * cache_v_; int * cache_u_; TYPE_1__ thread_ctx_; int dither_; } ;
typedef TYPE_3__ VP8Decoder ;


 int FUNC_0 (int *,int * const,int const,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(VP8Decoder* const VAR_1) {
  int VAR_2;
  FUNC_1(VAR_1->dither_);
  for (VAR_2 = VAR_1->tl_mb_x_; VAR_2 < VAR_1->br_mb_x_; ++VAR_2) {
    const VP8ThreadContext* const VAR_3 = &VAR_1->thread_ctx_;
    const VP8MBData* const VAR_4 = VAR_3->mb_data_ + VAR_2;
    const int VAR_5 = VAR_3->id_;
    const int VAR_6 = VAR_1->cache_uv_stride_;
    if (VAR_4->dither_ >= VAR_0) {
      uint8_t* const VAR_7 = VAR_1->cache_u_ + VAR_5 * 8 * VAR_6 + VAR_2 * 8;
      uint8_t* const VAR_8 = VAR_1->cache_v_ + VAR_5 * 8 * VAR_6 + VAR_2 * 8;
      FUNC_0(&VAR_1->dithering_rg_, VAR_7, VAR_6, VAR_4->dither_);
      FUNC_0(&VAR_1->dithering_rg_, VAR_8, VAR_6, VAR_4->dither_);
    }
  }
}
