
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vec2 {int dummy; } ;
struct slide_info {int effect; int tex_b_dir_param; int tex_a_dir_param; int b_param; int a_param; struct vec2 dir; } ;
typedef int gs_texture_t ;


 float FUNC_0 (float) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,struct vec2*) ;
 int FUNC_5 (struct vec2*,struct vec2*,float) ;

__attribute__((used)) static void FUNC_6(void *VAR_0, gs_texture_t *VAR_1, gs_texture_t *VAR_2,
      float VAR_3, uint32_t VAR_4, uint32_t VAR_5)
{
 struct slide_info *VAR_6 = VAR_0;

 struct vec2 VAR_7 = VAR_6->dir;
 struct vec2 VAR_8 = VAR_6->dir;

 VAR_3 = FUNC_0(VAR_3);

 FUNC_5(&VAR_7, &VAR_7, VAR_3);
 FUNC_5(&VAR_8, &VAR_8, 1.0f - VAR_3);

 FUNC_3(VAR_6->a_param, VAR_1);
 FUNC_3(VAR_6->b_param, VAR_2);

 FUNC_4(VAR_6->tex_a_dir_param, &VAR_7);
 FUNC_4(VAR_6->tex_b_dir_param, &VAR_8);

 while (FUNC_2(VAR_6->effect, "Slide"))
  FUNC_1(((void*)0), 0, VAR_4, VAR_5);
}
