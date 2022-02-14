
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int * lpVtbl; } ;
struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_8__ {int ref; TYPE_3__ IUnknown_outer; int * stream; TYPE_3__* outer; TYPE_1__ IInternetProtocolEx_iface; } ;
typedef TYPE_2__ MkProtocol ;
typedef TYPE_3__ IUnknown ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,TYPE_3__*,void**) ;
 int FUNC_1 () ;
 TYPE_2__* FUNC_2 (int) ;

HRESULT FUNC_3(IUnknown *VAR_3, void **VAR_4)
{
    MkProtocol *VAR_5;

    FUNC_0("(%p %p)\n", VAR_3, VAR_4);

    FUNC_1();

    VAR_5 = FUNC_2(sizeof(MkProtocol));

    VAR_5->IUnknown_outer.lpVtbl = &VAR_0;
    VAR_5->IInternetProtocolEx_iface.lpVtbl = &VAR_1;
    VAR_5->ref = 1;
    VAR_5->outer = VAR_3 ? VAR_3 : &VAR_5->IUnknown_outer;
    VAR_5->stream = ((void*)0);




    *VAR_4 = &VAR_5->IUnknown_outer;
    return VAR_2;
}
