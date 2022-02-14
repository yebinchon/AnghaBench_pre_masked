
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct obs_core_video {int * graphics; int * default_effect; int * bilinear_lowres_effect; int * area_effect; int * lanczos_effect; int * repeat_effect; int * bicubic_effect; int * conversion_effect; int * solid_effect; int * opaque_effect; int * default_rect_effect; int point_sampler; int transparent_texture; } ;
struct TYPE_2__ {struct obs_core_video video; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_6(void)
{
 struct obs_core_video *VAR_1 = &VAR_0->video;

 if (VAR_1->graphics) {
  FUNC_2(VAR_1->graphics);

  FUNC_5(VAR_1->transparent_texture);

  FUNC_4(VAR_1->point_sampler);

  FUNC_1(VAR_1->default_effect);
  FUNC_1(VAR_1->default_rect_effect);
  FUNC_1(VAR_1->opaque_effect);
  FUNC_1(VAR_1->solid_effect);
  FUNC_1(VAR_1->conversion_effect);
  FUNC_1(VAR_1->bicubic_effect);
  FUNC_1(VAR_1->repeat_effect);
  FUNC_1(VAR_1->lanczos_effect);
  FUNC_1(VAR_1->area_effect);
  FUNC_1(VAR_1->bilinear_lowres_effect);
  VAR_1->default_effect = ((void*)0);

  FUNC_3();

  FUNC_0(VAR_1->graphics);
  VAR_1->graphics = ((void*)0);
 }
}
