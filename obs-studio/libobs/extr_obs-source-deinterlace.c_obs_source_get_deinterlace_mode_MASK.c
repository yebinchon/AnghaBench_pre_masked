
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int deinterlace_mode; } ;
typedef TYPE_1__ obs_source_t ;
typedef enum obs_deinterlace_mode { ____Placeholder_obs_deinterlace_mode } obs_deinterlace_mode ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__ const*,char*) ;

enum obs_deinterlace_mode
FUNC_1(const obs_source_t *VAR_1)
{
 return FUNC_0(VAR_1, "obs_source_set_deinterlace_mode")
         ? VAR_1->deinterlace_mode
         : VAR_0;
}
