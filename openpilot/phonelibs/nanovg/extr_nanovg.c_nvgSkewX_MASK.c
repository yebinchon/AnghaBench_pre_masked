
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int xform; } ;
typedef TYPE_1__ NVGstate ;
typedef int NVGcontext ;


 int FUNC_0 (int ,float*) ;
 int FUNC_1 (float*,float) ;
 TYPE_1__* FUNC_2 (int *) ;

void FUNC_3(NVGcontext* VAR_0, float VAR_1)
{
 NVGstate* VAR_2 = FUNC_2(VAR_0);
 float VAR_3[6];
 FUNC_1(VAR_3, VAR_1);
 FUNC_0(VAR_2->xform, VAR_3);
}
