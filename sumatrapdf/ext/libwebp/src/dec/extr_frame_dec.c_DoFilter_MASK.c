
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int id_; TYPE_2__* f_info_; } ;
typedef TYPE_1__ VP8ThreadContext ;
struct TYPE_6__ {int f_ilevel_; int f_limit_; int hev_thresh_; scalar_t__ f_inner_; } ;
typedef TYPE_2__ VP8FInfo ;
struct TYPE_7__ {int cache_y_stride_; int filter_type_; int cache_uv_stride_; int * cache_v_; int * cache_u_; int * cache_y_; TYPE_1__ thread_ctx_; } ;
typedef TYPE_3__ VP8Decoder ;


 int FUNC_0 (int * const,int const,int const,int const,int const) ;
 int FUNC_1 (int * const,int const,int const,int const,int const) ;
 int FUNC_2 (int * const,int * const,int const,int const,int const,int const) ;
 int FUNC_3 (int * const,int * const,int const,int const,int const,int const) ;
 int FUNC_4 (int * const,int const,int const) ;
 int FUNC_5 (int * const,int const,int const) ;
 int FUNC_6 (int * const,int const,int const) ;
 int FUNC_7 (int * const,int const,int const) ;
 int FUNC_8 (int * const,int const,int const,int const,int const) ;
 int FUNC_9 (int * const,int const,int const,int const,int const) ;
 int FUNC_10 (int * const,int * const,int const,int const,int const,int const) ;
 int FUNC_11 (int * const,int * const,int const,int const,int const,int const) ;
 int FUNC_12 (int) ;

__attribute__((used)) static void FUNC_13(const VP8Decoder* const VAR_0, int VAR_1, int VAR_2) {
  const VP8ThreadContext* const VAR_3 = &VAR_0->thread_ctx_;
  const int VAR_4 = VAR_3->id_;
  const int VAR_5 = VAR_0->cache_y_stride_;
  const VP8FInfo* const VAR_6 = VAR_3->f_info_ + VAR_1;
  uint8_t* const VAR_7 = VAR_0->cache_y_ + VAR_4 * 16 * VAR_5 + VAR_1 * 16;
  const int VAR_8 = VAR_6->f_ilevel_;
  const int VAR_9 = VAR_6->f_limit_;
  if (VAR_9 == 0) {
    return;
  }
  FUNC_12(VAR_9 >= 3);
  if (VAR_0->filter_type_ == 1) {
    if (VAR_1 > 0) {
      FUNC_4(VAR_7, VAR_5, VAR_9 + 4);
    }
    if (VAR_6->f_inner_) {
      FUNC_5(VAR_7, VAR_5, VAR_9);
    }
    if (VAR_2 > 0) {
      FUNC_6(VAR_7, VAR_5, VAR_9 + 4);
    }
    if (VAR_6->f_inner_) {
      FUNC_7(VAR_7, VAR_5, VAR_9);
    }
  } else {
    const int VAR_10 = VAR_0->cache_uv_stride_;
    uint8_t* const VAR_11 = VAR_0->cache_u_ + VAR_4 * 8 * VAR_10 + VAR_1 * 8;
    uint8_t* const VAR_12 = VAR_0->cache_v_ + VAR_4 * 8 * VAR_10 + VAR_1 * 8;
    const int VAR_13 = VAR_6->hev_thresh_;
    if (VAR_1 > 0) {
      FUNC_0(VAR_7, VAR_5, VAR_9 + 4, VAR_8, VAR_13);
      FUNC_2(VAR_11, VAR_12, VAR_10, VAR_9 + 4, VAR_8, VAR_13);
    }
    if (VAR_6->f_inner_) {
      FUNC_1(VAR_7, VAR_5, VAR_9, VAR_8, VAR_13);
      FUNC_3(VAR_11, VAR_12, VAR_10, VAR_9, VAR_8, VAR_13);
    }
    if (VAR_2 > 0) {
      FUNC_8(VAR_7, VAR_5, VAR_9 + 4, VAR_8, VAR_13);
      FUNC_10(VAR_11, VAR_12, VAR_10, VAR_9 + 4, VAR_8, VAR_13);
    }
    if (VAR_6->f_inner_) {
      FUNC_9(VAR_7, VAR_5, VAR_9, VAR_8, VAR_13);
      FUNC_11(VAR_11, VAR_12, VAR_10, VAR_9, VAR_8, VAR_13);
    }
  }
}
