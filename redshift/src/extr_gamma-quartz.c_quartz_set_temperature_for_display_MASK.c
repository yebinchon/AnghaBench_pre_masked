
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {TYPE_1__* displays; } ;
typedef TYPE_2__ quartz_state_t ;
typedef int color_setting_t ;
struct TYPE_4__ {int ramp_size; int saved_ramps; int display; } ;
typedef scalar_t__ CGError ;
typedef int CGDirectDisplayID ;


 scalar_t__ FUNC_0 (int ,int,float*,float*,float*) ;
 int FUNC_1 (float*,float*,float*,int,int const*) ;
 int FUNC_2 (float*) ;
 scalar_t__ VAR_0 ;
 float* FUNC_3 (int) ;
 int FUNC_4 (float*,int ,int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(
 quartz_state_t *VAR_1, int VAR_2,
 const color_setting_t *VAR_3, int VAR_4)
{
 CGDirectDisplayID VAR_5 = VAR_1->displays[VAR_2].display;
 uint32_t VAR_6 = VAR_1->displays[VAR_2].ramp_size;


 float *VAR_7 = FUNC_3(3*VAR_6*sizeof(float));
 if (VAR_7 == ((void*)0)) {
  FUNC_5("malloc");
  return;
 }

 float *VAR_8 = &VAR_7[0*VAR_6];
 float *VAR_9 = &VAR_7[1*VAR_6];
 float *VAR_10 = &VAR_7[2*VAR_6];

 if (VAR_4) {

  FUNC_4(VAR_7, VAR_1->displays[VAR_2].saved_ramps,
         3*VAR_6*sizeof(float));
 } else {

  for (int VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
   float VAR_12 = (double)VAR_11/VAR_6;
   VAR_8[VAR_11] = VAR_12;
   VAR_9[VAR_11] = VAR_12;
   VAR_10[VAR_11] = VAR_12;
  }
 }

 FUNC_1(VAR_8, VAR_9, VAR_10, VAR_6,
        VAR_3);

 CGError VAR_13 =
  FUNC_0(VAR_5, VAR_6,
         VAR_8, VAR_9, VAR_10);
 if (VAR_13 != VAR_0) {
  FUNC_2(VAR_7);
  return;
 }

 FUNC_2(VAR_7);
}
