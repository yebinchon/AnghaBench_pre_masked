
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNWGLRELEASEIMAGEBUFFEREVENTSI3DPROC ;
typedef scalar_t__ PFNWGLDESTROYIMAGEBUFFERI3DPROC ;
typedef scalar_t__ PFNWGLCREATEIMAGEBUFFERI3DPROC ;
typedef scalar_t__ PFNWGLASSOCIATEIMAGEBUFFEREVENTSI3DPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_5) {
 if(!VAR_0) return;
 VAR_2 = (PFNWGLCREATEIMAGEBUFFERI3DPROC)VAR_5("wglCreateImageBufferI3D");
 VAR_3 = (PFNWGLDESTROYIMAGEBUFFERI3DPROC)VAR_5("wglDestroyImageBufferI3D");
 VAR_1 = (PFNWGLASSOCIATEIMAGEBUFFEREVENTSI3DPROC)VAR_5("wglAssociateImageBufferEventsI3D");
 VAR_4 = (PFNWGLRELEASEIMAGEBUFFEREVENTSI3DPROC)VAR_5("wglReleaseImageBufferEventsI3D");
}
