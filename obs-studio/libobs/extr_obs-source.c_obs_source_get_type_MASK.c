
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int type; } ;
struct TYPE_6__ {TYPE_1__ info; } ;
typedef TYPE_2__ obs_source_t ;
typedef enum obs_source_type { ____Placeholder_obs_source_type } obs_source_type ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__ const*,char*) ;

enum obs_source_type FUNC_1(const obs_source_t *VAR_1)
{
 return FUNC_0(VAR_1, "obs_source_get_type")
         ? VAR_1->info.type
         : VAR_0;
}
