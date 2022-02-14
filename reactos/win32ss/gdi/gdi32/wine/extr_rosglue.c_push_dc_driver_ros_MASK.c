
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct gdi_dc_funcs {scalar_t__ priority; } ;
struct TYPE_7__ {int hdc; } ;
struct TYPE_6__ {int hdc; struct TYPE_6__* next; struct gdi_dc_funcs const* funcs; } ;
typedef TYPE_1__* PHYSDEV ;


 TYPE_4__* FUNC_0 (TYPE_1__**,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_1(
    PHYSDEV *VAR_2,
    PHYSDEV VAR_3,
    const struct gdi_dc_funcs *VAR_4)
{
    while ((*VAR_2)->funcs->priority > VAR_4->priority) VAR_2 = &(*VAR_2)->next;
    VAR_3->funcs = VAR_4;
    VAR_3->next = *VAR_2;
    VAR_3->hdc = FUNC_0(VAR_2, VAR_0, VAR_1)->hdc;
    *VAR_2 = VAR_3;
}
