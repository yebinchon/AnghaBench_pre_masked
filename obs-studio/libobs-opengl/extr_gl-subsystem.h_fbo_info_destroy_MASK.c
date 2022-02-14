
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fbo_info {int fbo; } ;


 int FUNC_0 (struct fbo_info*) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static inline void FUNC_3(struct fbo_info *VAR_0)
{
 if (VAR_0) {
  FUNC_1(1, &VAR_0->fbo);
  FUNC_2("glDeleteFramebuffers");

  FUNC_0(VAR_0);
 }
}
