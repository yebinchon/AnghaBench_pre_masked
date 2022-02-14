
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shader_func {int dummy; } ;
struct gl_shader_parser {int gl_string; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct gl_shader_parser*,struct shader_func*) ;
 int FUNC_2 (struct gl_shader_parser*,struct shader_func*) ;
 int FUNC_3 (struct gl_shader_parser*,struct shader_func*) ;
 int FUNC_4 (struct gl_shader_parser*,struct shader_func*) ;

__attribute__((used)) static void FUNC_5(struct gl_shader_parser *VAR_0,
     struct shader_func *VAR_1)
{
 FUNC_0(&VAR_0->gl_string, "void main(void)\n{\n");

 FUNC_4(VAR_0, VAR_1);
 FUNC_2(VAR_0, VAR_1);
 FUNC_1(VAR_0, VAR_1);
 FUNC_3(VAR_0, VAR_1);

 FUNC_0(&VAR_0->gl_string, "}\n");
}
