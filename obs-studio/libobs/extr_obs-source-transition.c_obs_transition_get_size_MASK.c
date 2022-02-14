
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ transition_cy; scalar_t__ transition_cx; } ;
typedef TYPE_1__ obs_source_t ;


 int FUNC_0 (TYPE_1__ const*,char*) ;

void FUNC_1(const obs_source_t *VAR_0, uint32_t *VAR_1,
        uint32_t *VAR_2)
{
 if (!FUNC_0(VAR_0, "obs_transition_set_size")) {
  *VAR_1 = 0;
  *VAR_2 = 0;
  return;
 }

 *VAR_1 = VAR_0->transition_cx;
 *VAR_2 = VAR_0->transition_cy;
}
