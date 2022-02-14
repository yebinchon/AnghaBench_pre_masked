
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNWGLRELEASEVIDEOCAPTUREDEVICENVPROC ;
typedef scalar_t__ PFNWGLQUERYVIDEOCAPTUREDEVICENVPROC ;
typedef scalar_t__ PFNWGLLOCKVIDEOCAPTUREDEVICENVPROC ;
typedef scalar_t__ PFNWGLENUMERATEVIDEOCAPTUREDEVICESNVPROC ;
typedef scalar_t__ PFNWGLBINDVIDEOCAPTUREDEVICENVPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_6) {
 if(!VAR_0) return;
 VAR_1 = (PFNWGLBINDVIDEOCAPTUREDEVICENVPROC)VAR_6("wglBindVideoCaptureDeviceNV");
 VAR_2 = (PFNWGLENUMERATEVIDEOCAPTUREDEVICESNVPROC)VAR_6("wglEnumerateVideoCaptureDevicesNV");
 VAR_3 = (PFNWGLLOCKVIDEOCAPTUREDEVICENVPROC)VAR_6("wglLockVideoCaptureDeviceNV");
 VAR_4 = (PFNWGLQUERYVIDEOCAPTUREDEVICENVPROC)VAR_6("wglQueryVideoCaptureDeviceNV");
 VAR_5 = (PFNWGLRELEASEVIDEOCAPTUREDEVICENVPROC)VAR_6("wglReleaseVideoCaptureDeviceNV");
}
