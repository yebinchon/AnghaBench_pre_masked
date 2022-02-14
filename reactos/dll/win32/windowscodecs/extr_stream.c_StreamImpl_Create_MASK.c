
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_5__ {int ref; TYPE_2__ IWICStream_iface; int * pStream; } ;
typedef TYPE_1__ IWICStreamImpl ;
typedef TYPE_2__ IWICStream ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;

HRESULT FUNC_2(IWICStream **VAR_4)
{
    IWICStreamImpl *VAR_5;

    if( !VAR_4 ) return VAR_0;

    VAR_5 = FUNC_1(FUNC_0(), 0, sizeof(IWICStreamImpl));
    if( !VAR_5 ) {
        *VAR_4 = ((void*)0);
        return VAR_1;
    }

    VAR_5->IWICStream_iface.lpVtbl = &VAR_3;
    VAR_5->ref = 1;
    VAR_5->pStream = ((void*)0);

    *VAR_4 = &VAR_5->IWICStream_iface;

    return VAR_2;
}
