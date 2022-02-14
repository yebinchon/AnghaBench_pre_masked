
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fade_to_color_info {float switch_point; int effect; int color; int ep_color; int ep_swp; int ep_tex; } ;
typedef int gs_texture_t ;


 int FUNC_0 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,float) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 float FUNC_5 (float,float,float) ;

__attribute__((used)) static void FUNC_6(void *VAR_0, gs_texture_t *VAR_1, gs_texture_t *VAR_2,
       float VAR_3, uint32_t VAR_4, uint32_t VAR_5)
{
 struct fade_to_color_info *VAR_6 = VAR_0;

 float VAR_7 = FUNC_5(0.0f, VAR_6->switch_point, VAR_3);
 float VAR_8 = FUNC_5(VAR_6->switch_point, 1.0f, VAR_3);

 float VAR_9 = VAR_3 < VAR_6->switch_point ? VAR_7 : 1.0f - VAR_8;

 FUNC_3(VAR_6->ep_tex,
         VAR_3 < VAR_6->switch_point ? VAR_1 : VAR_2);
 FUNC_2(VAR_6->ep_swp, VAR_9);
 FUNC_4(VAR_6->ep_color, &VAR_6->color);

 while (FUNC_1(VAR_6->effect, "FadeToColor"))
  FUNC_0(((void*)0), 0, VAR_4, VAR_5);
}
