
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct shader_func {int dummy; } ;
struct TYPE_3__ {size_t num; struct shader_func* array; } ;
struct TYPE_4__ {TYPE_1__ funcs; } ;
struct gl_shader_parser {TYPE_2__ parser; } ;


 int FUNC_0 (struct gl_shader_parser*,struct shader_func*) ;

__attribute__((used)) static inline void FUNC_1(struct gl_shader_parser *VAR_0)
{
 size_t VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->parser.funcs.num; VAR_1++) {
  struct shader_func *VAR_2 = VAR_0->parser.funcs.array + VAR_1;
  FUNC_0(VAR_0, VAR_2);
 }
}
