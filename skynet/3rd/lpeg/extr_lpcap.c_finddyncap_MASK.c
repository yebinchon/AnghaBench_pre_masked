
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ kind; int idx; } ;
typedef TYPE_1__ Capture ;


 scalar_t__ VAR_0 ;

int FUNC_0 (Capture *VAR_1, Capture *VAR_2) {
  for (; VAR_1 < VAR_2; VAR_1++) {
    if (VAR_1->kind == VAR_0)
      return VAR_1->idx;
  }
  return 0;
}
