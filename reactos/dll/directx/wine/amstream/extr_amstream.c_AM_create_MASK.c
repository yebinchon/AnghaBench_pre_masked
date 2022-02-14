
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_7__ {int ref; TYPE_1__ IAMMultiMediaStream_iface; } ;
typedef TYPE_1__* LPVOID ;
typedef int IUnknown ;
typedef TYPE_2__ IAMMultiMediaStreamImpl ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;
 int VAR_4 ;
 int FUNC_2 (char*,int *,TYPE_1__**) ;

HRESULT FUNC_3(IUnknown *VAR_5, LPVOID *VAR_6)
{
    IAMMultiMediaStreamImpl* VAR_7;

    FUNC_2("(%p,%p)\n", VAR_5, VAR_6);

    if( VAR_5 )
        return VAR_1;

    VAR_7 = FUNC_1(FUNC_0(), VAR_3, sizeof(IAMMultiMediaStreamImpl));
    if (!VAR_7)
        return VAR_2;

    VAR_7->IAMMultiMediaStream_iface.lpVtbl = &VAR_0;
    VAR_7->ref = 1;

    *VAR_6 = &VAR_7->IAMMultiMediaStream_iface;

    return VAR_4;
}
