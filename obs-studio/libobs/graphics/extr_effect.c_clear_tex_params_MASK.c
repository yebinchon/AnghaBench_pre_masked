
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pass_shaderparam {int sparam; } ;
struct gs_shader_param_info {scalar_t__ type; } ;
struct darray {size_t num; struct pass_shaderparam* array; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,struct gs_shader_param_info*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static inline void FUNC_2(struct darray *VAR_1)
{
 struct pass_shaderparam *VAR_2 = VAR_1->array;

 for (size_t VAR_3 = 0; VAR_3 < VAR_1->num; VAR_3++) {
  struct pass_shaderparam *VAR_4 = VAR_2 + VAR_3;
  struct gs_shader_param_info VAR_5;

  FUNC_0(VAR_4->sparam, &VAR_5);
  if (VAR_5.type == VAR_0)
   FUNC_1(VAR_4->sparam, ((void*)0));
 }
}
