
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shader_var {char* name; int type; int member_0; } ;
struct shader_func {int return_type; int mapping; } ;
struct gl_shader_parser {int gl_string; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct gl_shader_parser*,struct shader_var*,int *,int *,int) ;

__attribute__((used)) static inline void FUNC_2(struct gl_shader_parser *VAR_0,
       struct shader_func *VAR_1)
{


 if (!VAR_1->mapping) {
  struct shader_var VAR_2 = {0};
  VAR_2.name = "outputval";
  VAR_2.type = VAR_1->return_type;
  FUNC_0(&VAR_0->gl_string, "\n");
  FUNC_1(VAR_0, &VAR_2, ((void*)0), ((void*)0), 0);
 }
}
