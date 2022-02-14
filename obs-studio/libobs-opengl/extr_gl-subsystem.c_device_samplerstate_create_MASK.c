
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gs_sampler_state {int ref; int * device; } ;
struct gs_sampler_info {int dummy; } ;
typedef struct gs_sampler_state gs_samplerstate_t ;
typedef int gs_device_t ;


 struct gs_sampler_state* FUNC_0 (int) ;
 int FUNC_1 (struct gs_sampler_state*,struct gs_sampler_info const*) ;

gs_samplerstate_t *
FUNC_2(gs_device_t *VAR_0,
      const struct gs_sampler_info *VAR_1)
{
 struct gs_sampler_state *VAR_2;

 VAR_2 = FUNC_0(sizeof(struct gs_sampler_state));
 VAR_2->device = VAR_0;
 VAR_2->ref = 1;

 FUNC_1(VAR_2, VAR_1);
 return VAR_2;
}
