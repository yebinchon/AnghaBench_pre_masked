
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int deinterlace_top_first; } ;
typedef TYPE_1__ obs_source_t ;
typedef enum obs_deinterlace_field_order { ____Placeholder_obs_deinterlace_field_order } obs_deinterlace_field_order ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;

void FUNC_1(
 obs_source_t *VAR_1, enum obs_deinterlace_field_order VAR_2)
{
 if (!FUNC_0(VAR_1, "obs_source_set_deinterlace_field_order"))
  return;

 VAR_1->deinterlace_top_first = VAR_2 ==
     VAR_0;
}
