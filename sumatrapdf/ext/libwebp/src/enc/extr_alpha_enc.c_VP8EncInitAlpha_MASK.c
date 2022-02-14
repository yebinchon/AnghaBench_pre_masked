
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int hook; int * data2; TYPE_2__* data1; } ;
typedef TYPE_1__ WebPWorker ;
struct TYPE_7__ {scalar_t__ thread_level_; TYPE_1__ alpha_worker_; scalar_t__ alpha_data_size_; int * alpha_data_; int pic_; int has_alpha_; } ;
typedef TYPE_2__ VP8Encoder ;
struct TYPE_8__ {int (* Init ) (TYPE_1__* const) ;} ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__* const) ;

void FUNC_4(VP8Encoder* const VAR_1) {
  FUNC_1();
  VAR_1->has_alpha_ = FUNC_2(VAR_1->pic_);
  VAR_1->alpha_data_ = ((void*)0);
  VAR_1->alpha_data_size_ = 0;
  if (VAR_1->thread_level_ > 0) {
    WebPWorker* const VAR_2 = &VAR_1->alpha_worker_;
    FUNC_0()->Init(VAR_2);
    VAR_2->data1 = VAR_1;
    VAR_2->data2 = ((void*)0);
    VAR_2->hook = VAR_0;
  }
}
