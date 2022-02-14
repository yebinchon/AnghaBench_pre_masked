
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {float* rgba; int member_0; } ;
typedef TYPE_1__ NVGcolor ;


 float FUNC_0 (float,float,float) ;

NVGcolor FUNC_1(NVGcolor VAR_0, NVGcolor VAR_1, float VAR_2)
{
 int VAR_3;
 float VAR_4;
 NVGcolor VAR_5 = {0};

 VAR_2 = FUNC_0(VAR_2, 0.0f, 1.0f);
 VAR_4 = 1.0f - VAR_2;
 for( VAR_3 = 0; VAR_3 <4; VAR_3++ )
 {
  VAR_5.rgba[VAR_3] = VAR_0[VAR_3] * VAR_4 + VAR_1[VAR_3] * VAR_2;
 }

 return VAR_5;
}
