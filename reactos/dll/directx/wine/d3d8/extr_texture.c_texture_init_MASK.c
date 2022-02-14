
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_resource_desc {int usage; int access; int depth; scalar_t__ size; void* height; void* width; scalar_t__ multisample_quality; int multisample_type; int format; int resource_type; } ;
struct TYPE_2__ {int const* lpVtbl; } ;
struct d3d8_texture {int * parent_device; int wined3d_texture; int rtv_list; int resource; TYPE_1__ IDirect3DBaseTexture8_iface; } ;
struct d3d8_device {int IDirect3DDevice8_iface; int wined3d_device; } ;
typedef void* UINT ;
typedef int IDirect3DBaseTexture8Vtbl ;
typedef int HRESULT ;
typedef int DWORD ;
typedef scalar_t__ D3DPOOL ;
typedef int D3DFORMAT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int *) ;
 int VAR_13 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (void*,void*) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ,struct wined3d_resource_desc*,int,void*,int,int *,struct d3d8_texture*,int *,int *) ;
 int FUNC_10 (scalar_t__,int) ;
 int FUNC_11 (int ) ;

HRESULT FUNC_12(struct d3d8_texture *VAR_14, struct d3d8_device *VAR_15,
        UINT VAR_16, UINT VAR_17, UINT VAR_18, DWORD VAR_19, D3DFORMAT VAR_20, D3DPOOL VAR_21)
{
    struct wined3d_resource_desc VAR_22;
    DWORD VAR_23 = 0;
    HRESULT VAR_24;

    VAR_14->IDirect3DBaseTexture8_iface.lpVtbl = (const IDirect3DBaseTexture8Vtbl *)&VAR_4;
    FUNC_3(&VAR_14->resource);
    FUNC_4(&VAR_14->rtv_list);

    VAR_22.resource_type = VAR_11;
    VAR_22.format = FUNC_11(VAR_20);
    VAR_22.multisample_type = VAR_8;
    VAR_22.multisample_quality = 0;
    VAR_22.usage = VAR_19 & VAR_5;
    VAR_22.usage |= VAR_7;
    if (VAR_21 == VAR_1)
        VAR_22.usage |= VAR_6;
    VAR_22.access = FUNC_10(VAR_21, VAR_19)
            | VAR_9 | VAR_10;
    VAR_22.width = VAR_16;
    VAR_22.height = VAR_17;
    VAR_22.depth = 1;
    VAR_22.size = 0;

    if (VAR_21 != VAR_0 || (VAR_19 & VAR_2))
        VAR_23 |= VAR_12;

    if (!VAR_18)
        VAR_18 = FUNC_6(FUNC_5(VAR_16, VAR_17)) + 1;

    FUNC_7();
    VAR_24 = FUNC_9(VAR_15->wined3d_device, &VAR_22, 1, VAR_18, VAR_23,
            ((void*)0), VAR_14, &VAR_13, &VAR_14->wined3d_texture);
    FUNC_8();
    if (FUNC_0(VAR_24))
    {
        FUNC_2("Failed to create wined3d texture, hr %#x.\n", VAR_24);
        return VAR_24;
    }

    VAR_14->parent_device = &VAR_15->IDirect3DDevice8_iface;
    FUNC_1(VAR_14->parent_device);

    return VAR_3;
}
