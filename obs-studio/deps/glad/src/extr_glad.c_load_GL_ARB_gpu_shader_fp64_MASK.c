
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLUNIFORMMATRIX4X3DVPROC ;
typedef scalar_t__ PFNGLUNIFORMMATRIX4X2DVPROC ;
typedef scalar_t__ PFNGLUNIFORMMATRIX4DVPROC ;
typedef scalar_t__ PFNGLUNIFORMMATRIX3X4DVPROC ;
typedef scalar_t__ PFNGLUNIFORMMATRIX3X2DVPROC ;
typedef scalar_t__ PFNGLUNIFORMMATRIX3DVPROC ;
typedef scalar_t__ PFNGLUNIFORMMATRIX2X4DVPROC ;
typedef scalar_t__ PFNGLUNIFORMMATRIX2X3DVPROC ;
typedef scalar_t__ PFNGLUNIFORMMATRIX2DVPROC ;
typedef scalar_t__ PFNGLUNIFORM4DVPROC ;
typedef scalar_t__ PFNGLUNIFORM4DPROC ;
typedef scalar_t__ PFNGLUNIFORM3DVPROC ;
typedef scalar_t__ PFNGLUNIFORM3DPROC ;
typedef scalar_t__ PFNGLUNIFORM2DVPROC ;
typedef scalar_t__ PFNGLUNIFORM2DPROC ;
typedef scalar_t__ PFNGLUNIFORM1DVPROC ;
typedef scalar_t__ PFNGLUNIFORM1DPROC ;
typedef scalar_t__ PFNGLGETUNIFORMDVPROC ;
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

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_19) {
 if(!VAR_0) return;
 VAR_2 = (PFNGLUNIFORM1DPROC)VAR_19("glUniform1d");
 VAR_4 = (PFNGLUNIFORM2DPROC)VAR_19("glUniform2d");
 VAR_6 = (PFNGLUNIFORM3DPROC)VAR_19("glUniform3d");
 VAR_8 = (PFNGLUNIFORM4DPROC)VAR_19("glUniform4d");
 VAR_3 = (PFNGLUNIFORM1DVPROC)VAR_19("glUniform1dv");
 VAR_5 = (PFNGLUNIFORM2DVPROC)VAR_19("glUniform2dv");
 VAR_7 = (PFNGLUNIFORM3DVPROC)VAR_19("glUniform3dv");
 VAR_9 = (PFNGLUNIFORM4DVPROC)VAR_19("glUniform4dv");
 VAR_10 = (PFNGLUNIFORMMATRIX2DVPROC)VAR_19("glUniformMatrix2dv");
 VAR_13 = (PFNGLUNIFORMMATRIX3DVPROC)VAR_19("glUniformMatrix3dv");
 VAR_16 = (PFNGLUNIFORMMATRIX4DVPROC)VAR_19("glUniformMatrix4dv");
 VAR_11 = (PFNGLUNIFORMMATRIX2X3DVPROC)VAR_19("glUniformMatrix2x3dv");
 VAR_12 = (PFNGLUNIFORMMATRIX2X4DVPROC)VAR_19("glUniformMatrix2x4dv");
 VAR_14 = (PFNGLUNIFORMMATRIX3X2DVPROC)VAR_19("glUniformMatrix3x2dv");
 VAR_15 = (PFNGLUNIFORMMATRIX3X4DVPROC)VAR_19("glUniformMatrix3x4dv");
 VAR_17 = (PFNGLUNIFORMMATRIX4X2DVPROC)VAR_19("glUniformMatrix4x2dv");
 VAR_18 = (PFNGLUNIFORMMATRIX4X3DVPROC)VAR_19("glUniformMatrix4x3dv");
 VAR_1 = (PFNGLGETUNIFORMDVPROC)VAR_19("glGetUniformdv");
}
