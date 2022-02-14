
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLSETFRAGMENTSHADERCONSTANTATIPROC ;
typedef scalar_t__ PFNGLSAMPLEMAPATIPROC ;
typedef scalar_t__ PFNGLPASSTEXCOORDATIPROC ;
typedef scalar_t__ PFNGLGENFRAGMENTSHADERSATIPROC ;
typedef scalar_t__ PFNGLENDFRAGMENTSHADERATIPROC ;
typedef scalar_t__ PFNGLDELETEFRAGMENTSHADERATIPROC ;
typedef scalar_t__ PFNGLCOLORFRAGMENTOP3ATIPROC ;
typedef scalar_t__ PFNGLCOLORFRAGMENTOP2ATIPROC ;
typedef scalar_t__ PFNGLCOLORFRAGMENTOP1ATIPROC ;
typedef scalar_t__ PFNGLBINDFRAGMENTSHADERATIPROC ;
typedef scalar_t__ PFNGLBEGINFRAGMENTSHADERATIPROC ;
typedef scalar_t__ PFNGLALPHAFRAGMENTOP3ATIPROC ;
typedef scalar_t__ PFNGLALPHAFRAGMENTOP2ATIPROC ;
typedef scalar_t__ PFNGLALPHAFRAGMENTOP1ATIPROC ;
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
 VAR_11 = (PFNGLGENFRAGMENTSHADERSATIPROC)VAR_15("glGenFragmentShadersATI");
 VAR_5 = (PFNGLBINDFRAGMENTSHADERATIPROC)VAR_15("glBindFragmentShaderATI");
 VAR_9 = (PFNGLDELETEFRAGMENTSHADERATIPROC)VAR_15("glDeleteFragmentShaderATI");
 VAR_4 = (PFNGLBEGINFRAGMENTSHADERATIPROC)VAR_15("glBeginFragmentShaderATI");
 VAR_10 = (PFNGLENDFRAGMENTSHADERATIPROC)VAR_15("glEndFragmentShaderATI");
 VAR_12 = (PFNGLPASSTEXCOORDATIPROC)VAR_15("glPassTexCoordATI");
 VAR_13 = (PFNGLSAMPLEMAPATIPROC)VAR_15("glSampleMapATI");
 VAR_6 = (PFNGLCOLORFRAGMENTOP1ATIPROC)VAR_15("glColorFragmentOp1ATI");
 VAR_7 = (PFNGLCOLORFRAGMENTOP2ATIPROC)VAR_15("glColorFragmentOp2ATI");
 VAR_8 = (PFNGLCOLORFRAGMENTOP3ATIPROC)VAR_15("glColorFragmentOp3ATI");
 VAR_1 = (PFNGLALPHAFRAGMENTOP1ATIPROC)VAR_15("glAlphaFragmentOp1ATI");
 VAR_2 = (PFNGLALPHAFRAGMENTOP2ATIPROC)VAR_15("glAlphaFragmentOp2ATI");
 VAR_3 = (PFNGLALPHAFRAGMENTOP3ATIPROC)VAR_15("glAlphaFragmentOp3ATI");
 VAR_14 = (PFNGLSETFRAGMENTSHADERCONSTANTATIPROC)VAR_15("glSetFragmentShaderConstantATI");
}
