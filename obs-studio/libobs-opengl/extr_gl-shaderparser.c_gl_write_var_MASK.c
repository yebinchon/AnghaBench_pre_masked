
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shader_var {scalar_t__ var_type; char* name; int type; } ;
struct gl_shader_parser {int gl_string; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct gl_shader_parser*,int ) ;

__attribute__((used)) static void FUNC_2(struct gl_shader_parser *VAR_4, struct shader_var *VAR_5)
{
 if (VAR_5->var_type == VAR_3)
  FUNC_0(&VAR_4->gl_string, "uniform ");
 else if (VAR_5->var_type == VAR_0)
  FUNC_0(&VAR_4->gl_string, "const ");
 else if (VAR_5->var_type == VAR_1)
  FUNC_0(&VAR_4->gl_string, "inout ");
 else if (VAR_5->var_type == VAR_2)
  FUNC_0(&VAR_4->gl_string, "out ");

 FUNC_1(VAR_4, VAR_5->type);
 FUNC_0(&VAR_4->gl_string, " ");
 FUNC_0(&VAR_4->gl_string, VAR_5->name);
}
