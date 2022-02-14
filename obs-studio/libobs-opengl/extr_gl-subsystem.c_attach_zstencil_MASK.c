
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct fbo_info {TYPE_1__* cur_zstencil_buffer; } ;
struct TYPE_3__ {int attachment; int buffer; } ;
typedef TYPE_1__ gs_zstencil_t ;
typedef int GLuint ;
typedef int GLenum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static bool FUNC_2(struct fbo_info *VAR_3, gs_zstencil_t *VAR_4)
{
 GLuint VAR_5 = 0;
 GLenum VAR_6 = VAR_0;

 if (VAR_3->cur_zstencil_buffer == VAR_4)
  return 1;

 VAR_3->cur_zstencil_buffer = VAR_4;

 if (VAR_4) {
  VAR_5 = VAR_4->buffer;
  VAR_6 = VAR_4->attachment;
 }

 FUNC_0(VAR_1, VAR_6,
      VAR_2, VAR_5);
 if (!FUNC_1("glFramebufferRenderbuffer"))
  return 0;

 return 1;
}
