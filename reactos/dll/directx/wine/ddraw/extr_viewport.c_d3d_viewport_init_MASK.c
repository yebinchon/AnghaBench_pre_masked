
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ddraw {int dummy; } ;
struct TYPE_2__ {int * lpVtbl; } ;
struct d3d_viewport {int ref; int use_vp2; int light_list; struct ddraw* ddraw; TYPE_1__ IDirect3DViewport3_iface; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct d3d_viewport *VAR_1, struct ddraw *VAR_2)
{
    VAR_1->IDirect3DViewport3_iface.lpVtbl = &VAR_0;
    VAR_1->ref = 1;
    VAR_1->ddraw = VAR_2;
    VAR_1->use_vp2 = 0xff;
    FUNC_0(&VAR_1->light_list);
}
