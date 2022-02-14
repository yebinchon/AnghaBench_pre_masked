
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* filter_target; } ;
typedef TYPE_1__ obs_source_t ;


 scalar_t__ FUNC_0 (TYPE_1__ const*,char*) ;

obs_source_t *FUNC_1(const obs_source_t *VAR_0)
{
 return FUNC_0(VAR_0, "obs_filter_get_target")
         ? VAR_0->filter_target
         : ((void*)0);
}
