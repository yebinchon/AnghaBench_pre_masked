
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct gs_texture {int gl_target; int texture; } ;
struct fbo_info {int fbo; } ;
typedef int GLint ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct fbo_info* FUNC_0 (struct gs_texture*,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,scalar_t__,int ,int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static bool FUNC_8(struct gs_texture *VAR_3, uint32_t VAR_4, uint32_t VAR_5,
   struct gs_texture *VAR_6, uint32_t VAR_7, uint32_t VAR_8,
   uint32_t VAR_9, uint32_t VAR_10)
{
 struct fbo_info *VAR_11 = FUNC_0(VAR_6, VAR_9, VAR_10);
 GLint VAR_12;
 bool VAR_13 = 0;

 if (!VAR_11)
  return 0;

 if (!FUNC_6(VAR_2, &VAR_12))
  return 0;
 if (!FUNC_4(VAR_1, VAR_11->fbo))
  return 0;
 if (!FUNC_5(VAR_3->gl_target, VAR_3->texture))
  goto fail;

 FUNC_2(VAR_1, VAR_0 + 0,
          VAR_6->gl_target, VAR_6->texture, 0);
 if (!FUNC_7("glFrameBufferTexture2D"))
  goto fail;

 FUNC_3(VAR_0 + 0);
 if (!FUNC_7("glReadBuffer"))
  goto fail;

 FUNC_1(VAR_3->gl_target, 0, VAR_4, VAR_5, VAR_7, VAR_8,
       VAR_9, VAR_10);
 if (!FUNC_7("glCopyTexSubImage2D"))
  goto fail;

 VAR_13 = 1;

fail:
 if (!FUNC_5(VAR_3->gl_target, 0))
  VAR_13 = 0;
 if (!FUNC_4(VAR_1, VAR_12))
  VAR_13 = 0;

 return VAR_13;
}
