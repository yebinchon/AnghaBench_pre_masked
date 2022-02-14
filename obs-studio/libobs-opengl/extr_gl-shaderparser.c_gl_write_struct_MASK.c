
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct shader_var {int dummy; } ;
struct TYPE_2__ {size_t num; struct shader_var* array; } ;
struct shader_struct {char* name; TYPE_1__ vars; } ;
struct gl_shader_parser {int gl_string; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct gl_shader_parser*,struct shader_var*) ;

__attribute__((used)) static void FUNC_2(struct gl_shader_parser *VAR_0,
       struct shader_struct *VAR_1)
{
 size_t VAR_2;
 FUNC_0(&VAR_0->gl_string, "struct ");
 FUNC_0(&VAR_0->gl_string, VAR_1->name);
 FUNC_0(&VAR_0->gl_string, " {\n");

 for (VAR_2 = 0; VAR_2 < VAR_1->vars.num; VAR_2++) {
  struct shader_var *VAR_3 = VAR_1->vars.array + VAR_2;

  FUNC_0(&VAR_0->gl_string, "\t");
  FUNC_1(VAR_0, VAR_3);
  FUNC_0(&VAR_0->gl_string, ";\n");
 }

 FUNC_0(&VAR_0->gl_string, "};\n\n");
}
