
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int output_flags; } ;
struct TYPE_6__ {TYPE_1__ info; } ;
typedef TYPE_2__ obs_source_t ;


 scalar_t__ FUNC_0 (TYPE_2__ const*,char*) ;

uint32_t FUNC_1(const obs_source_t *VAR_0)
{
 return FUNC_0(VAR_0, "obs_source_get_output_flags")
         ? VAR_0->info.output_flags
         : 0;
}
