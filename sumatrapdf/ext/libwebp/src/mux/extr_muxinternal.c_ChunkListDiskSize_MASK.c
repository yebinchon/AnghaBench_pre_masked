
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next_; } ;
typedef TYPE_1__ WebPChunk ;


 scalar_t__ FUNC_0 (TYPE_1__ const*) ;

size_t FUNC_1(const WebPChunk* VAR_0) {
  size_t VAR_1 = 0;
  while (VAR_0 != ((void*)0)) {
    VAR_1 += FUNC_0(VAR_0);
    VAR_0 = VAR_0->next_;
  }
  return VAR_1;
}
