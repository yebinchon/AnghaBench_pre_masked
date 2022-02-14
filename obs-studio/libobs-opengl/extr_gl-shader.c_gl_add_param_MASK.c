
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shader_var {int default_val; int gl_sampler_id; int type; int name; int array_count; } ;
struct gs_shader_param {scalar_t__ type; int changed; int def_value; int cur_value; scalar_t__ texture_id; int sampler_id; struct gs_shader* shader; int name; int array_count; int member_0; } ;
struct gs_shader {int params; } ;
typedef int GLint ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,struct gs_shader_param*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static bool FUNC_5(struct gs_shader *VAR_1, struct shader_var *VAR_2,
    GLint *VAR_3)
{
 struct gs_shader_param VAR_4 = {0};

 VAR_4.array_count = VAR_2->array_count;
 VAR_4.name = FUNC_0(VAR_2->name);
 VAR_4.shader = VAR_1;
 VAR_4.type = FUNC_4(VAR_2->type);

 if (VAR_4.type == VAR_0) {
  VAR_4.sampler_id = VAR_2->gl_sampler_id;
  VAR_4.texture_id = (*VAR_3)++;
 } else {
  VAR_4.changed = 1;
 }

 FUNC_2(VAR_4.def_value, VAR_2->default_val);
 FUNC_1(VAR_4.cur_value, VAR_4.def_value);

 FUNC_3(VAR_1->params, &VAR_4);
 return 1;
}
