
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLPROGRAMPARAMETERIARBPROC ;
typedef scalar_t__ PFNGLFRAMEBUFFERTEXTURELAYERARBPROC ;
typedef scalar_t__ PFNGLFRAMEBUFFERTEXTUREFACEARBPROC ;
typedef scalar_t__ PFNGLFRAMEBUFFERTEXTUREARBPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_5) {
 if(!VAR_0) return;
 VAR_4 = (PFNGLPROGRAMPARAMETERIARBPROC)VAR_5("glProgramParameteriARB");
 VAR_1 = (PFNGLFRAMEBUFFERTEXTUREARBPROC)VAR_5("glFramebufferTextureARB");
 VAR_3 = (PFNGLFRAMEBUFFERTEXTURELAYERARBPROC)VAR_5("glFramebufferTextureLayerARB");
 VAR_2 = (PFNGLFRAMEBUFFERTEXTUREFACEARBPROC)VAR_5("glFramebufferTextureFaceARB");
}
