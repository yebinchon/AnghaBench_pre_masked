
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_stateblock {int dummy; } ;
struct TYPE_2__ {int * lpVtbl; } ;
struct d3d9_stateblock {int refcount; int * parent_device; struct wined3d_stateblock* wined3d_stateblock; TYPE_1__ IDirect3DStateBlock9_iface; } ;
struct d3d9_device {int IDirect3DDevice9Ex_iface; int wined3d_device; } ;
typedef enum wined3d_stateblock_type { ____Placeholder_wined3d_stateblock_type } wined3d_stateblock_type ;
typedef int HRESULT ;
typedef scalar_t__ D3DSTATEBLOCKTYPE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ) ;
 int VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int,struct wined3d_stateblock**) ;

HRESULT FUNC_6(struct d3d9_stateblock *VAR_2, struct d3d9_device *VAR_3,
        D3DSTATEBLOCKTYPE VAR_4, struct wined3d_stateblock *VAR_5)
{
    HRESULT VAR_6;

    VAR_2->IDirect3DStateBlock9_iface.lpVtbl = &VAR_1;
    VAR_2->refcount = 1;

    if (VAR_5)
    {
        VAR_2->wined3d_stateblock = VAR_5;
    }
    else
    {
        FUNC_3();
        VAR_6 = FUNC_5(VAR_3->wined3d_device,
                (enum wined3d_stateblock_type)VAR_4, &VAR_2->wined3d_stateblock);
        FUNC_4();
        if (FUNC_0(VAR_6))
        {
            FUNC_2("Failed to create wined3d stateblock, hr %#x.\n", VAR_6);
            return VAR_6;
        }
    }

    VAR_2->parent_device = &VAR_3->IDirect3DDevice9Ex_iface;
    FUNC_1(VAR_2->parent_device);

    return VAR_0;
}
