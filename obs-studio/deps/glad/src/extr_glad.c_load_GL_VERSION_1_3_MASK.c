
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLSAMPLECOVERAGEPROC ;
typedef scalar_t__ PFNGLGETCOMPRESSEDTEXIMAGEPROC ;
typedef scalar_t__ PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC ;
typedef scalar_t__ PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC ;
typedef scalar_t__ PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC ;
typedef scalar_t__ PFNGLCOMPRESSEDTEXIMAGE3DPROC ;
typedef scalar_t__ PFNGLCOMPRESSEDTEXIMAGE2DPROC ;
typedef scalar_t__ PFNGLCOMPRESSEDTEXIMAGE1DPROC ;
typedef scalar_t__ PFNGLACTIVETEXTUREPROC ;
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

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_10) {
 if(!VAR_0) return;
 VAR_1 = (PFNGLACTIVETEXTUREPROC)VAR_10("glActiveTexture");
 VAR_9 = (PFNGLSAMPLECOVERAGEPROC)VAR_10("glSampleCoverage");
 VAR_4 = (PFNGLCOMPRESSEDTEXIMAGE3DPROC)VAR_10("glCompressedTexImage3D");
 VAR_3 = (PFNGLCOMPRESSEDTEXIMAGE2DPROC)VAR_10("glCompressedTexImage2D");
 VAR_2 = (PFNGLCOMPRESSEDTEXIMAGE1DPROC)VAR_10("glCompressedTexImage1D");
 VAR_7 = (PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC)VAR_10("glCompressedTexSubImage3D");
 VAR_6 = (PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC)VAR_10("glCompressedTexSubImage2D");
 VAR_5 = (PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC)VAR_10("glCompressedTexSubImage1D");
 VAR_8 = (PFNGLGETCOMPRESSEDTEXIMAGEPROC)VAR_10("glGetCompressedTexImage");
}
