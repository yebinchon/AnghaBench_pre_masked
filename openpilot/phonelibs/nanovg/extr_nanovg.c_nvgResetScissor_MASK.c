
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float* extent; int xform; } ;
struct TYPE_5__ {TYPE_1__ scissor; } ;
typedef TYPE_2__ NVGstate ;
typedef int NVGcontext ;


 int FUNC_0 (int ,int ,int) ;
 TYPE_2__* FUNC_1 (int *) ;

void FUNC_2(NVGcontext* VAR_0)
{
 NVGstate* VAR_1 = FUNC_1(VAR_0);
 FUNC_0(VAR_1->scissor.xform, 0, sizeof(VAR_1->scissor.xform));
 VAR_1->scissor.extent[0] = -1.0f;
 VAR_1->scissor.extent[1] = -1.0f;
}
