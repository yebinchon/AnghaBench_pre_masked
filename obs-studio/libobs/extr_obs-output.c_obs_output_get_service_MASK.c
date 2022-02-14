
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int obs_service_t ;
struct TYPE_4__ {int * service; } ;
typedef TYPE_1__ obs_output_t ;


 scalar_t__ FUNC_0 (TYPE_1__ const*,char*) ;

obs_service_t *FUNC_1(const obs_output_t *VAR_0)
{
 return FUNC_0(VAR_0, "obs_output_get_service")
         ? VAR_0->service
         : ((void*)0);
}
