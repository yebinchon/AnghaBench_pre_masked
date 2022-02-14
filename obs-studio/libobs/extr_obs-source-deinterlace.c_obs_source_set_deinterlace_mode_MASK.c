
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int deinterlace_mode; int deinterlace_effect; } ;
typedef TYPE_1__ obs_source_t ;
typedef enum obs_deinterlace_mode { ____Placeholder_obs_deinterlace_mode } obs_deinterlace_mode ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*,char*) ;

void FUNC_6(obs_source_t *VAR_1,
         enum obs_deinterlace_mode VAR_2)
{
 if (!FUNC_5(VAR_1, "obs_source_set_deinterlace_mode"))
  return;
 if (VAR_1->deinterlace_mode == VAR_2)
  return;

 if (VAR_1->deinterlace_mode == VAR_0) {
  FUNC_1(VAR_1, VAR_2);
 } else if (VAR_2 == VAR_0) {
  FUNC_0(VAR_1);
 } else {
  FUNC_3();
  VAR_1->deinterlace_mode = VAR_2;
  VAR_1->deinterlace_effect = FUNC_2(VAR_2);
  FUNC_4();
 }
}
