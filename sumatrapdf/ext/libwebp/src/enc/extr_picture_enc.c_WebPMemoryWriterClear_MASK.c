
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ max_size; scalar_t__ size; int * mem; } ;
typedef TYPE_1__ WebPMemoryWriter ;


 int FUNC_0 (int *) ;

void FUNC_1(WebPMemoryWriter* VAR_0) {
  if (VAR_0 != ((void*)0)) {
    FUNC_0(VAR_0->mem);
    VAR_0->mem = ((void*)0);
    VAR_0->size = 0;
    VAR_0->max_size = 0;
  }
}
