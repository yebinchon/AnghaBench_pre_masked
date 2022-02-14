
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int * lpVtbl; } ;
struct TYPE_10__ {int * lpVtbl; } ;
struct TYPE_9__ {int * lpVtbl; } ;
struct TYPE_12__ {int ref; TYPE_3__ IUnknown_inner; TYPE_3__* outer_unk; TYPE_2__ IPersistFile_iface; TYPE_1__ IAVIFile_iface; } ;
typedef int REFIID ;
typedef TYPE_3__ IUnknown ;
typedef TYPE_4__ IAVIFileImpl ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 TYPE_4__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_3__*,int ,void**) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

HRESULT FUNC_4(IUnknown *VAR_5, REFIID VAR_6, void **VAR_7)
{
  IAVIFileImpl *VAR_8;
  HRESULT VAR_9;

  *VAR_7 = ((void*)0);
  VAR_8 = FUNC_1(FUNC_0(), VAR_1, sizeof(IAVIFileImpl));
  if (!VAR_8)
    return VAR_0;

  VAR_8->IUnknown_inner.lpVtbl = &VAR_4;
  VAR_8->IAVIFile_iface.lpVtbl = &VAR_2;
  VAR_8->IPersistFile_iface.lpVtbl = &VAR_3;
  VAR_8->ref = 1;
  if (VAR_5)
    VAR_8->outer_unk = VAR_5;
  else
    VAR_8->outer_unk = &VAR_8->IUnknown_inner;

  VAR_9 = FUNC_2(&VAR_8->IUnknown_inner, VAR_6, VAR_7);
  FUNC_3(&VAR_8->IUnknown_inner);

  return VAR_9;
}
