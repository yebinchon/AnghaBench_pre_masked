
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* pDirty; } ;
struct TYPE_7__ {struct TYPE_7__* pDirtyNext; struct TYPE_7__* pDirty; } ;
typedef TYPE_1__ PgHdr ;
typedef TYPE_2__ PCache ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;

PgHdr *FUNC_1(PCache *VAR_0){
  PgHdr *VAR_1;
  for(VAR_1=VAR_0->pDirty; VAR_1; VAR_1=VAR_1->pDirtyNext){
    VAR_1->pDirty = VAR_1->pDirtyNext;
  }
  return FUNC_0(VAR_0->pDirty);
}
