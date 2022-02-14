
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int * lpVtbl; } ;
struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_8__ {int ref; TYPE_3__ IInternetProtocol_iface; TYPE_1__ IInternetProtocolSink_iface; } ;
typedef TYPE_2__ MimeFilter ;
typedef TYPE_3__* LPVOID ;
typedef int IUnknown ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int *,TYPE_3__**) ;
 int FUNC_1 () ;
 TYPE_2__* FUNC_2 (int) ;

HRESULT FUNC_3(IUnknown *VAR_3, LPVOID *VAR_4)
{
    MimeFilter *VAR_5;

    FUNC_0("(%p %p)\n", VAR_3, VAR_4);

    FUNC_1();

    VAR_5 = FUNC_2(sizeof(MimeFilter));

    VAR_5->IInternetProtocol_iface.lpVtbl = &VAR_1;
    VAR_5->IInternetProtocolSink_iface.lpVtbl = &VAR_0;
    VAR_5->ref = 1;

    *VAR_4 = &VAR_5->IInternetProtocol_iface;
    return VAR_2;
}
