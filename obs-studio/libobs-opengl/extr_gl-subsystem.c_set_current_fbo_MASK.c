
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct fbo_info {int * cur_zstencil_buffer; int * cur_render_target; int fbo; } ;
struct TYPE_3__ {struct fbo_info* cur_fbo; } ;
typedef TYPE_1__ gs_device_t ;
typedef int GLuint ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static bool FUNC_1(gs_device_t *VAR_1, struct fbo_info *VAR_2)
{
 if (VAR_1->cur_fbo != VAR_2) {
  GLuint VAR_3 = VAR_2 ? VAR_2->fbo : 0;
  if (!FUNC_0(VAR_0, VAR_3))
   return 0;

  if (VAR_1->cur_fbo) {
   VAR_1->cur_fbo->cur_render_target = ((void*)0);
   VAR_1->cur_fbo->cur_zstencil_buffer = ((void*)0);
  }
 }

 VAR_1->cur_fbo = VAR_2;
 return 1;
}
