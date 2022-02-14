
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ num_parts_minus_one_; scalar_t__ ready_; int worker_; } ;
typedef TYPE_1__ VP8Decoder ;
struct TYPE_6__ {int (* Init ) (int *) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__* const) ;
 TYPE_2__* FUNC_2 () ;
 scalar_t__ FUNC_3 (unsigned long long,int) ;
 int FUNC_4 (int *) ;

VP8Decoder* FUNC_5(void) {
  VP8Decoder* const VAR_0 = (VP8Decoder*)FUNC_3(1ULL, sizeof(*VAR_0));
  if (VAR_0 != ((void*)0)) {
    FUNC_1(VAR_0);
    FUNC_2()->Init(&VAR_0->worker_);
    VAR_0->ready_ = 0;
    VAR_0->num_parts_minus_one_ = 0;
    FUNC_0();
  }
  return VAR_0;
}
