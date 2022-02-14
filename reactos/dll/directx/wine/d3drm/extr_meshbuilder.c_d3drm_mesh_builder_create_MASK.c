
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * lpVtbl; } ;
struct TYPE_3__ {int * lpVtbl; } ;
struct d3drm_mesh_builder {int ref; int obj; int * d3drm; TYPE_2__ IDirect3DRMMeshBuilder3_iface; TYPE_1__ IDirect3DRMMeshBuilder2_iface; } ;
typedef int IDirect3DRM ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (char*,struct d3drm_mesh_builder**) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,char const*) ;
 struct d3drm_mesh_builder* FUNC_3 (int) ;

HRESULT FUNC_4(struct d3drm_mesh_builder **VAR_4, IDirect3DRM *VAR_5)
{
    static const char VAR_6[] = "Builder";
    struct d3drm_mesh_builder *VAR_7;

    FUNC_1("mesh_builder %p.\n", VAR_4);

    if (!(VAR_7 = FUNC_3(sizeof(*VAR_7))))
        return VAR_0;

    VAR_7->IDirect3DRMMeshBuilder2_iface.lpVtbl = &VAR_2;
    VAR_7->IDirect3DRMMeshBuilder3_iface.lpVtbl = &VAR_3;
    VAR_7->ref = 1;
    VAR_7->d3drm = VAR_5;
    FUNC_0(VAR_7->d3drm);

    FUNC_2(&VAR_7->obj, VAR_6);

    *VAR_4 = VAR_7;

    return VAR_1;
}
