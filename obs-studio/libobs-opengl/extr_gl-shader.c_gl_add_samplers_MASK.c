
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct shader_sampler {int dummy; } ;
struct gs_shader {int dummy; } ;
struct TYPE_3__ {size_t num; struct shader_sampler* array; } ;
struct TYPE_4__ {TYPE_1__ samplers; } ;
struct gl_shader_parser {TYPE_2__ parser; } ;


 int FUNC_0 (struct gs_shader*,struct shader_sampler*) ;

__attribute__((used)) static inline void FUNC_1(struct gs_shader *VAR_0,
       struct gl_shader_parser *VAR_1)
{
 size_t VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_1->parser.samplers.num; VAR_2++) {
  struct shader_sampler *VAR_3 =
   VAR_1->parser.samplers.array + VAR_2;
  FUNC_0(VAR_0, VAR_3);
 }
}
