
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float* extent; int xform; } ;
struct TYPE_5__ {int xform; TYPE_1__ scissor; } ;
typedef TYPE_2__ NVGstate ;
typedef int NVGcontext ;


 int FUNC_0 (float*,int ,int) ;
 int FUNC_1 (int *,float,float,float,float) ;
 int FUNC_2 (float*,int ) ;
 int FUNC_3 (float*,float*) ;
 float FUNC_4 (float) ;
 TYPE_2__* FUNC_5 (int *) ;
 int FUNC_6 (float*,float,float,float,float,float,float,float,float) ;

void FUNC_7(NVGcontext* VAR_0, float VAR_1, float VAR_2, float VAR_3, float VAR_4)
{
 NVGstate* VAR_5 = FUNC_5(VAR_0);
 float VAR_6[6], VAR_7[6];
 float VAR_8[4];
 float VAR_9, VAR_10, VAR_11, VAR_12;


 if (VAR_5->scissor.extent[0] < 0) {
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
  return;
 }



 FUNC_0(VAR_6, VAR_5->scissor.xform, sizeof(float)*6);
 VAR_9 = VAR_5->scissor.extent[0];
 VAR_10 = VAR_5->scissor.extent[1];
 FUNC_2(VAR_7, VAR_5->xform);
 FUNC_3(VAR_6, VAR_7);
 VAR_11 = VAR_9*FUNC_4(VAR_6[0]) + VAR_10*FUNC_4(VAR_6[2]);
 VAR_12 = VAR_9*FUNC_4(VAR_6[1]) + VAR_10*FUNC_4(VAR_6[3]);


 FUNC_6(VAR_8, VAR_6[4]-VAR_11,VAR_6[5]-VAR_12,VAR_11*2,VAR_12*2, VAR_1,VAR_2,VAR_3,VAR_4);

 FUNC_1(VAR_0, VAR_8[0], VAR_8[1], VAR_8[2], VAR_8[3]);
}
