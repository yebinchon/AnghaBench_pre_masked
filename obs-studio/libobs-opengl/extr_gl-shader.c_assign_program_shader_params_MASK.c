
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gs_shader_param {int dummy; } ;
struct TYPE_2__ {size_t num; struct gs_shader_param* array; } ;
struct gs_shader {TYPE_1__ params; } ;
struct gs_program {int dummy; } ;


 int FUNC_0 (struct gs_program*,struct gs_shader_param*) ;

__attribute__((used)) static inline bool FUNC_1(struct gs_program *VAR_0,
      struct gs_shader *VAR_1)
{
 for (size_t VAR_2 = 0; VAR_2 < VAR_1->params.num; VAR_2++) {
  struct gs_shader_param *VAR_3 = VAR_1->params.array + VAR_2;
  if (!FUNC_0(VAR_0, VAR_3))
   return 0;
 }

 return 1;
}
