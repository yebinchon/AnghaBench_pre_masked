
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int temperature; } ;
typedef TYPE_1__ color_setting_t ;


 int FUNC_0 (double,int) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (float,int *,int *,float*) ;

void
FUNC_2(uint16_t *VAR_2, uint16_t *VAR_3, uint16_t *VAR_4,
        int VAR_5, const color_setting_t *VAR_6)
{

 float VAR_7[3];
 float VAR_8 = (VAR_6->temperature % 100) / 100.0;
 int VAR_9 = ((VAR_6->temperature - 1000) / 100)*3;
 FUNC_1(VAR_8, &VAR_1[VAR_9],
     &VAR_1[VAR_9+3], VAR_7);

 for (int VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  VAR_2[VAR_10] = FUNC_0((double)VAR_2[VAR_10]/(VAR_0+1), 0) *
   (VAR_0+1);
  VAR_3[VAR_10] = FUNC_0((double)VAR_3[VAR_10]/(VAR_0+1), 1) *
   (VAR_0+1);
  VAR_4[VAR_10] = FUNC_0((double)VAR_4[VAR_10]/(VAR_0+1), 2) *
   (VAR_0+1);
 }
}
