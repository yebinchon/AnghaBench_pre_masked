
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int temperature; } ;
typedef TYPE_1__ color_setting_t ;


 float FUNC_0 (double,int) ;
 int * VAR_0 ;
 int FUNC_1 (float,int *,int *,float*) ;

void
FUNC_2(float *VAR_1, float *VAR_2, float *VAR_3,
       int VAR_4, const color_setting_t *VAR_5)
{

 float VAR_6[3];
 float VAR_7 = (VAR_5->temperature % 100) / 100.0;
 int VAR_8 = ((VAR_5->temperature - 1000) / 100)*3;
 FUNC_1(VAR_7, &VAR_0[VAR_8],
     &VAR_0[VAR_8+3], VAR_6);

 for (int VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  VAR_1[VAR_9] = FUNC_0((double)VAR_1[VAR_9], 0);
  VAR_2[VAR_9] = FUNC_0((double)VAR_2[VAR_9], 1);
  VAR_3[VAR_9] = FUNC_0((double)VAR_3[VAR_9], 2);
 }
}
