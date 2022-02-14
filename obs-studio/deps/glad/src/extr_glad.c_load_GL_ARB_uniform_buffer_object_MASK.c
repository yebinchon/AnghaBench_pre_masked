
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLUNIFORMBLOCKBINDINGPROC ;
typedef scalar_t__ PFNGLGETUNIFORMINDICESPROC ;
typedef scalar_t__ PFNGLGETUNIFORMBLOCKINDEXPROC ;
typedef scalar_t__ PFNGLGETACTIVEUNIFORMSIVPROC ;
typedef scalar_t__ PFNGLGETACTIVEUNIFORMNAMEPROC ;
typedef scalar_t__ PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC ;
typedef scalar_t__ PFNGLGETACTIVEUNIFORMBLOCKIVPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_8) {
 if(!VAR_0) return;
 VAR_6 = (PFNGLGETUNIFORMINDICESPROC)VAR_8("glGetUniformIndices");
 VAR_4 = (PFNGLGETACTIVEUNIFORMSIVPROC)VAR_8("glGetActiveUniformsiv");
 VAR_3 = (PFNGLGETACTIVEUNIFORMNAMEPROC)VAR_8("glGetActiveUniformName");
 VAR_5 = (PFNGLGETUNIFORMBLOCKINDEXPROC)VAR_8("glGetUniformBlockIndex");
 VAR_2 = (PFNGLGETACTIVEUNIFORMBLOCKIVPROC)VAR_8("glGetActiveUniformBlockiv");
 VAR_1 = (PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC)VAR_8("glGetActiveUniformBlockName");
 VAR_7 = (PFNGLUNIFORMBLOCKBINDINGPROC)VAR_8("glUniformBlockBinding");
}
