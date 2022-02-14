
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNWGLQUERYFRAMELOCKMASTERI3DPROC ;
typedef scalar_t__ PFNWGLISENABLEDFRAMELOCKI3DPROC ;
typedef scalar_t__ PFNWGLENABLEFRAMELOCKI3DPROC ;
typedef scalar_t__ PFNWGLDISABLEFRAMELOCKI3DPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_5) {
 if(!VAR_0) return;
 VAR_2 = (PFNWGLENABLEFRAMELOCKI3DPROC)VAR_5("wglEnableFrameLockI3D");
 VAR_1 = (PFNWGLDISABLEFRAMELOCKI3DPROC)VAR_5("wglDisableFrameLockI3D");
 VAR_3 = (PFNWGLISENABLEDFRAMELOCKI3DPROC)VAR_5("wglIsEnabledFrameLockI3D");
 VAR_4 = (PFNWGLQUERYFRAMELOCKMASTERI3DPROC)VAR_5("wglQueryFrameLockMasterI3D");
}
