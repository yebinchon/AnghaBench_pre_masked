
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_2(void)
{
 VAR_5 =
  FUNC_0("wglDXSetResourceShareHandleNV");
 VAR_3 = FUNC_0("wglDXOpenDeviceNV");
 VAR_0 = FUNC_0("wglDXCloseDeviceNV");
 VAR_4 = FUNC_0("wglDXRegisterObjectNV");
 VAR_7 = FUNC_0("wglDXUnregisterObjectNV");
 VAR_2 = FUNC_0("wglDXObjectAccessNV");
 VAR_1 = FUNC_0("wglDXLockObjectsNV");
 VAR_6 = FUNC_0("wglDXUnlockObjectsNV");

 VAR_8 =
  !!VAR_5 && !!VAR_3 &&
  !!VAR_0 && !!VAR_4 &&
  !!VAR_7 && !!VAR_2 &&
  !!VAR_1 && !!VAR_6;

 if (VAR_8)
  FUNC_1("Shared-texture OpenGL capture available");
}
