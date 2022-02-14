
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLUNIFORMHANDLEUI64VNVPROC ;
typedef scalar_t__ PFNGLUNIFORMHANDLEUI64NVPROC ;
typedef scalar_t__ PFNGLPROGRAMUNIFORMHANDLEUI64VNVPROC ;
typedef scalar_t__ PFNGLPROGRAMUNIFORMHANDLEUI64NVPROC ;
typedef scalar_t__ PFNGLMAKETEXTUREHANDLERESIDENTNVPROC ;
typedef scalar_t__ PFNGLMAKETEXTUREHANDLENONRESIDENTNVPROC ;
typedef scalar_t__ PFNGLMAKEIMAGEHANDLERESIDENTNVPROC ;
typedef scalar_t__ PFNGLMAKEIMAGEHANDLENONRESIDENTNVPROC ;
typedef scalar_t__ PFNGLISTEXTUREHANDLERESIDENTNVPROC ;
typedef scalar_t__ PFNGLISIMAGEHANDLERESIDENTNVPROC ;
typedef scalar_t__ PFNGLGETTEXTURESAMPLERHANDLENVPROC ;
typedef scalar_t__ PFNGLGETTEXTUREHANDLENVPROC ;
typedef scalar_t__ PFNGLGETIMAGEHANDLENVPROC ;
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

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_14) {
 if(!VAR_0) return;
 VAR_2 = (PFNGLGETTEXTUREHANDLENVPROC)VAR_14("glGetTextureHandleNV");
 VAR_3 = (PFNGLGETTEXTURESAMPLERHANDLENVPROC)VAR_14("glGetTextureSamplerHandleNV");
 VAR_9 = (PFNGLMAKETEXTUREHANDLERESIDENTNVPROC)VAR_14("glMakeTextureHandleResidentNV");
 VAR_8 = (PFNGLMAKETEXTUREHANDLENONRESIDENTNVPROC)VAR_14("glMakeTextureHandleNonResidentNV");
 VAR_1 = (PFNGLGETIMAGEHANDLENVPROC)VAR_14("glGetImageHandleNV");
 VAR_7 = (PFNGLMAKEIMAGEHANDLERESIDENTNVPROC)VAR_14("glMakeImageHandleResidentNV");
 VAR_6 = (PFNGLMAKEIMAGEHANDLENONRESIDENTNVPROC)VAR_14("glMakeImageHandleNonResidentNV");
 VAR_12 = (PFNGLUNIFORMHANDLEUI64NVPROC)VAR_14("glUniformHandleui64NV");
 VAR_13 = (PFNGLUNIFORMHANDLEUI64VNVPROC)VAR_14("glUniformHandleui64vNV");
 VAR_10 = (PFNGLPROGRAMUNIFORMHANDLEUI64NVPROC)VAR_14("glProgramUniformHandleui64NV");
 VAR_11 = (PFNGLPROGRAMUNIFORMHANDLEUI64VNVPROC)VAR_14("glProgramUniformHandleui64vNV");
 VAR_5 = (PFNGLISTEXTUREHANDLERESIDENTNVPROC)VAR_14("glIsTextureHandleResidentNV");
 VAR_4 = (PFNGLISIMAGEHANDLERESIDENTNVPROC)VAR_14("glIsImageHandleResidentNV");
}
