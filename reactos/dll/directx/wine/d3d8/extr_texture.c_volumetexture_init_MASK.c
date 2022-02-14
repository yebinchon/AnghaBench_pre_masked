
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_resource_desc {int usage; scalar_t__ size; void* depth; void* height; void* width; int access; scalar_t__ multisample_quality; int multisample_type; int format; int resource_type; } ;
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
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *) ;
 int VAR_8 ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (void*,void*) ;
 void* FUNC_6 (void*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ,struct wined3d_resource_desc*,int,void*,int ,int *,struct d3d8_texture*,int *,int *) ;
 int FUNC_10 (scalar_t__,int) ;
 int FUNC_11 (int ) ;

HRESULT FUNC_12(struct d3d8_texture *VAR_9, struct d3d8_device *VAR_10,
        UINT VAR_11, UINT VAR_12, UINT VAR_13, UINT VAR_14, DWORD VAR_15, D3DFORMAT VAR_16, D3DPOOL VAR_17)
{
    struct wined3d_resource_desc VAR_18;
    HRESULT VAR_19;

    VAR_9->IDirect3DBaseTexture8_iface.lpVtbl = (const IDirect3DBaseTexture8Vtbl *)&VAR_2;
    FUNC_3(&VAR_9->resource);
    FUNC_4(&VAR_9->rtv_list);

    VAR_18.resource_type = VAR_7;
    VAR_18.format = FUNC_11(VAR_16);
    VAR_18.multisample_type = VAR_6;
    VAR_18.multisample_quality = 0;
    VAR_18.usage = VAR_15 & VAR_3;
    VAR_18.usage |= VAR_5;
    if (VAR_17 == VAR_0)
        VAR_18.usage |= VAR_4;
    VAR_18.access = FUNC_10(VAR_17, VAR_15);
    VAR_18.width = VAR_11;
    VAR_18.height = VAR_12;
    VAR_18.depth = VAR_13;
    VAR_18.size = 0;

    if (!VAR_14)
        VAR_14 = FUNC_6(FUNC_5(FUNC_5(VAR_11, VAR_12), VAR_13)) + 1;

    FUNC_7();
    VAR_19 = FUNC_9(VAR_10->wined3d_device, &VAR_18, 1, VAR_14, 0,
            ((void*)0), VAR_9, &VAR_8, &VAR_9->wined3d_texture);
    FUNC_8();
    if (FUNC_0(VAR_19))
    {
        FUNC_2("Failed to create wined3d volume texture, hr %#x.\n", VAR_19);
        return VAR_19;
    }

    VAR_9->parent_device = &VAR_10->IDirect3DDevice8_iface;
    FUNC_1(VAR_9->parent_device);

    return VAR_1;
}
