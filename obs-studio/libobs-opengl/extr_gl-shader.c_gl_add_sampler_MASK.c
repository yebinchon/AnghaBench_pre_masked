
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shader_sampler {int dummy; } ;
struct gs_shader {int samplers; int device; } ;
struct gs_sampler_info {int dummy; } ;
typedef int gs_samplerstate_t ;


 int FUNC_0 (int ,int **) ;
 int * FUNC_1 (int ,struct gs_sampler_info*) ;
 int FUNC_2 (struct shader_sampler*,struct gs_sampler_info*) ;

__attribute__((used)) static inline void FUNC_3(struct gs_shader *VAR_0,
      struct shader_sampler *VAR_1)
{
 gs_samplerstate_t *VAR_2;
 struct gs_sampler_info VAR_3;

 FUNC_2(VAR_1, &VAR_3);
 VAR_2 = FUNC_1(VAR_0->device, &VAR_3);

 FUNC_0(VAR_0->samplers, &VAR_2);
}
