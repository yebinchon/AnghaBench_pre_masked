
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* next_; scalar_t__ has_alpha_; } ;
typedef TYPE_1__ WebPMuxImage ;



int FUNC_0(const WebPMuxImage* VAR_0) {
  while (VAR_0 != ((void*)0)) {
    if (VAR_0->has_alpha_) return 1;
    VAR_0 = VAR_0->next_;
  }
  return 0;
}
