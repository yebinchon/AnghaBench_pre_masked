
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLXRELEASEVIDEOCAPTUREDEVICENVPROC ;
typedef scalar_t__ PFNGLXQUERYVIDEOCAPTUREDEVICENVPROC ;
typedef scalar_t__ PFNGLXLOCKVIDEOCAPTUREDEVICENVPROC ;
typedef scalar_t__ PFNGLXENUMERATEVIDEOCAPTUREDEVICESNVPROC ;
typedef scalar_t__ PFNGLXBINDVIDEOCAPTUREDEVICENVPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_6) {
 if(!VAR_0) return;
 VAR_1 = (PFNGLXBINDVIDEOCAPTUREDEVICENVPROC)VAR_6("glXBindVideoCaptureDeviceNV");
 VAR_2 = (PFNGLXENUMERATEVIDEOCAPTUREDEVICESNVPROC)VAR_6("glXEnumerateVideoCaptureDevicesNV");
 VAR_3 = (PFNGLXLOCKVIDEOCAPTUREDEVICENVPROC)VAR_6("glXLockVideoCaptureDeviceNV");
 VAR_4 = (PFNGLXQUERYVIDEOCAPTUREDEVICENVPROC)VAR_6("glXQueryVideoCaptureDeviceNV");
 VAR_5 = (PFNGLXRELEASEVIDEOCAPTUREDEVICENVPROC)VAR_6("glXReleaseVideoCaptureDeviceNV");
}
