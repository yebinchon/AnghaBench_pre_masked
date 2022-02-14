
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ddraw {int dummy; } ;
struct TYPE_2__ {int * lpVtbl; } ;
struct d3d_light {int ref; struct ddraw* ddraw; TYPE_1__ IDirect3DLight_iface; } ;


 int VAR_0 ;

void FUNC_0(struct d3d_light *VAR_1, struct ddraw *VAR_2)
{
    VAR_1->IDirect3DLight_iface.lpVtbl = &VAR_0;
    VAR_1->ref = 1;
    VAR_1->ddraw = VAR_2;
}
