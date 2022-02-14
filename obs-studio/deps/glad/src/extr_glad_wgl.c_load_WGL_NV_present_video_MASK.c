
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNWGLQUERYCURRENTCONTEXTNVPROC ;
typedef scalar_t__ PFNWGLENUMERATEVIDEODEVICESNVPROC ;
typedef scalar_t__ PFNWGLBINDVIDEODEVICENVPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_4) {
 if(!VAR_0) return;
 VAR_2 = (PFNWGLENUMERATEVIDEODEVICESNVPROC)VAR_4("wglEnumerateVideoDevicesNV");
 VAR_1 = (PFNWGLBINDVIDEODEVICENVPROC)VAR_4("wglBindVideoDeviceNV");
 VAR_3 = (PFNWGLQUERYCURRENTCONTEXTNVPROC)VAR_4("wglQueryCurrentContextNV");
}
