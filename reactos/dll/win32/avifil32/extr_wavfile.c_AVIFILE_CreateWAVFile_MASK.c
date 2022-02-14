
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int * lpVtbl; } ;
struct TYPE_12__ {int * lpVtbl; } ;
struct TYPE_11__ {int * lpVtbl; } ;
struct TYPE_10__ {int * lpVtbl; } ;
struct TYPE_14__ {int ref; TYPE_4__ IUnknown_inner; TYPE_4__* outer_unk; TYPE_3__ IAVIStream_iface; TYPE_2__ IPersistFile_iface; TYPE_1__ IAVIFile_iface; } ;
typedef int REFIID ;
typedef TYPE_4__ IUnknown ;
typedef TYPE_5__ IAVIFileImpl ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 TYPE_5__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_4__*,int ,void**) ;
 int FUNC_3 (TYPE_4__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

HRESULT FUNC_4(IUnknown *VAR_6, REFIID VAR_7, void **VAR_8)
{
    IAVIFileImpl *VAR_9;
    HRESULT VAR_10;

    *VAR_8 = ((void*)0);

    VAR_9 = FUNC_1(FUNC_0(), VAR_1, sizeof(*VAR_9));
    if (!VAR_9)
        return VAR_0;

    VAR_9->IUnknown_inner.lpVtbl = &VAR_5;
    VAR_9->IAVIFile_iface.lpVtbl = &VAR_2;
    VAR_9->IPersistFile_iface.lpVtbl = &VAR_3;
    VAR_9->IAVIStream_iface.lpVtbl = &VAR_4;
    VAR_9->ref = 1;
    if (VAR_6)
        VAR_9->outer_unk = VAR_6;
    else
        VAR_9->outer_unk = &VAR_9->IUnknown_inner;

    VAR_10 = FUNC_2(&VAR_9->IUnknown_inner, VAR_7, VAR_8);
    FUNC_3(&VAR_9->IUnknown_inner);

    return VAR_10;
}
