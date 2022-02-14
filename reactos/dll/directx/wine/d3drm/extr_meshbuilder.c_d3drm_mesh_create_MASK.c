
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * lpVtbl; } ;
struct d3drm_mesh {int ref; int obj; int * d3drm; TYPE_1__ IDirect3DRMMesh_iface; } ;
typedef int IDirect3DRM ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (char*,struct d3drm_mesh**,int *) ;
 int VAR_2 ;
 int FUNC_2 (int *,char const*) ;
 struct d3drm_mesh* FUNC_3 (int) ;

HRESULT FUNC_4(struct d3drm_mesh **VAR_3, IDirect3DRM *VAR_4)
{
    static const char VAR_5[] = "Mesh";
    struct d3drm_mesh *VAR_6;

    FUNC_1("mesh %p, d3drm %p.\n", VAR_3, VAR_4);

    if (!(VAR_6 = FUNC_3(sizeof(*VAR_6))))
        return VAR_0;

    VAR_6->IDirect3DRMMesh_iface.lpVtbl = &VAR_2;
    VAR_6->ref = 1;
    VAR_6->d3drm = VAR_4;
    FUNC_0(VAR_6->d3drm);

    FUNC_2(&VAR_6->obj, VAR_5);

    *VAR_3 = VAR_6;

    return VAR_1;
}
