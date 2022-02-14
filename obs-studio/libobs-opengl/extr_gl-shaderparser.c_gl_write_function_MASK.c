
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct shader_var {int dummy; } ;
struct TYPE_2__ {size_t num; struct shader_var* array; } ;
struct shader_func {char* name; struct cf_token* start; TYPE_1__ params; int return_type; } ;
struct gl_shader_parser {int gl_string; } ;
struct cf_token {int dummy; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct gl_shader_parser*,struct cf_token**,char*) ;
 int FUNC_2 (struct gl_shader_parser*,int ) ;
 int FUNC_3 (struct gl_shader_parser*,struct shader_var*) ;
 scalar_t__ FUNC_4 (char*,char*) ;

__attribute__((used)) static void FUNC_5(struct gl_shader_parser *VAR_0,
         struct shader_func *VAR_1)
{
 size_t VAR_2;
 struct cf_token *VAR_3;

 FUNC_2(VAR_0, VAR_1->return_type);
 FUNC_0(&VAR_0->gl_string, " ");

 if (FUNC_4(VAR_1->name, "main") == 0)
  FUNC_0(&VAR_0->gl_string, "_main_wrap");
 else
  FUNC_0(&VAR_0->gl_string, VAR_1->name);

 FUNC_0(&VAR_0->gl_string, "(");

 for (VAR_2 = 0; VAR_2 < VAR_1->params.num; VAR_2++) {
  struct shader_var *VAR_4 = VAR_1->params.array + VAR_2;

  if (VAR_2 > 0)
   FUNC_0(&VAR_0->gl_string, ", ");
  FUNC_3(VAR_0, VAR_4);
 }

 FUNC_0(&VAR_0->gl_string, ")\n");

 VAR_3 = VAR_1->start;
 FUNC_1(VAR_0, &VAR_3, "}");
 FUNC_0(&VAR_0->gl_string, "}\n\n");
}
