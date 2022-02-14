
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct fbo_info {int dummy; } ;
typedef int gs_zstencil_t ;
typedef int gs_texture_t ;
struct TYPE_4__ {int cur_render_side; int * cur_zstencil_buffer; int * cur_render_target; } ;
typedef TYPE_1__ gs_device_t ;


 int FUNC_0 (struct fbo_info*,int *,int) ;
 int FUNC_1 (struct fbo_info*,int *) ;
 struct fbo_info* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,struct fbo_info*) ;

__attribute__((used)) static bool FUNC_4(gs_device_t *VAR_0, gs_texture_t *VAR_1, int VAR_2,
         gs_zstencil_t *VAR_3)
{
 struct fbo_info *VAR_4;

 if (VAR_0->cur_render_target == VAR_1 &&
     VAR_0->cur_zstencil_buffer == VAR_3 &&
     VAR_0->cur_render_side == VAR_2)
  return 1;

 VAR_0->cur_render_target = VAR_1;
 VAR_0->cur_render_side = VAR_2;
 VAR_0->cur_zstencil_buffer = VAR_3;

 if (!VAR_1)
  return FUNC_3(VAR_0, ((void*)0));

 VAR_4 = FUNC_2(VAR_1);
 if (!VAR_4)
  return 0;

 FUNC_3(VAR_0, VAR_4);

 if (!FUNC_0(VAR_4, VAR_1, VAR_2))
  return 0;
 if (!FUNC_1(VAR_4, VAR_3))
  return 0;

 return 1;
}
