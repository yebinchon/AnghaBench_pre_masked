
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_resource_desc {int access; int width; int height; int depth; int format; scalar_t__ size; int usage; scalar_t__ multisample_quality; int multisample_type; int resource_type; } ;
struct TYPE_2__ {int const* lpVtbl; } ;
struct d3d9_texture {int usage; int * parent_device; int wined3d_texture; int autogen_filter_type; int rtv_list; int resource; TYPE_1__ IDirect3DBaseTexture9_iface; } ;
struct d3d9_device {int IDirect3DDevice9Ex_iface; int wined3d_device; } ;
typedef int UINT ;
typedef int IDirect3DBaseTexture9Vtbl ;
typedef int HRESULT ;
typedef int DWORD ;
typedef scalar_t__ D3DPOOL ;
typedef int D3DFORMAT ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (int *) ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int ,struct wined3d_resource_desc*,int,int,int,int *,struct d3d9_texture*,int *,int *) ;
 int FUNC_11 (scalar_t__,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int) ;

HRESULT FUNC_14(struct d3d9_texture *VAR_20, struct d3d9_device *VAR_21,
        UINT VAR_22, UINT VAR_23, UINT VAR_24, DWORD VAR_25, D3DFORMAT VAR_26, D3DPOOL VAR_27)
{
    struct wined3d_resource_desc VAR_28;
    DWORD VAR_29 = 0;
    HRESULT VAR_30;

    VAR_20->IDirect3DBaseTexture9_iface.lpVtbl = (const IDirect3DBaseTexture9Vtbl *)&VAR_18;
    FUNC_3(&VAR_20->resource);
    FUNC_5(&VAR_20->rtv_list);
    VAR_20->usage = VAR_25;

    VAR_28.resource_type = VAR_14;
    VAR_28.format = FUNC_12(VAR_26);
    VAR_28.multisample_type = VAR_11;
    VAR_28.multisample_quality = 0;
    VAR_28.usage = FUNC_13(VAR_25);
    VAR_28.usage |= VAR_10;
    if (VAR_27 == VAR_2)
        VAR_28.usage |= VAR_9;
    VAR_28.access = FUNC_11(VAR_27, VAR_25)
            | VAR_12 | VAR_13;
    VAR_28.width = VAR_22;
    VAR_28.height = VAR_23;
    VAR_28.depth = 1;
    VAR_28.size = 0;

    if (VAR_27 != VAR_1 || (VAR_25 & VAR_7))
        VAR_29 |= VAR_17;

    if (FUNC_4(VAR_28.format))
        VAR_29 |= VAR_16;

    if (VAR_25 & VAR_6)
    {
        if (VAR_27 == VAR_3)
        {
            FUNC_2("D3DUSAGE_AUTOGENMIPMAP texture can't be in D3DPOOL_SYSTEMMEM, returning D3DERR_INVALIDCALL.\n");
            return VAR_0;
        }
        if (VAR_24 && VAR_24 != 1)
        {
            FUNC_2("D3DUSAGE_AUTOGENMIPMAP texture with %u levels, returning D3DERR_INVALIDCALL.\n", VAR_24);
            return VAR_0;
        }
        VAR_29 |= VAR_15;
        VAR_20->autogen_filter_type = VAR_4;
        VAR_24 = 0;
    }
    else
    {
        VAR_20->autogen_filter_type = VAR_5;
    }
    if (!VAR_24)
        VAR_24 = FUNC_7(FUNC_6(VAR_22, VAR_23)) + 1;

    FUNC_8();
    VAR_30 = FUNC_10(VAR_21->wined3d_device, &VAR_28, 1, VAR_24, VAR_29,
            ((void*)0), VAR_20, &VAR_19, &VAR_20->wined3d_texture);
    FUNC_9();
    if (FUNC_0(VAR_30))
    {
        FUNC_2("Failed to create wined3d texture, hr %#x.\n", VAR_30);
        return VAR_30;
    }

    VAR_20->parent_device = &VAR_21->IDirect3DDevice9Ex_iface;
    FUNC_1(VAR_20->parent_device);

    return VAR_8;
}
