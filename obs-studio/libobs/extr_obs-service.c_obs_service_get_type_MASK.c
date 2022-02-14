
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* id; } ;
struct TYPE_6__ {TYPE_1__ info; } ;
typedef TYPE_2__ obs_service_t ;


 scalar_t__ FUNC_0 (TYPE_2__ const*,char*) ;

const char *FUNC_1(const obs_service_t *VAR_0)
{
 return FUNC_0(VAR_0, "obs_service_get_type")
         ? VAR_0->info.id
         : ((void*)0);
}
