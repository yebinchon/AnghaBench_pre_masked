
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int xform; } ;
typedef TYPE_1__ NVGstate ;
typedef int NVGcontext ;


 int FUNC_0 (float*,int ,int) ;
 TYPE_1__* FUNC_1 (int *) ;

void FUNC_2(NVGcontext* VAR_0, float* VAR_1)
{
 NVGstate* VAR_2 = FUNC_1(VAR_0);
 if (VAR_1 == ((void*)0)) return;
 FUNC_0(VAR_1, VAR_2->xform, sizeof(float)*6);
}
