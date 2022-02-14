
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNWGLQUERYGENLOCKMAXSOURCEDELAYI3DPROC ;
typedef scalar_t__ PFNWGLISENABLEDGENLOCKI3DPROC ;
typedef scalar_t__ PFNWGLGETGENLOCKSOURCEI3DPROC ;
typedef scalar_t__ PFNWGLGETGENLOCKSOURCEEDGEI3DPROC ;
typedef scalar_t__ PFNWGLGETGENLOCKSOURCEDELAYI3DPROC ;
typedef scalar_t__ PFNWGLGETGENLOCKSAMPLERATEI3DPROC ;
typedef scalar_t__ PFNWGLGENLOCKSOURCEI3DPROC ;
typedef scalar_t__ PFNWGLGENLOCKSOURCEEDGEI3DPROC ;
typedef scalar_t__ PFNWGLGENLOCKSOURCEDELAYI3DPROC ;
typedef scalar_t__ PFNWGLGENLOCKSAMPLERATEI3DPROC ;
typedef scalar_t__ PFNWGLENABLEGENLOCKI3DPROC ;
typedef scalar_t__ PFNWGLDISABLEGENLOCKI3DPROC ;
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

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_13) {
 if(!VAR_0) return;
 VAR_2 = (PFNWGLENABLEGENLOCKI3DPROC)VAR_13("wglEnableGenlockI3D");
 VAR_1 = (PFNWGLDISABLEGENLOCKI3DPROC)VAR_13("wglDisableGenlockI3D");
 VAR_11 = (PFNWGLISENABLEDGENLOCKI3DPROC)VAR_13("wglIsEnabledGenlockI3D");
 VAR_6 = (PFNWGLGENLOCKSOURCEI3DPROC)VAR_13("wglGenlockSourceI3D");
 VAR_10 = (PFNWGLGETGENLOCKSOURCEI3DPROC)VAR_13("wglGetGenlockSourceI3D");
 VAR_5 = (PFNWGLGENLOCKSOURCEEDGEI3DPROC)VAR_13("wglGenlockSourceEdgeI3D");
 VAR_9 = (PFNWGLGETGENLOCKSOURCEEDGEI3DPROC)VAR_13("wglGetGenlockSourceEdgeI3D");
 VAR_3 = (PFNWGLGENLOCKSAMPLERATEI3DPROC)VAR_13("wglGenlockSampleRateI3D");
 VAR_7 = (PFNWGLGETGENLOCKSAMPLERATEI3DPROC)VAR_13("wglGetGenlockSampleRateI3D");
 VAR_4 = (PFNWGLGENLOCKSOURCEDELAYI3DPROC)VAR_13("wglGenlockSourceDelayI3D");
 VAR_8 = (PFNWGLGETGENLOCKSOURCEDELAYI3DPROC)VAR_13("wglGetGenlockSourceDelayI3D");
 VAR_12 = (PFNWGLQUERYGENLOCKMAXSOURCEDELAYI3DPROC)VAR_13("wglQueryGenlockMaxSourceDelayI3D");
}
