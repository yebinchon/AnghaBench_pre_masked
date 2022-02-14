
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLXWAITXPROC ;
typedef scalar_t__ PFNGLXWAITGLPROC ;
typedef scalar_t__ PFNGLXUSEXFONTPROC ;
typedef scalar_t__ PFNGLXSWAPBUFFERSPROC ;
typedef scalar_t__ PFNGLXQUERYVERSIONPROC ;
typedef scalar_t__ PFNGLXQUERYEXTENSIONPROC ;
typedef scalar_t__ PFNGLXMAKECURRENTPROC ;
typedef scalar_t__ PFNGLXISDIRECTPROC ;
typedef scalar_t__ PFNGLXGETCURRENTDRAWABLEPROC ;
typedef scalar_t__ PFNGLXGETCURRENTCONTEXTPROC ;
typedef scalar_t__ PFNGLXGETCONFIGPROC ;
typedef scalar_t__ PFNGLXDESTROYGLXPIXMAPPROC ;
typedef scalar_t__ PFNGLXDESTROYCONTEXTPROC ;
typedef scalar_t__ PFNGLXCREATEGLXPIXMAPPROC ;
typedef scalar_t__ PFNGLXCREATECONTEXTPROC ;
typedef scalar_t__ PFNGLXCOPYCONTEXTPROC ;
typedef scalar_t__ PFNGLXCHOOSEVISUALPROC ;
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
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_18) {
 if(!VAR_0) return;
 VAR_1 = (PFNGLXCHOOSEVISUALPROC)VAR_18("glXChooseVisual");
 VAR_3 = (PFNGLXCREATECONTEXTPROC)VAR_18("glXCreateContext");
 VAR_5 = (PFNGLXDESTROYCONTEXTPROC)VAR_18("glXDestroyContext");
 VAR_11 = (PFNGLXMAKECURRENTPROC)VAR_18("glXMakeCurrent");
 VAR_2 = (PFNGLXCOPYCONTEXTPROC)VAR_18("glXCopyContext");
 VAR_14 = (PFNGLXSWAPBUFFERSPROC)VAR_18("glXSwapBuffers");
 VAR_4 = (PFNGLXCREATEGLXPIXMAPPROC)VAR_18("glXCreateGLXPixmap");
 VAR_6 = (PFNGLXDESTROYGLXPIXMAPPROC)VAR_18("glXDestroyGLXPixmap");
 VAR_12 = (PFNGLXQUERYEXTENSIONPROC)VAR_18("glXQueryExtension");
 VAR_13 = (PFNGLXQUERYVERSIONPROC)VAR_18("glXQueryVersion");
 VAR_10 = (PFNGLXISDIRECTPROC)VAR_18("glXIsDirect");
 VAR_7 = (PFNGLXGETCONFIGPROC)VAR_18("glXGetConfig");
 VAR_8 = (PFNGLXGETCURRENTCONTEXTPROC)VAR_18("glXGetCurrentContext");
 VAR_9 = (PFNGLXGETCURRENTDRAWABLEPROC)VAR_18("glXGetCurrentDrawable");
 VAR_16 = (PFNGLXWAITGLPROC)VAR_18("glXWaitGL");
 VAR_17 = (PFNGLXWAITXPROC)VAR_18("glXWaitX");
 VAR_15 = (PFNGLXUSEXFONTPROC)VAR_18("glXUseXFont");
}
