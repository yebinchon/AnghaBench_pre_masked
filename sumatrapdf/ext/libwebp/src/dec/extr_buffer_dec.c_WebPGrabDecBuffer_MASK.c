
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int is_external_memory; int * private_memory; } ;
typedef TYPE_1__ WebPDecBuffer ;



void FUNC_0(WebPDecBuffer* const VAR_0, WebPDecBuffer* const VAR_1) {
  if (VAR_0 != ((void*)0) && VAR_1 != ((void*)0)) {
    *VAR_1 = *VAR_0;
    if (VAR_0->private_memory != ((void*)0)) {
      VAR_0->is_external_memory = 1;
      VAR_0->private_memory = ((void*)0);
    }
  }
}
