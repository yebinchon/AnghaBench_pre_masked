
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLUNIFORMUI64VNVPROC ;
typedef scalar_t__ PFNGLUNIFORMUI64NVPROC ;
typedef scalar_t__ PFNGLPROGRAMUNIFORMUI64VNVPROC ;
typedef scalar_t__ PFNGLPROGRAMUNIFORMUI64NVPROC ;
typedef scalar_t__ PFNGLMAKENAMEDBUFFERRESIDENTNVPROC ;
typedef scalar_t__ PFNGLMAKENAMEDBUFFERNONRESIDENTNVPROC ;
typedef scalar_t__ PFNGLMAKEBUFFERRESIDENTNVPROC ;
typedef scalar_t__ PFNGLMAKEBUFFERNONRESIDENTNVPROC ;
typedef scalar_t__ PFNGLISNAMEDBUFFERRESIDENTNVPROC ;
typedef scalar_t__ PFNGLISBUFFERRESIDENTNVPROC ;
typedef scalar_t__ PFNGLGETUNIFORMUI64VNVPROC ;
typedef scalar_t__ PFNGLGETNAMEDBUFFERPARAMETERUI64VNVPROC ;
typedef scalar_t__ PFNGLGETINTEGERUI64VNVPROC ;
typedef scalar_t__ PFNGLGETBUFFERPARAMETERUI64VNVPROC ;
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

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_15) {
 if(!VAR_0) return;
 VAR_8 = (PFNGLMAKEBUFFERRESIDENTNVPROC)VAR_15("glMakeBufferResidentNV");
 VAR_7 = (PFNGLMAKEBUFFERNONRESIDENTNVPROC)VAR_15("glMakeBufferNonResidentNV");
 VAR_5 = (PFNGLISBUFFERRESIDENTNVPROC)VAR_15("glIsBufferResidentNV");
 VAR_10 = (PFNGLMAKENAMEDBUFFERRESIDENTNVPROC)VAR_15("glMakeNamedBufferResidentNV");
 VAR_9 = (PFNGLMAKENAMEDBUFFERNONRESIDENTNVPROC)VAR_15("glMakeNamedBufferNonResidentNV");
 VAR_6 = (PFNGLISNAMEDBUFFERRESIDENTNVPROC)VAR_15("glIsNamedBufferResidentNV");
 VAR_1 = (PFNGLGETBUFFERPARAMETERUI64VNVPROC)VAR_15("glGetBufferParameterui64vNV");
 VAR_3 = (PFNGLGETNAMEDBUFFERPARAMETERUI64VNVPROC)VAR_15("glGetNamedBufferParameterui64vNV");
 VAR_2 = (PFNGLGETINTEGERUI64VNVPROC)VAR_15("glGetIntegerui64vNV");
 VAR_13 = (PFNGLUNIFORMUI64NVPROC)VAR_15("glUniformui64NV");
 VAR_14 = (PFNGLUNIFORMUI64VNVPROC)VAR_15("glUniformui64vNV");
 VAR_4 = (PFNGLGETUNIFORMUI64VNVPROC)VAR_15("glGetUniformui64vNV");
 VAR_11 = (PFNGLPROGRAMUNIFORMUI64NVPROC)VAR_15("glProgramUniformui64NV");
 VAR_12 = (PFNGLPROGRAMUNIFORMUI64VNVPROC)VAR_15("glProgramUniformui64vNV");
}
