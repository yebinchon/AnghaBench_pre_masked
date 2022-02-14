
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNWGLWAITFORSBCOMLPROC ;
typedef scalar_t__ PFNWGLWAITFORMSCOMLPROC ;
typedef scalar_t__ PFNWGLSWAPLAYERBUFFERSMSCOMLPROC ;
typedef scalar_t__ PFNWGLSWAPBUFFERSMSCOMLPROC ;
typedef scalar_t__ PFNWGLGETSYNCVALUESOMLPROC ;
typedef scalar_t__ PFNWGLGETMSCRATEOMLPROC ;
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
 VAR_2 = (PFNWGLGETSYNCVALUESOMLPROC)VAR_7("wglGetSyncValuesOML");
 VAR_1 = (PFNWGLGETMSCRATEOMLPROC)VAR_7("wglGetMscRateOML");
 VAR_3 = (PFNWGLSWAPBUFFERSMSCOMLPROC)VAR_7("wglSwapBuffersMscOML");
 VAR_4 = (PFNWGLSWAPLAYERBUFFERSMSCOMLPROC)VAR_7("wglSwapLayerBuffersMscOML");
 VAR_5 = (PFNWGLWAITFORMSCOMLPROC)VAR_7("wglWaitForMscOML");
 VAR_6 = (PFNWGLWAITFORSBCOMLPROC)VAR_7("wglWaitForSbcOML");
}
