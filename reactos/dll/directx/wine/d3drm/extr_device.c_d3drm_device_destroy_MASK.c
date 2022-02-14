
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3drm_device {int d3drm; scalar_t__ ddraw; int clipper; scalar_t__ primary_surface; scalar_t__ render_target; scalar_t__ device; int obj; int IDirect3DRMDevice_iface; } ;
typedef int IDirect3DRMObject ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct d3drm_device*) ;

void FUNC_8(struct d3drm_device *VAR_0)
{
    FUNC_6((IDirect3DRMObject *)&VAR_0->IDirect3DRMDevice_iface, &VAR_0->obj);
    if (VAR_0->device)
    {
        FUNC_5("Releasing attached ddraw interfaces.\n");
        FUNC_0(VAR_0->device);
    }
    if (VAR_0->render_target)
        FUNC_3(VAR_0->render_target);
    if (VAR_0->primary_surface)
    {
        FUNC_5("Releasing primary surface and attached clipper.\n");
        FUNC_3(VAR_0->primary_surface);
        FUNC_2(VAR_0->clipper);
    }
    if (VAR_0->ddraw)
    {
        FUNC_4(VAR_0->ddraw);
        FUNC_1(VAR_0->d3drm);
    }
    FUNC_7(VAR_0);
}
