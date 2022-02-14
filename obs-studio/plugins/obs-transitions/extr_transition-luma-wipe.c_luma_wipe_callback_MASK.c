
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int * texture; } ;
struct luma_wipe_info {float softness; int effect; int ep_softness; int invert_luma; int ep_invert; int ep_progress; TYPE_1__ luma_image; int ep_l_tex; int ep_b_tex; int ep_a_tex; } ;
typedef int gs_texture_t ;


 int FUNC_0 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,float) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(void *VAR_0, gs_texture_t *VAR_1, gs_texture_t *VAR_2,
          float VAR_3, uint32_t VAR_4, uint32_t VAR_5)
{
 struct luma_wipe_info *VAR_6 = VAR_0;

 FUNC_4(VAR_6->ep_a_tex, VAR_1);
 FUNC_4(VAR_6->ep_b_tex, VAR_2);
 FUNC_4(VAR_6->ep_l_tex, VAR_6->luma_image.texture);
 FUNC_3(VAR_6->ep_progress, VAR_3);

 FUNC_2(VAR_6->ep_invert, VAR_6->invert_luma);
 FUNC_3(VAR_6->ep_softness, VAR_6->softness);

 while (FUNC_1(VAR_6->effect, "LumaWipe"))
  FUNC_0(((void*)0), 0, VAR_4, VAR_5);
}
