
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_5__ {int refs; TYPE_2__ IRpcChannelBuffer_iface; void* dest_context_data; int dest_context; } ;
typedef TYPE_1__ RpcChannelBuffer ;
typedef TYPE_2__ IRpcChannelBuffer ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;

HRESULT FUNC_2(DWORD VAR_3, void *VAR_4, IRpcChannelBuffer **VAR_5)
{
    RpcChannelBuffer *VAR_6 = FUNC_1(FUNC_0(), 0, sizeof(*VAR_6));
    if (!VAR_6)
        return VAR_0;

    VAR_6->IRpcChannelBuffer_iface.lpVtbl = &VAR_2;
    VAR_6->refs = 1;
    VAR_6->dest_context = VAR_3;
    VAR_6->dest_context_data = VAR_4;

    *VAR_5 = &VAR_6->IRpcChannelBuffer_iface;

    return VAR_1;
}
