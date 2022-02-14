
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gl_shader_parser {scalar_t__ type; int gl_string; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*) ;

__attribute__((used)) static void FUNC_1(struct gl_shader_parser *VAR_1)
{
 if (VAR_1->type == VAR_0) {
  FUNC_0(&VAR_1->gl_string, "out gl_PerVertex {\n"
        "\tvec4 gl_Position;\n};\n\n");
 }
}
