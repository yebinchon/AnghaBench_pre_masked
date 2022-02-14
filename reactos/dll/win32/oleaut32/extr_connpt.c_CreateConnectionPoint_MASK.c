
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_6__ {int ref; int maxSinks; TYPE_1__ IConnectionPoint_iface; scalar_t__ nSinks; void* sinks; int iid; int * Obj; } ;
typedef int * REFIID ;
typedef int IUnknown ;
typedef TYPE_1__ IConnectionPoint ;
typedef int HRESULT ;
typedef TYPE_2__ ConnectionPointImpl ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 void* FUNC_1 (int ,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,int *,int ,TYPE_1__**) ;
 int FUNC_3 (int *) ;

HRESULT FUNC_4(IUnknown *VAR_5, REFIID VAR_6,
         IConnectionPoint **VAR_7)
{
  ConnectionPointImpl *VAR_8;

  FUNC_2("(%p %s %p)\n", VAR_5, FUNC_3(VAR_6), VAR_7);

  *VAR_7 = ((void*)0);
  VAR_8 = FUNC_1(FUNC_0(), 0, sizeof(*VAR_8));
  if (!VAR_8)
    return VAR_1;

  VAR_8->IConnectionPoint_iface.lpVtbl = &VAR_0;
  VAR_8->Obj = VAR_5;
  VAR_8->ref = 1;
  VAR_8->iid = *VAR_6;
  VAR_8->maxSinks = VAR_3;
  VAR_8->sinks = FUNC_1(FUNC_0(), VAR_2, sizeof(IUnknown*) * VAR_3);
  VAR_8->nSinks = 0;

  *VAR_7 = &VAR_8->IConnectionPoint_iface;
  return VAR_4;
}
