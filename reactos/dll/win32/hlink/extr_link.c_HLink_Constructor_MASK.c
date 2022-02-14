
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int * lpVtbl; } ;
struct TYPE_9__ {int * lpVtbl; } ;
struct TYPE_8__ {int * lpVtbl; } ;
struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_11__ {int ref; TYPE_4__ IBindStatusCallback_iface; TYPE_3__ IDataObject_iface; TYPE_2__ IPersistStream_iface; TYPE_1__ IHlink_iface; } ;
typedef int REFIID ;
typedef int IUnknown ;
typedef TYPE_5__ HlinkImpl ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int *,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 TYPE_5__* FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;

HRESULT FUNC_3(IUnknown *VAR_7, REFIID VAR_8, void **VAR_9)
{
    HlinkImpl * VAR_10;

    FUNC_0("unkOut=%p riid=%s\n", VAR_7, FUNC_1(VAR_8));
    *VAR_9 = ((void*)0);

    if (VAR_7)
        return VAR_0;

    VAR_10 = FUNC_2(sizeof(HlinkImpl));
    if (!VAR_10)
        return VAR_1;

    VAR_10->ref = 1;
    VAR_10->IHlink_iface.lpVtbl = &VAR_5;
    VAR_10->IPersistStream_iface.lpVtbl = &VAR_6;
    VAR_10->IDataObject_iface.lpVtbl = &VAR_4;
    VAR_10->IBindStatusCallback_iface.lpVtbl = &VAR_3;

    *VAR_9 = VAR_10;
    return VAR_2;
}
