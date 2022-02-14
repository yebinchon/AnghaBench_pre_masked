
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ddraw {int dummy; } ;
struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_4__ {int * lpVtbl; } ;
struct d3d_material {int ref; struct ddraw* ddraw; TYPE_3__ IDirect3DMaterial_iface; TYPE_2__ IDirect3DMaterial2_iface; TYPE_1__ IDirect3DMaterial3_iface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct d3d_material* FUNC_0 (int) ;

struct d3d_material *FUNC_1(struct ddraw *VAR_3)
{
    struct d3d_material *VAR_4;

    if (!(VAR_4 = FUNC_0(sizeof(*VAR_4))))
        return ((void*)0);

    VAR_4->IDirect3DMaterial3_iface.lpVtbl = &VAR_2;
    VAR_4->IDirect3DMaterial2_iface.lpVtbl = &VAR_1;
    VAR_4->IDirect3DMaterial_iface.lpVtbl = &VAR_0;
    VAR_4->ref = 1;
    VAR_4->ddraw = VAR_3;

    return VAR_4;
}
