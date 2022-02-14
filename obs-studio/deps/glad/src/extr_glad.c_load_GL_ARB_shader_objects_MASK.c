
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLVALIDATEPROGRAMARBPROC ;
typedef scalar_t__ PFNGLUSEPROGRAMOBJECTARBPROC ;
typedef scalar_t__ PFNGLUNIFORMMATRIX4FVARBPROC ;
typedef scalar_t__ PFNGLUNIFORMMATRIX3FVARBPROC ;
typedef scalar_t__ PFNGLUNIFORMMATRIX2FVARBPROC ;
typedef scalar_t__ PFNGLUNIFORM4IVARBPROC ;
typedef scalar_t__ PFNGLUNIFORM4IARBPROC ;
typedef scalar_t__ PFNGLUNIFORM4FVARBPROC ;
typedef scalar_t__ PFNGLUNIFORM4FARBPROC ;
typedef scalar_t__ PFNGLUNIFORM3IVARBPROC ;
typedef scalar_t__ PFNGLUNIFORM3IARBPROC ;
typedef scalar_t__ PFNGLUNIFORM3FVARBPROC ;
typedef scalar_t__ PFNGLUNIFORM3FARBPROC ;
typedef scalar_t__ PFNGLUNIFORM2IVARBPROC ;
typedef scalar_t__ PFNGLUNIFORM2IARBPROC ;
typedef scalar_t__ PFNGLUNIFORM2FVARBPROC ;
typedef scalar_t__ PFNGLUNIFORM2FARBPROC ;
typedef scalar_t__ PFNGLUNIFORM1IVARBPROC ;
typedef scalar_t__ PFNGLUNIFORM1IARBPROC ;
typedef scalar_t__ PFNGLUNIFORM1FVARBPROC ;
typedef scalar_t__ PFNGLUNIFORM1FARBPROC ;
typedef scalar_t__ PFNGLSHADERSOURCEARBPROC ;
typedef scalar_t__ PFNGLLINKPROGRAMARBPROC ;
typedef scalar_t__ PFNGLGETUNIFORMLOCATIONARBPROC ;
typedef scalar_t__ PFNGLGETUNIFORMIVARBPROC ;
typedef scalar_t__ PFNGLGETUNIFORMFVARBPROC ;
typedef scalar_t__ PFNGLGETSHADERSOURCEARBPROC ;
typedef scalar_t__ PFNGLGETOBJECTPARAMETERIVARBPROC ;
typedef scalar_t__ PFNGLGETOBJECTPARAMETERFVARBPROC ;
typedef scalar_t__ PFNGLGETINFOLOGARBPROC ;
typedef scalar_t__ PFNGLGETHANDLEARBPROC ;
typedef scalar_t__ PFNGLGETATTACHEDOBJECTSARBPROC ;
typedef scalar_t__ PFNGLGETACTIVEUNIFORMARBPROC ;
typedef scalar_t__ PFNGLDETACHOBJECTARBPROC ;
typedef scalar_t__ PFNGLDELETEOBJECTARBPROC ;
typedef scalar_t__ PFNGLCREATESHADEROBJECTARBPROC ;
typedef scalar_t__ PFNGLCREATEPROGRAMOBJECTARBPROC ;
typedef scalar_t__ PFNGLCOMPILESHADERARBPROC ;
typedef scalar_t__ PFNGLATTACHOBJECTARBPROC ;
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
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_40) {
 if(!VAR_0) return;
 VAR_5 = (PFNGLDELETEOBJECTARBPROC)VAR_40("glDeleteObjectARB");
 VAR_9 = (PFNGLGETHANDLEARBPROC)VAR_40("glGetHandleARB");
 VAR_6 = (PFNGLDETACHOBJECTARBPROC)VAR_40("glDetachObjectARB");
 VAR_4 = (PFNGLCREATESHADEROBJECTARBPROC)VAR_40("glCreateShaderObjectARB");
 VAR_18 = (PFNGLSHADERSOURCEARBPROC)VAR_40("glShaderSourceARB");
 VAR_2 = (PFNGLCOMPILESHADERARBPROC)VAR_40("glCompileShaderARB");
 VAR_3 = (PFNGLCREATEPROGRAMOBJECTARBPROC)VAR_40("glCreateProgramObjectARB");
 VAR_1 = (PFNGLATTACHOBJECTARBPROC)VAR_40("glAttachObjectARB");
 VAR_17 = (PFNGLLINKPROGRAMARBPROC)VAR_40("glLinkProgramARB");
 VAR_38 = (PFNGLUSEPROGRAMOBJECTARBPROC)VAR_40("glUseProgramObjectARB");
 VAR_39 = (PFNGLVALIDATEPROGRAMARBPROC)VAR_40("glValidateProgramARB");
 VAR_19 = (PFNGLUNIFORM1FARBPROC)VAR_40("glUniform1fARB");
 VAR_23 = (PFNGLUNIFORM2FARBPROC)VAR_40("glUniform2fARB");
 VAR_27 = (PFNGLUNIFORM3FARBPROC)VAR_40("glUniform3fARB");
 VAR_31 = (PFNGLUNIFORM4FARBPROC)VAR_40("glUniform4fARB");
 VAR_21 = (PFNGLUNIFORM1IARBPROC)VAR_40("glUniform1iARB");
 VAR_25 = (PFNGLUNIFORM2IARBPROC)VAR_40("glUniform2iARB");
 VAR_29 = (PFNGLUNIFORM3IARBPROC)VAR_40("glUniform3iARB");
 VAR_33 = (PFNGLUNIFORM4IARBPROC)VAR_40("glUniform4iARB");
 VAR_20 = (PFNGLUNIFORM1FVARBPROC)VAR_40("glUniform1fvARB");
 VAR_24 = (PFNGLUNIFORM2FVARBPROC)VAR_40("glUniform2fvARB");
 VAR_28 = (PFNGLUNIFORM3FVARBPROC)VAR_40("glUniform3fvARB");
 VAR_32 = (PFNGLUNIFORM4FVARBPROC)VAR_40("glUniform4fvARB");
 VAR_22 = (PFNGLUNIFORM1IVARBPROC)VAR_40("glUniform1ivARB");
 VAR_26 = (PFNGLUNIFORM2IVARBPROC)VAR_40("glUniform2ivARB");
 VAR_30 = (PFNGLUNIFORM3IVARBPROC)VAR_40("glUniform3ivARB");
 VAR_34 = (PFNGLUNIFORM4IVARBPROC)VAR_40("glUniform4ivARB");
 VAR_35 = (PFNGLUNIFORMMATRIX2FVARBPROC)VAR_40("glUniformMatrix2fvARB");
 VAR_36 = (PFNGLUNIFORMMATRIX3FVARBPROC)VAR_40("glUniformMatrix3fvARB");
 VAR_37 = (PFNGLUNIFORMMATRIX4FVARBPROC)VAR_40("glUniformMatrix4fvARB");
 VAR_11 = (PFNGLGETOBJECTPARAMETERFVARBPROC)VAR_40("glGetObjectParameterfvARB");
 VAR_12 = (PFNGLGETOBJECTPARAMETERIVARBPROC)VAR_40("glGetObjectParameterivARB");
 VAR_10 = (PFNGLGETINFOLOGARBPROC)VAR_40("glGetInfoLogARB");
 VAR_8 = (PFNGLGETATTACHEDOBJECTSARBPROC)VAR_40("glGetAttachedObjectsARB");
 VAR_14 = (PFNGLGETUNIFORMLOCATIONARBPROC)VAR_40("glGetUniformLocationARB");
 VAR_7 = (PFNGLGETACTIVEUNIFORMARBPROC)VAR_40("glGetActiveUniformARB");
 VAR_15 = (PFNGLGETUNIFORMFVARBPROC)VAR_40("glGetUniformfvARB");
 VAR_16 = (PFNGLGETUNIFORMIVARBPROC)VAR_40("glGetUniformivARB");
 VAR_13 = (PFNGLGETSHADERSOURCEARBPROC)VAR_40("glGetShaderSourceARB");
}
