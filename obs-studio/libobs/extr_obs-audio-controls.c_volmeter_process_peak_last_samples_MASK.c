
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float** prev_samples; } ;
typedef TYPE_1__ obs_volmeter_t ;



__attribute__((used)) static void FUNC_0(obs_volmeter_t *VAR_0,
            int VAR_1, float *VAR_2,
            size_t VAR_3)
{




 switch (VAR_3) {
 case 0:
  break;
 case 1:
  VAR_0->prev_samples[VAR_1][0] =
   VAR_0->prev_samples[VAR_1][1];
  VAR_0->prev_samples[VAR_1][1] =
   VAR_0->prev_samples[VAR_1][2];
  VAR_0->prev_samples[VAR_1][2] =
   VAR_0->prev_samples[VAR_1][3];
  VAR_0->prev_samples[VAR_1][3] = VAR_2[VAR_3 - 1];
  break;
 case 2:
  VAR_0->prev_samples[VAR_1][0] =
   VAR_0->prev_samples[VAR_1][2];
  VAR_0->prev_samples[VAR_1][1] =
   VAR_0->prev_samples[VAR_1][3];
  VAR_0->prev_samples[VAR_1][2] = VAR_2[VAR_3 - 2];
  VAR_0->prev_samples[VAR_1][3] = VAR_2[VAR_3 - 1];
  break;
 case 3:
  VAR_0->prev_samples[VAR_1][0] =
   VAR_0->prev_samples[VAR_1][3];
  VAR_0->prev_samples[VAR_1][1] = VAR_2[VAR_3 - 3];
  VAR_0->prev_samples[VAR_1][2] = VAR_2[VAR_3 - 2];
  VAR_0->prev_samples[VAR_1][3] = VAR_2[VAR_3 - 1];
  break;
 default:
  VAR_0->prev_samples[VAR_1][0] = VAR_2[VAR_3 - 4];
  VAR_0->prev_samples[VAR_1][1] = VAR_2[VAR_3 - 3];
  VAR_0->prev_samples[VAR_1][2] = VAR_2[VAR_3 - 2];
  VAR_0->prev_samples[VAR_1][3] = VAR_2[VAR_3 - 1];
 }
}
