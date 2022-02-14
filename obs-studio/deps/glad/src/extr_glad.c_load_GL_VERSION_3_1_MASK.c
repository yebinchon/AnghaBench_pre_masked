
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLUNIFORMBLOCKBINDINGPROC ;
typedef scalar_t__ PFNGLTEXBUFFERPROC ;
typedef scalar_t__ PFNGLPRIMITIVERESTARTINDEXPROC ;
typedef scalar_t__ PFNGLGETUNIFORMINDICESPROC ;
typedef scalar_t__ PFNGLGETUNIFORMBLOCKINDEXPROC ;
typedef scalar_t__ PFNGLGETACTIVEUNIFORMSIVPROC ;
typedef scalar_t__ PFNGLGETACTIVEUNIFORMNAMEPROC ;
typedef scalar_t__ PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC ;
typedef scalar_t__ PFNGLGETACTIVEUNIFORMBLOCKIVPROC ;
typedef scalar_t__ PFNGLDRAWELEMENTSINSTANCEDPROC ;
typedef scalar_t__ PFNGLDRAWARRAYSINSTANCEDPROC ;
typedef scalar_t__ PFNGLCOPYBUFFERSUBDATAPROC ;
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
 VAR_2 = (PFNGLDRAWARRAYSINSTANCEDPROC)VAR_13("glDrawArraysInstanced");
 VAR_3 = (PFNGLDRAWELEMENTSINSTANCEDPROC)VAR_13("glDrawElementsInstanced");
 VAR_11 = (PFNGLTEXBUFFERPROC)VAR_13("glTexBuffer");
 VAR_10 = (PFNGLPRIMITIVERESTARTINDEXPROC)VAR_13("glPrimitiveRestartIndex");
 VAR_1 = (PFNGLCOPYBUFFERSUBDATAPROC)VAR_13("glCopyBufferSubData");
 VAR_9 = (PFNGLGETUNIFORMINDICESPROC)VAR_13("glGetUniformIndices");
 VAR_7 = (PFNGLGETACTIVEUNIFORMSIVPROC)VAR_13("glGetActiveUniformsiv");
 VAR_6 = (PFNGLGETACTIVEUNIFORMNAMEPROC)VAR_13("glGetActiveUniformName");
 VAR_8 = (PFNGLGETUNIFORMBLOCKINDEXPROC)VAR_13("glGetUniformBlockIndex");
 VAR_5 = (PFNGLGETACTIVEUNIFORMBLOCKIVPROC)VAR_13("glGetActiveUniformBlockiv");
 VAR_4 = (PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC)VAR_13("glGetActiveUniformBlockName");
 VAR_12 = (PFNGLUNIFORMBLOCKBINDINGPROC)VAR_13("glUniformBlockBinding");
}
