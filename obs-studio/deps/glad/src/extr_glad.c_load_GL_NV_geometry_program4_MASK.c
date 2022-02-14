
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLPROGRAMVERTEXLIMITNVPROC ;
typedef scalar_t__ PFNGLFRAMEBUFFERTEXTURELAYEREXTPROC ;
typedef scalar_t__ PFNGLFRAMEBUFFERTEXTUREFACEEXTPROC ;
typedef scalar_t__ PFNGLFRAMEBUFFERTEXTUREEXTPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_5) {
 if(!VAR_0) return;
 VAR_4 = (PFNGLPROGRAMVERTEXLIMITNVPROC)VAR_5("glProgramVertexLimitNV");
 VAR_1 = (PFNGLFRAMEBUFFERTEXTUREEXTPROC)VAR_5("glFramebufferTextureEXT");
 VAR_3 = (PFNGLFRAMEBUFFERTEXTURELAYEREXTPROC)VAR_5("glFramebufferTextureLayerEXT");
 VAR_2 = (PFNGLFRAMEBUFFERTEXTUREFACEEXTPROC)VAR_5("glFramebufferTextureFaceEXT");
}
