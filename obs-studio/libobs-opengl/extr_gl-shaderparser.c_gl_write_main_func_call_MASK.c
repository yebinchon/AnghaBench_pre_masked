
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t num; TYPE_1__* array; } ;
struct shader_func {TYPE_2__ params; } ;
struct gl_shader_parser {int gl_string; } ;
struct TYPE_3__ {char* name; } ;


 int FUNC_0 (int *,char*) ;

__attribute__((used)) static inline void FUNC_1(struct gl_shader_parser *VAR_0,
        struct shader_func *VAR_1)
{
 size_t VAR_2;
 FUNC_0(&VAR_0->gl_string, "\n\toutputval = _main_wrap(");

 for (VAR_2 = 0; VAR_2 < VAR_1->params.num; VAR_2++) {
  if (VAR_2)
   FUNC_0(&VAR_0->gl_string, ", ");
  FUNC_0(&VAR_0->gl_string, VAR_1->params.array[VAR_2].name);
 }

 FUNC_0(&VAR_0->gl_string, ");\n");
}
