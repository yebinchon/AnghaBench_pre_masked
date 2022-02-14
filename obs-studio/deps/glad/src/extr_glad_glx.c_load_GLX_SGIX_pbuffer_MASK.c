
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLXSELECTEVENTSGIXPROC ;
typedef scalar_t__ PFNGLXQUERYGLXPBUFFERSGIXPROC ;
typedef scalar_t__ PFNGLXGETSELECTEDEVENTSGIXPROC ;
typedef scalar_t__ PFNGLXDESTROYGLXPBUFFERSGIXPROC ;
typedef scalar_t__ PFNGLXCREATEGLXPBUFFERSGIXPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_6) {
 if(!VAR_0) return;
 VAR_1 = (PFNGLXCREATEGLXPBUFFERSGIXPROC)VAR_6("glXCreateGLXPbufferSGIX");
 VAR_2 = (PFNGLXDESTROYGLXPBUFFERSGIXPROC)VAR_6("glXDestroyGLXPbufferSGIX");
 VAR_4 = (PFNGLXQUERYGLXPBUFFERSGIXPROC)VAR_6("glXQueryGLXPbufferSGIX");
 VAR_5 = (PFNGLXSELECTEVENTSGIXPROC)VAR_6("glXSelectEventSGIX");
 VAR_3 = (PFNGLXGETSELECTEDEVENTSGIXPROC)VAR_6("glXGetSelectedEventSGIX");
}
