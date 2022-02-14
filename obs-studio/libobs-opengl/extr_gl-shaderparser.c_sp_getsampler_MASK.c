
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct shader_sampler {int name; } ;
struct TYPE_3__ {size_t num; struct shader_sampler* array; } ;
struct TYPE_4__ {TYPE_1__ samplers; } ;
struct gl_shader_parser {TYPE_2__ parser; } ;
struct cf_token {int str; } ;


 scalar_t__ FUNC_0 (int *,int ) ;

__attribute__((used)) static inline size_t FUNC_1(struct gl_shader_parser *VAR_0,
       struct cf_token *VAR_1)
{
 size_t VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_0->parser.samplers.num; VAR_2++) {
  struct shader_sampler *VAR_3 =
   VAR_0->parser.samplers.array + VAR_2;
  if (FUNC_0(&VAR_1->str, VAR_3->name) == 0)
   return VAR_2;
 }

 return -1;
}
