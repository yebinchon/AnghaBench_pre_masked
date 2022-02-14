
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLXWAITFORSBCOMLPROC ;
typedef scalar_t__ PFNGLXWAITFORMSCOMLPROC ;
typedef scalar_t__ PFNGLXSWAPBUFFERSMSCOMLPROC ;
typedef scalar_t__ PFNGLXGETSYNCVALUESOMLPROC ;
typedef scalar_t__ PFNGLXGETMSCRATEOMLPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_6) {
 if(!VAR_0) return;
 VAR_2 = (PFNGLXGETSYNCVALUESOMLPROC)VAR_6("glXGetSyncValuesOML");
 VAR_1 = (PFNGLXGETMSCRATEOMLPROC)VAR_6("glXGetMscRateOML");
 VAR_3 = (PFNGLXSWAPBUFFERSMSCOMLPROC)VAR_6("glXSwapBuffersMscOML");
 VAR_4 = (PFNGLXWAITFORMSCOMLPROC)VAR_6("glXWaitForMscOML");
 VAR_5 = (PFNGLXWAITFORSBCOMLPROC)VAR_6("glXWaitForSbcOML");
}
