
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mb_y_; int filter_row_; } ;
struct TYPE_6__ {int tl_mb_x_; int br_mb_x_; TYPE_1__ thread_ctx_; } ;
typedef TYPE_2__ VP8Decoder ;


 int FUNC_0 (TYPE_2__ const* const,int,int const) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(const VP8Decoder* const VAR_0) {
  int VAR_1;
  const int VAR_2 = VAR_0->thread_ctx_.mb_y_;
  FUNC_1(VAR_0->thread_ctx_.filter_row_);
  for (VAR_1 = VAR_0->tl_mb_x_; VAR_1 < VAR_0->br_mb_x_; ++VAR_1) {
    FUNC_0(VAR_0, VAR_1, VAR_2);
  }
}
