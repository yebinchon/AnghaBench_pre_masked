
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int dwFlags; scalar_t__ dwBufferSize; int * lpData; } ;
struct TYPE_6__ {int * lpVtbl; } ;
struct d3d_execute_buffer {int ref; TYPE_3__ desc; int need_free; struct d3d_device* d3ddev; TYPE_1__ IDirect3DExecuteBuffer_iface; } ;
struct d3d_device {int dummy; } ;
struct TYPE_7__ {int dwSize; } ;
typedef int HRESULT ;
typedef TYPE_2__ D3DEXECUTEBUFFERDESC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,int ) ;

HRESULT FUNC_3(struct d3d_execute_buffer *VAR_6,
        struct d3d_device *VAR_7, D3DEXECUTEBUFFERDESC *VAR_8)
{
    VAR_6->IDirect3DExecuteBuffer_iface.lpVtbl = &VAR_5;
    VAR_6->ref = 1;
    VAR_6->d3ddev = VAR_7;


    FUNC_2(&VAR_6->desc, VAR_8, VAR_8->dwSize);


    if (!(VAR_6->desc.dwFlags & VAR_1))
        VAR_6->desc.lpData = ((void*)0);


    if (!(VAR_6->desc.dwFlags & VAR_0))
        VAR_6->desc.dwBufferSize = 0;


    if (!VAR_6->desc.lpData && VAR_6->desc.dwBufferSize)
    {
        VAR_6->need_free = VAR_4;
        if (!(VAR_6->desc.lpData = FUNC_1(VAR_6->desc.dwBufferSize)))
        {
            FUNC_0("Failed to allocate execute buffer data.\n");
            return VAR_3;
        }
    }

    VAR_6->desc.dwFlags |= VAR_1;

    return VAR_2;
}
