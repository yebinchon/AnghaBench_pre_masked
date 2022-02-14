
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * lpVtbl; } ;
struct TYPE_3__ {int * lpVtbl; } ;
struct d3drm_face {int ref; int obj; TYPE_2__ IDirect3DRMFace2_iface; TYPE_1__ IDirect3DRMFace_iface; } ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct d3drm_face**) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char const*) ;
 struct d3drm_face* FUNC_2 (int) ;

HRESULT FUNC_3(struct d3drm_face **VAR_4)
{
    static const char VAR_5[] = "Face";
    struct d3drm_face *VAR_6;

    FUNC_0("face %p.\n", VAR_4);

    if (!(VAR_6 = FUNC_2(sizeof(*VAR_6))))
        return VAR_0;

    VAR_6->IDirect3DRMFace_iface.lpVtbl = &VAR_2;
    VAR_6->IDirect3DRMFace2_iface.lpVtbl = &VAR_3;
    VAR_6->ref = 1;

    FUNC_1(&VAR_6->obj, VAR_5);

    *VAR_4 = VAR_6;

    return VAR_1;
}
