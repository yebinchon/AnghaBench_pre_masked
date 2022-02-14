
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLRENDERBUFFERSTORAGEEXTPROC ;
typedef scalar_t__ PFNGLISRENDERBUFFEREXTPROC ;
typedef scalar_t__ PFNGLISFRAMEBUFFEREXTPROC ;
typedef scalar_t__ PFNGLGETRENDERBUFFERPARAMETERIVEXTPROC ;
typedef scalar_t__ PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC ;
typedef scalar_t__ PFNGLGENRENDERBUFFERSEXTPROC ;
typedef scalar_t__ PFNGLGENFRAMEBUFFERSEXTPROC ;
typedef scalar_t__ PFNGLGENERATEMIPMAPEXTPROC ;
typedef scalar_t__ PFNGLFRAMEBUFFERTEXTURE3DEXTPROC ;
typedef scalar_t__ PFNGLFRAMEBUFFERTEXTURE2DEXTPROC ;
typedef scalar_t__ PFNGLFRAMEBUFFERTEXTURE1DEXTPROC ;
typedef scalar_t__ PFNGLFRAMEBUFFERRENDERBUFFEREXTPROC ;
typedef scalar_t__ PFNGLDELETERENDERBUFFERSEXTPROC ;
typedef scalar_t__ PFNGLDELETEFRAMEBUFFERSEXTPROC ;
typedef scalar_t__ PFNGLCHECKFRAMEBUFFERSTATUSEXTPROC ;
typedef scalar_t__ PFNGLBINDRENDERBUFFEREXTPROC ;
typedef scalar_t__ PFNGLBINDFRAMEBUFFEREXTPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_18) {
 if(!VAR_0) return;
 VAR_16 = (PFNGLISRENDERBUFFEREXTPROC)VAR_18("glIsRenderbufferEXT");
 VAR_2 = (PFNGLBINDRENDERBUFFEREXTPROC)VAR_18("glBindRenderbufferEXT");
 VAR_5 = (PFNGLDELETERENDERBUFFERSEXTPROC)VAR_18("glDeleteRenderbuffersEXT");
 VAR_11 = (PFNGLGENRENDERBUFFERSEXTPROC)VAR_18("glGenRenderbuffersEXT");
 VAR_17 = (PFNGLRENDERBUFFERSTORAGEEXTPROC)VAR_18("glRenderbufferStorageEXT");
 VAR_14 = (PFNGLGETRENDERBUFFERPARAMETERIVEXTPROC)VAR_18("glGetRenderbufferParameterivEXT");
 VAR_15 = (PFNGLISFRAMEBUFFEREXTPROC)VAR_18("glIsFramebufferEXT");
 VAR_1 = (PFNGLBINDFRAMEBUFFEREXTPROC)VAR_18("glBindFramebufferEXT");
 VAR_4 = (PFNGLDELETEFRAMEBUFFERSEXTPROC)VAR_18("glDeleteFramebuffersEXT");
 VAR_10 = (PFNGLGENFRAMEBUFFERSEXTPROC)VAR_18("glGenFramebuffersEXT");
 VAR_3 = (PFNGLCHECKFRAMEBUFFERSTATUSEXTPROC)VAR_18("glCheckFramebufferStatusEXT");
 VAR_7 = (PFNGLFRAMEBUFFERTEXTURE1DEXTPROC)VAR_18("glFramebufferTexture1DEXT");
 VAR_8 = (PFNGLFRAMEBUFFERTEXTURE2DEXTPROC)VAR_18("glFramebufferTexture2DEXT");
 VAR_9 = (PFNGLFRAMEBUFFERTEXTURE3DEXTPROC)VAR_18("glFramebufferTexture3DEXT");
 VAR_6 = (PFNGLFRAMEBUFFERRENDERBUFFEREXTPROC)VAR_18("glFramebufferRenderbufferEXT");
 VAR_13 = (PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC)VAR_18("glGetFramebufferAttachmentParameterivEXT");
 VAR_12 = (PFNGLGENERATEMIPMAPEXTPROC)VAR_18("glGenerateMipmapEXT");
}
