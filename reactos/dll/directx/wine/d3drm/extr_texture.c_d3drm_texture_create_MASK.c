
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * lpVtbl; } ;
struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_5__ {int * lpVtbl; } ;
struct d3drm_texture {int obj; int * d3drm; TYPE_1__ IDirect3DRMTexture3_iface; TYPE_3__ IDirect3DRMTexture2_iface; TYPE_2__ IDirect3DRMTexture_iface; } ;
typedef int IDirect3DRM ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct d3drm_texture**) ;
 int FUNC_1 (int *,char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct d3drm_texture* FUNC_2 (int) ;

HRESULT FUNC_3(struct d3drm_texture **VAR_5, IDirect3DRM *VAR_6)
{
    static const char VAR_7[] = "Texture";
    struct d3drm_texture *VAR_8;

    FUNC_0("texture %p.\n", VAR_5);

    if (!(VAR_8 = FUNC_2(sizeof(*VAR_8))))
        return VAR_1;

    VAR_8->IDirect3DRMTexture_iface.lpVtbl = &VAR_2;
    VAR_8->IDirect3DRMTexture2_iface.lpVtbl = &VAR_3;
    VAR_8->IDirect3DRMTexture3_iface.lpVtbl = &VAR_4;
    VAR_8->d3drm = VAR_6;

    FUNC_1(&VAR_8->obj, VAR_7);

    *VAR_5 = VAR_8;

    return VAR_0;
}
