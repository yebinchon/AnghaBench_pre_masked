
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t num; struct gs_sampler_state** array; } ;
struct gs_shader {TYPE_1__ samplers; } ;
struct gs_sampler_state {int dummy; } ;
struct gs_device {struct gs_sampler_state** cur_samplers; } ;


 size_t VAR_0 ;

__attribute__((used)) static void FUNC_0(struct gs_device *VAR_1,
           struct gs_shader *VAR_2)
{
 size_t VAR_3;
 if (!VAR_2)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_2->samplers.num; VAR_3++) {
  struct gs_sampler_state *VAR_4 = VAR_2->samplers.array[VAR_3];
  VAR_1->cur_samplers[VAR_3] = VAR_4;
 }

 for (; VAR_3 < VAR_0; VAR_3++)
  VAR_1->cur_samplers[VAR_3] = ((void*)0);
}
