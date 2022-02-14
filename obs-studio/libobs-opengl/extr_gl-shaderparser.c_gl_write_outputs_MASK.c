
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shader_var {char* name; scalar_t__ mapping; int type; int member_0; } ;
struct shader_func {scalar_t__ mapping; int return_type; } ;
struct gl_shader_parser {int gl_string; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct gl_shader_parser*,struct shader_var*,int,int *) ;

__attribute__((used)) static void FUNC_2(struct gl_shader_parser *VAR_0,
        struct shader_func *VAR_1)
{
 struct shader_var VAR_2 = {0};
 VAR_2.type = VAR_1->return_type;
 VAR_2.name = "outputval";
 if (VAR_1->mapping)
  VAR_2.mapping = VAR_1->mapping;

 FUNC_1(VAR_0, &VAR_2, 0, ((void*)0));
 FUNC_0(&VAR_0->gl_string, "\n");
}
