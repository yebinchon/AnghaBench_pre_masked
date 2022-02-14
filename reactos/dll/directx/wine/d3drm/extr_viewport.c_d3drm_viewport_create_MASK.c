
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * lpVtbl; } ;
struct TYPE_3__ {int * lpVtbl; } ;
struct d3drm_viewport {int obj; int * d3drm; TYPE_2__ IDirect3DRMViewport2_iface; TYPE_1__ IDirect3DRMViewport_iface; } ;
typedef int IDirect3DRM ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct d3drm_viewport**,int *) ;
 int FUNC_1 (int *,char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct d3drm_viewport* FUNC_2 (int) ;

HRESULT FUNC_3(struct d3drm_viewport **VAR_4, IDirect3DRM *VAR_5)
{
    static const char VAR_6[] = "Viewport";
    struct d3drm_viewport *VAR_7;

    FUNC_0("viewport %p, d3drm %p.\n", VAR_4, VAR_5);

    if (!(VAR_7 = FUNC_2(sizeof(*VAR_7))))
        return VAR_0;

    VAR_7->IDirect3DRMViewport_iface.lpVtbl = &VAR_2;
    VAR_7->IDirect3DRMViewport2_iface.lpVtbl = &VAR_3;
    VAR_7->d3drm = VAR_5;
    FUNC_1(&VAR_7->obj, VAR_6);

    *VAR_4 = VAR_7;

    return VAR_1;
}
