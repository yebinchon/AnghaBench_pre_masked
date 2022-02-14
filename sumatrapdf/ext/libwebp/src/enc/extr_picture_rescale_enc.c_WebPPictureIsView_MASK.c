
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * memory_; int * memory_argb_; scalar_t__ use_argb; } ;
typedef TYPE_1__ WebPPicture ;



int FUNC_0(const WebPPicture* VAR_0) {
  if (VAR_0 == ((void*)0)) return 0;
  if (VAR_0->use_argb) {
    return (VAR_0->memory_argb_ == ((void*)0));
  }
  return (VAR_0->memory_ == ((void*)0));
}
