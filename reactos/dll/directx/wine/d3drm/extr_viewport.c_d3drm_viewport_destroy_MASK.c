
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3drm_viewport {int d3drm; int camera; int material; scalar_t__ d3d_viewport; int obj; int IDirect3DRMViewport_iface; } ;
typedef int IDirect3DRMObject ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,struct d3drm_viewport*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct d3drm_viewport*) ;

__attribute__((used)) static void FUNC_7(struct d3drm_viewport *VAR_0)
{
    FUNC_4("viewport %p releasing attached interfaces.\n", VAR_0);

    FUNC_5((IDirect3DRMObject *)&VAR_0->IDirect3DRMViewport_iface, &VAR_0->obj);

    if (VAR_0->d3d_viewport)
    {
        FUNC_3(VAR_0->d3d_viewport);
        FUNC_0(VAR_0->material);
        FUNC_1(VAR_0->camera);
        FUNC_2(VAR_0->d3drm);
    }

    FUNC_6(VAR_0);
}
