
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNWGLSETGAMMATABLEPARAMETERSI3DPROC ;
typedef scalar_t__ PFNWGLSETGAMMATABLEI3DPROC ;
typedef scalar_t__ PFNWGLGETGAMMATABLEPARAMETERSI3DPROC ;
typedef scalar_t__ PFNWGLGETGAMMATABLEI3DPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_5) {
 if(!VAR_0) return;
 VAR_2 = (PFNWGLGETGAMMATABLEPARAMETERSI3DPROC)VAR_5("wglGetGammaTableParametersI3D");
 VAR_4 = (PFNWGLSETGAMMATABLEPARAMETERSI3DPROC)VAR_5("wglSetGammaTableParametersI3D");
 VAR_1 = (PFNWGLGETGAMMATABLEI3DPROC)VAR_5("wglGetGammaTableI3D");
 VAR_3 = (PFNWGLSETGAMMATABLEI3DPROC)VAR_5("wglSetGammaTableI3D");
}
