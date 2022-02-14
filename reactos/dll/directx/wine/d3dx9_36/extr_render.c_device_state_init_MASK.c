
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device_state {int num_render_targets; int * depth_stencil; int ** render_targets; } ;
struct TYPE_3__ {int NumSimultaneousRTs; } ;
typedef int IDirect3DSurface9 ;
typedef int IDirect3DDevice9 ;
typedef int HRESULT ;
typedef TYPE_1__ D3DCAPS9 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int ** FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int *,TYPE_1__*) ;

__attribute__((used)) static HRESULT FUNC_4(IDirect3DDevice9 *VAR_2, struct device_state *VAR_3)
{
    HRESULT VAR_4;
    D3DCAPS9 VAR_5;
    unsigned int VAR_6;

    VAR_4 = FUNC_3(VAR_2, &VAR_5);
    if (FUNC_0(VAR_4)) return VAR_4;

    VAR_3->num_render_targets = VAR_5.NumSimultaneousRTs;
    VAR_3->render_targets = FUNC_2(FUNC_1(), 0,
        VAR_3->num_render_targets * sizeof(IDirect3DSurface9 *));
    if (!VAR_3->render_targets)
        return VAR_1;

    for (VAR_6 = 0; VAR_6 < VAR_3->num_render_targets; VAR_6++)
        VAR_3->render_targets[VAR_6] = ((void*)0);
    VAR_3->depth_stencil = ((void*)0);
    return VAR_0;
}
