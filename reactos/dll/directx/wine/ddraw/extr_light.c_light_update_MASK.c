
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct d3d_light {int light7; int dwLightIndex; TYPE_1__* active_viewport; } ;
struct d3d_device {int IDirect3DDevice7_iface; } ;
struct TYPE_2__ {struct d3d_device* active_device; } ;


 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (char*,struct d3d_light*) ;

__attribute__((used)) static void FUNC_2(struct d3d_light *VAR_0)
{
    struct d3d_device *VAR_1;

    FUNC_1("light %p.\n", VAR_0);

    if (!VAR_0->active_viewport || !VAR_0->active_viewport->active_device) return;
    VAR_1 = VAR_0->active_viewport->active_device;

    FUNC_0(&VAR_1->IDirect3DDevice7_iface, VAR_0->dwLightIndex, &VAR_0->light7);
}
