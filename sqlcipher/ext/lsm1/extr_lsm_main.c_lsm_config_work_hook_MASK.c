
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void (* xWork ) (TYPE_1__*,void*) ;void* pWorkCtx; } ;
typedef TYPE_1__ lsm_db ;



void FUNC_0(
  lsm_db *VAR_0,
  void (*VAR_1)(lsm_db *, void *),
  void *VAR_2
){
  VAR_0->xWork = VAR_1;
  VAR_0->pWorkCtx = VAR_2;
}
