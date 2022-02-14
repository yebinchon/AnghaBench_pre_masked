
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WebPWorker ;
struct TYPE_4__ {scalar_t__ thread_level_; scalar_t__ percent_; int pic_; int alpha_worker_; scalar_t__ has_alpha_; } ;
typedef TYPE_1__ VP8Encoder ;
struct TYPE_5__ {int (* Sync ) (int * const) ;} ;


 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (int ,scalar_t__,scalar_t__*) ;
 int FUNC_2 (int * const) ;

int FUNC_3(VP8Encoder* const VAR_0) {
  if (VAR_0->has_alpha_) {
    if (VAR_0->thread_level_ > 0) {
      WebPWorker* const VAR_1 = &VAR_0->alpha_worker_;
      if (!FUNC_0()->Sync(VAR_1)) return 0;
    }
  }
  return FUNC_1(VAR_0->pic_, VAR_0->percent_ + 20, &VAR_0->percent_);
}
