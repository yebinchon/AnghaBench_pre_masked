
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float* xform; float* extent; } ;
struct TYPE_5__ {TYPE_1__ scissor; int xform; } ;
typedef TYPE_2__ NVGstate ;
typedef int NVGcontext ;


 int FUNC_0 (float*) ;
 int FUNC_1 (float*,int ) ;
 TYPE_2__* FUNC_2 (int *) ;
 float FUNC_3 (float,float) ;

void FUNC_4(NVGcontext* VAR_0, float VAR_1, float VAR_2, float VAR_3, float VAR_4)
{
 NVGstate* VAR_5 = FUNC_2(VAR_0);

 VAR_3 = FUNC_3(0.0f, VAR_3);
 VAR_4 = FUNC_3(0.0f, VAR_4);

 FUNC_0(VAR_5->scissor.xform);
 VAR_5->scissor.xform[4] = VAR_1+VAR_3*0.5f;
 VAR_5->scissor.xform[5] = VAR_2+VAR_4*0.5f;
 FUNC_1(VAR_5->scissor.xform, VAR_5->xform);

 VAR_5->scissor.extent[0] = VAR_3*0.5f;
 VAR_5->scissor.extent[1] = VAR_4*0.5f;
}
