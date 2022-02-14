
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLORTHOFOESPROC ;
typedef scalar_t__ PFNGLGETCLIPPLANEFOESPROC ;
typedef scalar_t__ PFNGLFRUSTUMFOESPROC ;
typedef scalar_t__ PFNGLDEPTHRANGEFOESPROC ;
typedef scalar_t__ PFNGLCLIPPLANEFOESPROC ;
typedef scalar_t__ PFNGLCLEARDEPTHFOESPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_7) {
 if(!VAR_0) return;
 VAR_1 = (PFNGLCLEARDEPTHFOESPROC)VAR_7("glClearDepthfOES");
 VAR_2 = (PFNGLCLIPPLANEFOESPROC)VAR_7("glClipPlanefOES");
 VAR_3 = (PFNGLDEPTHRANGEFOESPROC)VAR_7("glDepthRangefOES");
 VAR_4 = (PFNGLFRUSTUMFOESPROC)VAR_7("glFrustumfOES");
 VAR_5 = (PFNGLGETCLIPPLANEFOESPROC)VAR_7("glGetClipPlanefOES");
 VAR_6 = (PFNGLORTHOFOESPROC)VAR_7("glOrthofOES");
}
