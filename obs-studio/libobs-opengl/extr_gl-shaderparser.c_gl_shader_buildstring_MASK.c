
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shader_func {int dummy; } ;
struct gl_shader_parser {int gl_string; int parser; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct gl_shader_parser*) ;
 int FUNC_4 (struct gl_shader_parser*) ;
 int FUNC_5 (struct gl_shader_parser*,struct shader_func*) ;
 int FUNC_6 (struct gl_shader_parser*) ;
 int FUNC_7 (struct gl_shader_parser*,struct shader_func*) ;
 int FUNC_8 (struct gl_shader_parser*,struct shader_func*) ;
 int FUNC_9 (struct gl_shader_parser*) ;
 int FUNC_10 (struct gl_shader_parser*) ;
 struct shader_func* FUNC_11 (int *,char*) ;

__attribute__((used)) static bool FUNC_12(struct gl_shader_parser *VAR_1)
{
 struct shader_func *VAR_2;

 VAR_2 = FUNC_11(&VAR_1->parser, "main");
 if (!VAR_2) {
  FUNC_0(VAR_0, "function 'main' not found");
  return 0;
 }

 FUNC_2(&VAR_1->gl_string, "#version 330\n\n");
 FUNC_1(&VAR_1->gl_string, "const bool obs_glsl_compile = true;\n\n");
 FUNC_9(VAR_1);
 FUNC_5(VAR_1, VAR_2);
 FUNC_8(VAR_1, VAR_2);
 FUNC_6(VAR_1);
 FUNC_10(VAR_1);
 FUNC_4(VAR_1);
 FUNC_7(VAR_1, VAR_2);
 FUNC_3(VAR_1);

 return 1;
}
