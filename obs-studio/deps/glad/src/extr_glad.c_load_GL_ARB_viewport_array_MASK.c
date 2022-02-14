
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLVIEWPORTINDEXEDFVPROC ;
typedef scalar_t__ PFNGLVIEWPORTINDEXEDFPROC ;
typedef scalar_t__ PFNGLVIEWPORTARRAYVPROC ;
typedef scalar_t__ PFNGLSCISSORINDEXEDVPROC ;
typedef scalar_t__ PFNGLSCISSORINDEXEDPROC ;
typedef scalar_t__ PFNGLSCISSORARRAYVPROC ;
typedef scalar_t__ PFNGLGETFLOATI_VPROC ;
typedef scalar_t__ PFNGLGETDOUBLEI_VPROC ;
typedef scalar_t__ PFNGLDEPTHRANGEINDEXEDPROC ;
typedef scalar_t__ PFNGLDEPTHRANGEARRAYVPROC ;
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

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_11) {
 if(!VAR_0) return;
 VAR_8 = (PFNGLVIEWPORTARRAYVPROC)VAR_11("glViewportArrayv");
 VAR_9 = (PFNGLVIEWPORTINDEXEDFPROC)VAR_11("glViewportIndexedf");
 VAR_10 = (PFNGLVIEWPORTINDEXEDFVPROC)VAR_11("glViewportIndexedfv");
 VAR_5 = (PFNGLSCISSORARRAYVPROC)VAR_11("glScissorArrayv");
 VAR_6 = (PFNGLSCISSORINDEXEDPROC)VAR_11("glScissorIndexed");
 VAR_7 = (PFNGLSCISSORINDEXEDVPROC)VAR_11("glScissorIndexedv");
 VAR_1 = (PFNGLDEPTHRANGEARRAYVPROC)VAR_11("glDepthRangeArrayv");
 VAR_2 = (PFNGLDEPTHRANGEINDEXEDPROC)VAR_11("glDepthRangeIndexed");
 VAR_4 = (PFNGLGETFLOATI_VPROC)VAR_11("glGetFloati_v");
 VAR_3 = (PFNGLGETDOUBLEI_VPROC)VAR_11("glGetDoublei_v");
}
