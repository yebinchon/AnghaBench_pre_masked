
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int type; } ;
struct TYPE_6__ {TYPE_1__ info; } ;
typedef TYPE_2__ obs_encoder_t ;
typedef enum obs_encoder_type { ____Placeholder_obs_encoder_type } obs_encoder_type ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__ const*,char*) ;

enum obs_encoder_type FUNC_1(const obs_encoder_t *VAR_1)
{
 return FUNC_0(VAR_1, "obs_encoder_get_type")
         ? VAR_1->info.type
         : VAR_0;
}
