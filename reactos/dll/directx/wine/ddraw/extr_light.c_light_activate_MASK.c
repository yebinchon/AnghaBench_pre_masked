
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dwFlags; } ;
struct d3d_light {TYPE_2__ light; int dwLightIndex; TYPE_1__* active_viewport; } ;
struct d3d_device {int IDirect3DDevice7_iface; } ;
struct TYPE_3__ {struct d3d_device* active_device; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (char*,struct d3d_light*) ;
 int VAR_1 ;
 int FUNC_2 (struct d3d_light*) ;

void FUNC_3(struct d3d_light *VAR_2)
{
    struct d3d_device *VAR_3;

    FUNC_1("light %p.\n", VAR_2);

    if (!VAR_2->active_viewport || !VAR_2->active_viewport->active_device) return;
    VAR_3 = VAR_2->active_viewport->active_device;

    FUNC_2(VAR_2);
    if (!(VAR_2->light.dwFlags & VAR_0))
    {
        FUNC_0(&VAR_3->IDirect3DDevice7_iface, VAR_2->dwLightIndex, VAR_1);
        VAR_2->light.dwFlags |= VAR_0;
    }
}
