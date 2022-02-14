
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ramp_size; int screen_num; int display; int saved_ramps; } ;
typedef TYPE_1__ vidmode_state_t ;
typedef double uint16_t ;
typedef int color_setting_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,double,double*,double*,double*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (double*,double*,double*,double,int const*) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (double*) ;
 double* FUNC_5 (int) ;
 int FUNC_6 (double*,int ,int) ;
 int FUNC_7 (char*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_8(
 vidmode_state_t *VAR_2, const color_setting_t *VAR_3, int VAR_4)
{
 int VAR_5;


 uint16_t *VAR_6 = FUNC_5(3*VAR_2->ramp_size*sizeof(uint16_t));
 if (VAR_6 == ((void*)0)) {
  FUNC_7("malloc");
  return -1;
 }

 uint16_t *VAR_7 = &VAR_6[0*VAR_2->ramp_size];
 uint16_t *VAR_8 = &VAR_6[1*VAR_2->ramp_size];
 uint16_t *VAR_9 = &VAR_6[2*VAR_2->ramp_size];

 if (VAR_4) {

  FUNC_6(VAR_6, VAR_2->saved_ramps,
         3*VAR_2->ramp_size*sizeof(uint16_t));
 } else {

  for (int VAR_10 = 0; VAR_10 < VAR_2->ramp_size; VAR_10++) {
   uint16_t VAR_11 = (double)VAR_10/VAR_2->ramp_size *
    (VAR_0+1);
   VAR_7[VAR_10] = VAR_11;
   VAR_8[VAR_10] = VAR_11;
   VAR_9[VAR_10] = VAR_11;
  }
 }

 FUNC_2(VAR_7, VAR_8, VAR_9, VAR_2->ramp_size,
         VAR_3);


 VAR_5 = FUNC_0(VAR_2->display, VAR_2->screen_num,
        VAR_2->ramp_size, VAR_7, VAR_8,
        VAR_9);
 if (!VAR_5) {
  FUNC_3(VAR_1, FUNC_1("X request failed: %s\n"),
   "XF86VidModeSetGammaRamp");
  FUNC_4(VAR_6);
  return -1;
 }

 FUNC_4(VAR_6);

 return 0;
}
