
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct shader_var {int dummy; } ;
struct TYPE_3__ {size_t num; struct shader_var* array; } ;
struct TYPE_4__ {TYPE_1__ params; } ;
struct gl_shader_parser {int gl_string; TYPE_2__ parser; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct gl_shader_parser*,struct shader_var*) ;

__attribute__((used)) static inline void FUNC_2(struct gl_shader_parser *VAR_0)
{
 size_t VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->parser.params.num; VAR_1++) {
  struct shader_var *VAR_2 = VAR_0->parser.params.array + VAR_1;
  FUNC_1(VAR_0, VAR_2);
  FUNC_0(&VAR_0->gl_string, ";\n");
 }

 FUNC_0(&VAR_0->gl_string, "\n");
}
