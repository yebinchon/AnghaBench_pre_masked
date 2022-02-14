
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WebPWorker ;
struct TYPE_4__ {scalar_t__ thread_level_; scalar_t__ has_alpha_; scalar_t__ alpha_data_size_; int * alpha_data_; int alpha_worker_; } ;
typedef TYPE_1__ VP8Encoder ;
struct TYPE_5__ {int (* Sync ) (int * const) ;int (* End ) (int * const) ;} ;


 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int * const) ;
 int FUNC_3 (int * const) ;

int FUNC_4(VP8Encoder* const VAR_0) {
  int VAR_1 = 1;
  if (VAR_0->thread_level_ > 0) {
    WebPWorker* const VAR_2 = &VAR_0->alpha_worker_;

    VAR_1 = FUNC_0()->Sync(VAR_2);

    FUNC_0()->End(VAR_2);
  }
  FUNC_1(VAR_0->alpha_data_);
  VAR_0->alpha_data_ = ((void*)0);
  VAR_0->alpha_data_size_ = 0;
  VAR_0->has_alpha_ = 0;
  return VAR_1;
}
