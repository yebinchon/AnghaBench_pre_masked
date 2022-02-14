
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int transition_alignment; } ;
typedef TYPE_1__ obs_source_t ;


 scalar_t__ FUNC_0 (TYPE_1__ const*,char*) ;

uint32_t FUNC_1(const obs_source_t *VAR_0)
{
 return FUNC_0(VAR_0, "obs_transition_get_alignment")
         ? VAR_0->transition_alignment
         : 0;
}
