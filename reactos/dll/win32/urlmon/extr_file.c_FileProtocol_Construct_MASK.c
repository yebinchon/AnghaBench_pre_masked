
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int * lpVtbl; } ;
struct TYPE_9__ {int * lpVtbl; } ;
struct TYPE_8__ {int * lpVtbl; } ;
struct TYPE_11__ {int ref; TYPE_3__ IUnknown_outer; int * outer; scalar_t__ priority; int file; TYPE_2__ IInternetPriority_iface; TYPE_1__ IInternetProtocolEx_iface; } ;
typedef TYPE_3__* LPVOID ;
typedef int IUnknown ;
typedef int HRESULT ;
typedef TYPE_4__ FileProtocol ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int *,TYPE_3__**) ;
 int FUNC_1 () ;
 TYPE_4__* FUNC_2 (int) ;

HRESULT FUNC_3(IUnknown *VAR_5, LPVOID *VAR_6)
{
    FileProtocol *VAR_7;

    FUNC_0("(%p %p)\n", VAR_5, VAR_6);

    FUNC_1();

    VAR_7 = FUNC_2(sizeof(FileProtocol));

    VAR_7->IUnknown_outer.lpVtbl = &VAR_2;
    VAR_7->IInternetProtocolEx_iface.lpVtbl = &VAR_1;
    VAR_7->IInternetPriority_iface.lpVtbl = &VAR_0;
    VAR_7->file = VAR_3;
    VAR_7->priority = 0;
    VAR_7->ref = 1;
    VAR_7->outer = VAR_5 ? VAR_5 : (IUnknown*)&VAR_7->IUnknown_outer;

    *VAR_6 = &VAR_7->IUnknown_outer;
    return VAR_4;
}
