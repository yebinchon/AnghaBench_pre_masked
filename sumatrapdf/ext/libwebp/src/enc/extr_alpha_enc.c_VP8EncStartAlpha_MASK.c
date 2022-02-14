
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WebPWorker ;
struct TYPE_5__ {scalar_t__ thread_level_; int alpha_worker_; scalar_t__ has_alpha_; } ;
typedef TYPE_1__ VP8Encoder ;
struct TYPE_6__ {int (* Launch ) (int * const) ;int (* Reset ) (int * const) ;} ;


 int FUNC_0 (TYPE_1__* const,int *) ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (int * const) ;
 int FUNC_3 (int * const) ;

int FUNC_4(VP8Encoder* const VAR_0) {
  if (VAR_0->has_alpha_) {
    if (VAR_0->thread_level_ > 0) {
      WebPWorker* const VAR_1 = &VAR_0->alpha_worker_;

      if (!FUNC_1()->Reset(VAR_1)) {
        return 0;
      }
      FUNC_1()->Launch(VAR_1);
      return 1;
    } else {
      return FUNC_0(VAR_0, ((void*)0));
    }
  }
  return 1;
}
