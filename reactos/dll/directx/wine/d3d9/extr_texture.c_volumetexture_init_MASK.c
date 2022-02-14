
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_resource_desc {scalar_t__ size; void* depth; void* height; void* width; int access; int usage; scalar_t__ multisample_quality; int multisample_type; int format; int resource_type; } ;
struct TYPE_2__ {int const* lpVtbl; } ;
struct d3d9_texture {int usage; int * parent_device; int wined3d_texture; int rtv_list; int resource; TYPE_1__ IDirect3DBaseTexture9_iface; } ;
struct d3d9_device {int IDirect3DDevice9Ex_iface; int wined3d_device; } ;
typedef void* UINT ;
typedef int IDirect3DBaseTexture9Vtbl ;
typedef int HRESULT ;
typedef int DWORD ;
typedef scalar_t__ D3DPOOL ;
typedef int D3DFORMAT ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (void*,void*) ;
 void* FUNC_6 (void*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ,struct wined3d_resource_desc*,int,void*,int ,int *,struct d3d9_texture*,int *,int *) ;
 int FUNC_10 (scalar_t__,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int) ;

HRESULT FUNC_13(struct d3d9_texture *VAR_10, struct d3d9_device *VAR_11,
        UINT VAR_12, UINT VAR_13, UINT VAR_14, UINT VAR_15, DWORD VAR_16, D3DFORMAT VAR_17, D3DPOOL VAR_18)
{
    struct wined3d_resource_desc VAR_19;
    HRESULT VAR_20;

    VAR_10->IDirect3DBaseTexture9_iface.lpVtbl = (const IDirect3DBaseTexture9Vtbl *)&VAR_8;
    FUNC_3(&VAR_10->resource);
    FUNC_4(&VAR_10->rtv_list);
    VAR_10->usage = VAR_16;

    VAR_19.resource_type = VAR_7;
    VAR_19.format = FUNC_11(VAR_17);
    VAR_19.multisample_type = VAR_6;
    VAR_19.multisample_quality = 0;
    VAR_19.usage = FUNC_12(VAR_16);
    VAR_19.usage |= VAR_5;
    if (VAR_18 == VAR_1)
        VAR_19.usage |= VAR_4;
    VAR_19.access = FUNC_10(VAR_18, VAR_16);
    VAR_19.width = VAR_12;
    VAR_19.height = VAR_13;
    VAR_19.depth = VAR_14;
    VAR_19.size = 0;

    if (VAR_16 & VAR_2)
    {
        FUNC_2("D3DUSAGE_AUTOGENMIPMAP volume texture is not supported, returning D3DERR_INVALIDCALL.\n");
        return VAR_0;
    }
    if (!VAR_15)
        VAR_15 = FUNC_6(FUNC_5(FUNC_5(VAR_12, VAR_13), VAR_14)) + 1;

    FUNC_7();
    VAR_20 = FUNC_9(VAR_11->wined3d_device, &VAR_19, 1, VAR_15, 0,
            ((void*)0), VAR_10, &VAR_9, &VAR_10->wined3d_texture);
    FUNC_8();
    if (FUNC_0(VAR_20))
    {
        FUNC_2("Failed to create wined3d volume texture, hr %#x.\n", VAR_20);
        return VAR_20;
    }

    VAR_10->parent_device = &VAR_11->IDirect3DDevice9Ex_iface;
    FUNC_1(VAR_10->parent_device);

    return VAR_3;
}
