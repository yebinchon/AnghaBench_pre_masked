
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int xform; } ;
struct TYPE_5__ {int xform; TYPE_2__ fill; } ;
typedef TYPE_1__ NVGstate ;
typedef TYPE_2__ NVGpaint ;
typedef int NVGcontext ;


 int FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (int *) ;

void FUNC_2(NVGcontext* VAR_0, NVGpaint VAR_1)
{
 NVGstate* VAR_2 = FUNC_1(VAR_0);
 VAR_2->fill = VAR_1;
 FUNC_0(VAR_2->fill.xform, VAR_2->xform);
}
