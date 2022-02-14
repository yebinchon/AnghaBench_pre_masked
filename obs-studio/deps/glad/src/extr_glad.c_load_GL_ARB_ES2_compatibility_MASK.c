
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLSHADERBINARYPROC ;
typedef scalar_t__ PFNGLRELEASESHADERCOMPILERPROC ;
typedef scalar_t__ PFNGLGETSHADERPRECISIONFORMATPROC ;
typedef scalar_t__ PFNGLDEPTHRANGEFPROC ;
typedef scalar_t__ PFNGLCLEARDEPTHFPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_6) {
 if(!VAR_0) return;
 VAR_4 = (PFNGLRELEASESHADERCOMPILERPROC)VAR_6("glReleaseShaderCompiler");
 VAR_5 = (PFNGLSHADERBINARYPROC)VAR_6("glShaderBinary");
 VAR_3 = (PFNGLGETSHADERPRECISIONFORMATPROC)VAR_6("glGetShaderPrecisionFormat");
 VAR_2 = (PFNGLDEPTHRANGEFPROC)VAR_6("glDepthRangef");
 VAR_1 = (PFNGLCLEARDEPTHFPROC)VAR_6("glClearDepthf");
}
