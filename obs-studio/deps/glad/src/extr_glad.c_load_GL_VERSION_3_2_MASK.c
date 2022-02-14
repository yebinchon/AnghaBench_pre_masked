
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLWAITSYNCPROC ;
typedef scalar_t__ PFNGLTEXIMAGE3DMULTISAMPLEPROC ;
typedef scalar_t__ PFNGLTEXIMAGE2DMULTISAMPLEPROC ;
typedef scalar_t__ PFNGLSAMPLEMASKIPROC ;
typedef scalar_t__ PFNGLPROVOKINGVERTEXPROC ;
typedef scalar_t__ PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC ;
typedef scalar_t__ PFNGLISSYNCPROC ;
typedef scalar_t__ PFNGLGETSYNCIVPROC ;
typedef scalar_t__ PFNGLGETMULTISAMPLEFVPROC ;
typedef scalar_t__ PFNGLGETINTEGER64VPROC ;
typedef scalar_t__ PFNGLGETINTEGER64I_VPROC ;
typedef scalar_t__ PFNGLGETBUFFERPARAMETERI64VPROC ;
typedef scalar_t__ PFNGLFRAMEBUFFERTEXTUREPROC ;
typedef scalar_t__ PFNGLFENCESYNCPROC ;
typedef scalar_t__ PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC ;
typedef scalar_t__ PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC ;
typedef scalar_t__ PFNGLDRAWELEMENTSBASEVERTEXPROC ;
typedef scalar_t__ PFNGLDELETESYNCPROC ;
typedef scalar_t__ PFNGLCLIENTWAITSYNCPROC ;
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

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_20) {
 if(!VAR_0) return;
 VAR_3 = (PFNGLDRAWELEMENTSBASEVERTEXPROC)VAR_20("glDrawElementsBaseVertex");
 VAR_5 = (PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC)VAR_20("glDrawRangeElementsBaseVertex");
 VAR_4 = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC)VAR_20("glDrawElementsInstancedBaseVertex");
 VAR_14 = (PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC)VAR_20("glMultiDrawElementsBaseVertex");
 VAR_15 = (PFNGLPROVOKINGVERTEXPROC)VAR_20("glProvokingVertex");
 VAR_6 = (PFNGLFENCESYNCPROC)VAR_20("glFenceSync");
 VAR_13 = (PFNGLISSYNCPROC)VAR_20("glIsSync");
 VAR_2 = (PFNGLDELETESYNCPROC)VAR_20("glDeleteSync");
 VAR_1 = (PFNGLCLIENTWAITSYNCPROC)VAR_20("glClientWaitSync");
 VAR_19 = (PFNGLWAITSYNCPROC)VAR_20("glWaitSync");
 VAR_10 = (PFNGLGETINTEGER64VPROC)VAR_20("glGetInteger64v");
 VAR_12 = (PFNGLGETSYNCIVPROC)VAR_20("glGetSynciv");
 VAR_9 = (PFNGLGETINTEGER64I_VPROC)VAR_20("glGetInteger64i_v");
 VAR_8 = (PFNGLGETBUFFERPARAMETERI64VPROC)VAR_20("glGetBufferParameteri64v");
 VAR_7 = (PFNGLFRAMEBUFFERTEXTUREPROC)VAR_20("glFramebufferTexture");
 VAR_17 = (PFNGLTEXIMAGE2DMULTISAMPLEPROC)VAR_20("glTexImage2DMultisample");
 VAR_18 = (PFNGLTEXIMAGE3DMULTISAMPLEPROC)VAR_20("glTexImage3DMultisample");
 VAR_11 = (PFNGLGETMULTISAMPLEFVPROC)VAR_20("glGetMultisamplefv");
 VAR_16 = (PFNGLSAMPLEMASKIPROC)VAR_20("glSampleMaski");
}
