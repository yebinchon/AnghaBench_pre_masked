
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct fbo_info {scalar_t__ width; scalar_t__ height; scalar_t__ format; int * cur_zstencil_buffer; scalar_t__ cur_render_side; int * cur_render_target; int fbo; } ;
struct TYPE_3__ {scalar_t__ format; struct fbo_info* fbo; } ;
typedef TYPE_1__ gs_texture_t ;
typedef int GLuint ;


 struct fbo_info* FUNC_0 (int) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (char*) ;

struct fbo_info *FUNC_3(gs_texture_t *VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{
 if (VAR_0->fbo && VAR_0->fbo->width == VAR_1 &&
     VAR_0->fbo->height == VAR_2 && VAR_0->fbo->format == VAR_0->format)
  return VAR_0->fbo;

 GLuint VAR_3;
 FUNC_1(1, &VAR_3);
 if (!FUNC_2("glGenFramebuffers"))
  return ((void*)0);

 VAR_0->fbo = FUNC_0(sizeof(struct fbo_info));
 VAR_0->fbo->fbo = VAR_3;
 VAR_0->fbo->width = VAR_1;
 VAR_0->fbo->height = VAR_2;
 VAR_0->fbo->format = VAR_0->format;
 VAR_0->fbo->cur_render_target = ((void*)0);
 VAR_0->fbo->cur_render_side = 0;
 VAR_0->fbo->cur_zstencil_buffer = ((void*)0);

 return VAR_0->fbo;
}
