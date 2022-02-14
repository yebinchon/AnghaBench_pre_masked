
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNWGLDXUNREGISTEROBJECTNVPROC ;
typedef scalar_t__ PFNWGLDXUNLOCKOBJECTSNVPROC ;
typedef scalar_t__ PFNWGLDXSETRESOURCESHAREHANDLENVPROC ;
typedef scalar_t__ PFNWGLDXREGISTEROBJECTNVPROC ;
typedef scalar_t__ PFNWGLDXOPENDEVICENVPROC ;
typedef scalar_t__ PFNWGLDXOBJECTACCESSNVPROC ;
typedef scalar_t__ PFNWGLDXLOCKOBJECTSNVPROC ;
typedef scalar_t__ PFNWGLDXCLOSEDEVICENVPROC ;
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

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_9) {
 if(!VAR_0) return;
 VAR_6 = (PFNWGLDXSETRESOURCESHAREHANDLENVPROC)VAR_9("wglDXSetResourceShareHandleNV");
 VAR_4 = (PFNWGLDXOPENDEVICENVPROC)VAR_9("wglDXOpenDeviceNV");
 VAR_1 = (PFNWGLDXCLOSEDEVICENVPROC)VAR_9("wglDXCloseDeviceNV");
 VAR_5 = (PFNWGLDXREGISTEROBJECTNVPROC)VAR_9("wglDXRegisterObjectNV");
 VAR_8 = (PFNWGLDXUNREGISTEROBJECTNVPROC)VAR_9("wglDXUnregisterObjectNV");
 VAR_3 = (PFNWGLDXOBJECTACCESSNVPROC)VAR_9("wglDXObjectAccessNV");
 VAR_2 = (PFNWGLDXLOCKOBJECTSNVPROC)VAR_9("wglDXLockObjectsNV");
 VAR_7 = (PFNWGLDXUNLOCKOBJECTSNVPROC)VAR_9("wglDXUnlockObjectsNV");
}
