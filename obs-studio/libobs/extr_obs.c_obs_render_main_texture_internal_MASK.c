
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct obs_core_video {int * render_texture; int texture_rendered; } ;
typedef int gs_texture_t ;
typedef int gs_eparam_t ;
typedef int gs_effect_t ;
typedef enum gs_blend_type { ____Placeholder_gs_blend_type } gs_blend_type ;
struct TYPE_2__ {struct obs_core_video video; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,int,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int * FUNC_4 (int *,char*) ;
 scalar_t__ FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int *) ;
 TYPE_1__* VAR_1 ;
 int * FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(enum gs_blend_type VAR_2,
          enum gs_blend_type VAR_3,
          enum gs_blend_type VAR_4,
          enum gs_blend_type VAR_5)
{
 struct obs_core_video *VAR_6;
 gs_texture_t *VAR_7;
 gs_effect_t *VAR_8;
 gs_eparam_t *VAR_9;

 if (!VAR_1)
  return;

 VAR_6 = &VAR_1->video;
 if (!VAR_6->texture_rendered)
  return;

 VAR_7 = VAR_6->render_texture;
 VAR_8 = FUNC_7(VAR_0);
 VAR_9 = FUNC_4(VAR_8, "image");
 FUNC_6(VAR_9, VAR_7);

 FUNC_2();
 FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);

 while (FUNC_5(VAR_8, "Draw"))
  FUNC_3(VAR_7, 0, 0, 0);

 FUNC_1();
}
