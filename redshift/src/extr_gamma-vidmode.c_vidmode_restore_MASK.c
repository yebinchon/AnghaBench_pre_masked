
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t ramp_size; int screen_num; int display; int * saved_ramps; } ;
typedef TYPE_1__ vidmode_state_t ;
typedef int uint16_t ;


 int FUNC_0 (int ,int ,int,int *,int *,int *) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(vidmode_state_t *VAR_1)
{
 uint16_t *VAR_2 = &VAR_1->saved_ramps[0*VAR_1->ramp_size];
 uint16_t *VAR_3 = &VAR_1->saved_ramps[1*VAR_1->ramp_size];
 uint16_t *VAR_4 = &VAR_1->saved_ramps[2*VAR_1->ramp_size];


 int VAR_5 = FUNC_0(VAR_1->display, VAR_1->screen_num,
     VAR_1->ramp_size, VAR_2, VAR_3,
     VAR_4);
 if (!VAR_5) {
  FUNC_2(VAR_0, FUNC_1("X request failed: %s\n"),
   "XF86VidModeSetGammaRamp");
 }
}
