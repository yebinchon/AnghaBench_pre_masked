
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLXSELECTEVENTPROC ;
typedef scalar_t__ PFNGLXQUERYDRAWABLEPROC ;
typedef scalar_t__ PFNGLXQUERYCONTEXTPROC ;
typedef scalar_t__ PFNGLXMAKECONTEXTCURRENTPROC ;
typedef scalar_t__ PFNGLXGETVISUALFROMFBCONFIGPROC ;
typedef scalar_t__ PFNGLXGETSELECTEDEVENTPROC ;
typedef scalar_t__ PFNGLXGETFBCONFIGSPROC ;
typedef scalar_t__ PFNGLXGETFBCONFIGATTRIBPROC ;
typedef scalar_t__ PFNGLXGETCURRENTREADDRAWABLEPROC ;
typedef scalar_t__ PFNGLXDESTROYWINDOWPROC ;
typedef scalar_t__ PFNGLXDESTROYPIXMAPPROC ;
typedef scalar_t__ PFNGLXDESTROYPBUFFERPROC ;
typedef scalar_t__ PFNGLXCREATEWINDOWPROC ;
typedef scalar_t__ PFNGLXCREATEPIXMAPPROC ;
typedef scalar_t__ PFNGLXCREATEPBUFFERPROC ;
typedef scalar_t__ PFNGLXCREATENEWCONTEXTPROC ;
typedef scalar_t__ PFNGLXCHOOSEFBCONFIGPROC ;
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
 VAR_11 = (PFNGLXGETFBCONFIGSPROC)VAR_18("glXGetFBConfigs");
 VAR_1 = (PFNGLXCHOOSEFBCONFIGPROC)VAR_18("glXChooseFBConfig");
 VAR_10 = (PFNGLXGETFBCONFIGATTRIBPROC)VAR_18("glXGetFBConfigAttrib");
 VAR_13 = (PFNGLXGETVISUALFROMFBCONFIGPROC)VAR_18("glXGetVisualFromFBConfig");
 VAR_5 = (PFNGLXCREATEWINDOWPROC)VAR_18("glXCreateWindow");
 VAR_8 = (PFNGLXDESTROYWINDOWPROC)VAR_18("glXDestroyWindow");
 VAR_4 = (PFNGLXCREATEPIXMAPPROC)VAR_18("glXCreatePixmap");
 VAR_7 = (PFNGLXDESTROYPIXMAPPROC)VAR_18("glXDestroyPixmap");
 VAR_3 = (PFNGLXCREATEPBUFFERPROC)VAR_18("glXCreatePbuffer");
 VAR_6 = (PFNGLXDESTROYPBUFFERPROC)VAR_18("glXDestroyPbuffer");
 VAR_16 = (PFNGLXQUERYDRAWABLEPROC)VAR_18("glXQueryDrawable");
 VAR_2 = (PFNGLXCREATENEWCONTEXTPROC)VAR_18("glXCreateNewContext");
 VAR_14 = (PFNGLXMAKECONTEXTCURRENTPROC)VAR_18("glXMakeContextCurrent");
 VAR_9 = (PFNGLXGETCURRENTREADDRAWABLEPROC)VAR_18("glXGetCurrentReadDrawable");
 VAR_15 = (PFNGLXQUERYCONTEXTPROC)VAR_18("glXQueryContext");
 VAR_17 = (PFNGLXSELECTEVENTPROC)VAR_18("glXSelectEvent");
 VAR_12 = (PFNGLXGETSELECTEDEVENTPROC)VAR_18("glXGetSelectedEvent");
}
