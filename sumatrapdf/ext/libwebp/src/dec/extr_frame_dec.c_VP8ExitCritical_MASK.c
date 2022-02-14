
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int (* teardown ) (TYPE_1__* const) ;} ;
typedef TYPE_1__ VP8Io ;
struct TYPE_8__ {scalar_t__ mt_method_; int worker_; } ;
typedef TYPE_2__ VP8Decoder ;
struct TYPE_9__ {int (* Sync ) (int *) ;} ;


 TYPE_4__* FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__* const) ;

int FUNC_3(VP8Decoder* const VAR_0, VP8Io* const VAR_1) {
  int VAR_2 = 1;
  if (VAR_0->mt_method_ > 0) {
    VAR_2 = FUNC_0()->Sync(&VAR_0->worker_);
  }

  if (VAR_1->teardown != ((void*)0)) {
    VAR_1->teardown(VAR_1);
  }
  return VAR_2;
}
