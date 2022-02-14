
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct program_param {int obj; struct gs_shader_param* param; } ;
struct gs_shader_param {int name; } ;
struct gs_program {int params; int obj; } ;


 int FUNC_0 (int ,struct program_param*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static bool FUNC_3(struct gs_program *VAR_0,
     struct gs_shader_param *VAR_1)
{
 struct program_param VAR_2;

 VAR_2.obj = FUNC_1(VAR_0->obj, VAR_1->name);
 if (!FUNC_2("glGetUniformLocation"))
  return 0;

 if (VAR_2.obj == -1) {
  return 1;
 }

 VAR_2.param = VAR_1;
 FUNC_0(VAR_0->params, &VAR_2);
 return 1;
}
