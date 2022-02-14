
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int xform; } ;
typedef TYPE_1__ NVGstate ;
typedef int NVGcontext ;


 int FUNC_0 (int ,float*) ;
 int FUNC_1 (float*,float,float) ;
 TYPE_1__* FUNC_2 (int *) ;

void FUNC_3(NVGcontext* VAR_0, float VAR_1, float VAR_2)
{
 NVGstate* VAR_3 = FUNC_2(VAR_0);
 float VAR_4[6];
 FUNC_1(VAR_4, VAR_1,VAR_2);
 FUNC_0(VAR_3->xform, VAR_4);
}
