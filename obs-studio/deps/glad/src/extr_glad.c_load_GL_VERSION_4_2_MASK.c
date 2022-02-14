
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLTEXSTORAGE3DPROC ;
typedef scalar_t__ PFNGLTEXSTORAGE2DPROC ;
typedef scalar_t__ PFNGLTEXSTORAGE1DPROC ;
typedef scalar_t__ PFNGLMEMORYBARRIERPROC ;
typedef scalar_t__ PFNGLGETINTERNALFORMATIVPROC ;
typedef scalar_t__ PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC ;
typedef scalar_t__ PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC ;
typedef scalar_t__ PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC ;
typedef scalar_t__ PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC ;
typedef scalar_t__ PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC ;
typedef scalar_t__ PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC ;
typedef scalar_t__ PFNGLBINDIMAGETEXTUREPROC ;
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

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_13) {
 if(!VAR_0) return;
 VAR_2 = (PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC)VAR_13("glDrawArraysInstancedBaseInstance");
 VAR_3 = (PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC)VAR_13("glDrawElementsInstancedBaseInstance");
 VAR_4 = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC)VAR_13("glDrawElementsInstancedBaseVertexBaseInstance");
 VAR_8 = (PFNGLGETINTERNALFORMATIVPROC)VAR_13("glGetInternalformativ");
 VAR_7 = (PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC)VAR_13("glGetActiveAtomicCounterBufferiv");
 VAR_1 = (PFNGLBINDIMAGETEXTUREPROC)VAR_13("glBindImageTexture");
 VAR_9 = (PFNGLMEMORYBARRIERPROC)VAR_13("glMemoryBarrier");
 VAR_10 = (PFNGLTEXSTORAGE1DPROC)VAR_13("glTexStorage1D");
 VAR_11 = (PFNGLTEXSTORAGE2DPROC)VAR_13("glTexStorage2D");
 VAR_12 = (PFNGLTEXSTORAGE3DPROC)VAR_13("glTexStorage3D");
 VAR_5 = (PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC)VAR_13("glDrawTransformFeedbackInstanced");
 VAR_6 = (PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC)VAR_13("glDrawTransformFeedbackStreamInstanced");
}
