
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLRENDERBUFFERSTORAGEPROC ;
typedef scalar_t__ PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC ;
typedef scalar_t__ PFNGLISRENDERBUFFERPROC ;
typedef scalar_t__ PFNGLISFRAMEBUFFERPROC ;
typedef scalar_t__ PFNGLGETRENDERBUFFERPARAMETERIVPROC ;
typedef scalar_t__ PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC ;
typedef scalar_t__ PFNGLGENRENDERBUFFERSPROC ;
typedef scalar_t__ PFNGLGENFRAMEBUFFERSPROC ;
typedef scalar_t__ PFNGLGENERATEMIPMAPPROC ;
typedef scalar_t__ PFNGLFRAMEBUFFERTEXTURELAYERPROC ;
typedef scalar_t__ PFNGLFRAMEBUFFERTEXTURE3DPROC ;
typedef scalar_t__ PFNGLFRAMEBUFFERTEXTURE2DPROC ;
typedef scalar_t__ PFNGLFRAMEBUFFERTEXTURE1DPROC ;
typedef scalar_t__ PFNGLFRAMEBUFFERRENDERBUFFERPROC ;
typedef scalar_t__ PFNGLDELETERENDERBUFFERSPROC ;
typedef scalar_t__ PFNGLDELETEFRAMEBUFFERSPROC ;
typedef scalar_t__ PFNGLCHECKFRAMEBUFFERSTATUSPROC ;
typedef scalar_t__ PFNGLBLITFRAMEBUFFERPROC ;
typedef scalar_t__ PFNGLBINDRENDERBUFFERPROC ;
typedef scalar_t__ PFNGLBINDFRAMEBUFFERPROC ;
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
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_21) {
 if(!VAR_0) return;
 VAR_18 = (PFNGLISRENDERBUFFERPROC)VAR_21("glIsRenderbuffer");
 VAR_2 = (PFNGLBINDRENDERBUFFERPROC)VAR_21("glBindRenderbuffer");
 VAR_6 = (PFNGLDELETERENDERBUFFERSPROC)VAR_21("glDeleteRenderbuffers");
 VAR_13 = (PFNGLGENRENDERBUFFERSPROC)VAR_21("glGenRenderbuffers");
 VAR_19 = (PFNGLRENDERBUFFERSTORAGEPROC)VAR_21("glRenderbufferStorage");
 VAR_16 = (PFNGLGETRENDERBUFFERPARAMETERIVPROC)VAR_21("glGetRenderbufferParameteriv");
 VAR_17 = (PFNGLISFRAMEBUFFERPROC)VAR_21("glIsFramebuffer");
 VAR_1 = (PFNGLBINDFRAMEBUFFERPROC)VAR_21("glBindFramebuffer");
 VAR_5 = (PFNGLDELETEFRAMEBUFFERSPROC)VAR_21("glDeleteFramebuffers");
 VAR_12 = (PFNGLGENFRAMEBUFFERSPROC)VAR_21("glGenFramebuffers");
 VAR_4 = (PFNGLCHECKFRAMEBUFFERSTATUSPROC)VAR_21("glCheckFramebufferStatus");
 VAR_8 = (PFNGLFRAMEBUFFERTEXTURE1DPROC)VAR_21("glFramebufferTexture1D");
 VAR_9 = (PFNGLFRAMEBUFFERTEXTURE2DPROC)VAR_21("glFramebufferTexture2D");
 VAR_10 = (PFNGLFRAMEBUFFERTEXTURE3DPROC)VAR_21("glFramebufferTexture3D");
 VAR_7 = (PFNGLFRAMEBUFFERRENDERBUFFERPROC)VAR_21("glFramebufferRenderbuffer");
 VAR_15 = (PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC)VAR_21("glGetFramebufferAttachmentParameteriv");
 VAR_14 = (PFNGLGENERATEMIPMAPPROC)VAR_21("glGenerateMipmap");
 VAR_3 = (PFNGLBLITFRAMEBUFFERPROC)VAR_21("glBlitFramebuffer");
 VAR_20 = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC)VAR_21("glRenderbufferStorageMultisample");
 VAR_11 = (PFNGLFRAMEBUFFERTEXTURELAYERPROC)VAR_21("glFramebufferTextureLayer");
}
