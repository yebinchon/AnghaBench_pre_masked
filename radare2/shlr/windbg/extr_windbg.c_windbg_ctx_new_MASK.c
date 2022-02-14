
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* io_ptr; } ;
typedef TYPE_1__ WindCtx ;


 TYPE_1__* FUNC_0 (int,int) ;

WindCtx *FUNC_1(void *VAR_0) {
 WindCtx *VAR_1 = FUNC_0 (1, sizeof(WindCtx));
 if (!VAR_1) {
  return ((void*)0);
 }
 VAR_1->io_ptr = VAR_0;
 return VAR_1;
}
