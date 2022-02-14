
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct obs_core_video {int * default_effect; int * bicubic_effect; } ;
typedef int gs_effect_t ;


 int * FUNC_0 (struct obs_core_video*) ;
 scalar_t__ FUNC_1 (struct obs_core_video*,int ,int ) ;

__attribute__((used)) static inline gs_effect_t *FUNC_2(struct obs_core_video *VAR_0,
         uint32_t VAR_1, uint32_t VAR_2)
{
 if (FUNC_1(VAR_0, VAR_1, VAR_2)) {
  return VAR_0->default_effect;
 } else {


  gs_effect_t *VAR_3 = FUNC_0(VAR_0);
  if (!VAR_3)
   VAR_3 = !!VAR_0->bicubic_effect
      ? VAR_0->bicubic_effect
      : VAR_0->default_effect;
  return VAR_3;
 }
}
