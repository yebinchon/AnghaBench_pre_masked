
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNWGLMAKEASSOCIATEDCONTEXTCURRENTAMDPROC ;
typedef scalar_t__ PFNWGLGETGPUINFOAMDPROC ;
typedef scalar_t__ PFNWGLGETGPUIDSAMDPROC ;
typedef scalar_t__ PFNWGLGETCURRENTASSOCIATEDCONTEXTAMDPROC ;
typedef scalar_t__ PFNWGLGETCONTEXTGPUIDAMDPROC ;
typedef scalar_t__ PFNWGLDELETEASSOCIATEDCONTEXTAMDPROC ;
typedef scalar_t__ PFNWGLCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC ;
typedef scalar_t__ PFNWGLCREATEASSOCIATEDCONTEXTAMDPROC ;
typedef scalar_t__ PFNWGLBLITCONTEXTFRAMEBUFFERAMDPROC ;
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

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_10) {
 if(!VAR_0) return;
 VAR_7 = (PFNWGLGETGPUIDSAMDPROC)VAR_10("wglGetGPUIDsAMD");
 VAR_8 = (PFNWGLGETGPUINFOAMDPROC)VAR_10("wglGetGPUInfoAMD");
 VAR_5 = (PFNWGLGETCONTEXTGPUIDAMDPROC)VAR_10("wglGetContextGPUIDAMD");
 VAR_2 = (PFNWGLCREATEASSOCIATEDCONTEXTAMDPROC)VAR_10("wglCreateAssociatedContextAMD");
 VAR_3 = (PFNWGLCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC)VAR_10("wglCreateAssociatedContextAttribsAMD");
 VAR_4 = (PFNWGLDELETEASSOCIATEDCONTEXTAMDPROC)VAR_10("wglDeleteAssociatedContextAMD");
 VAR_9 = (PFNWGLMAKEASSOCIATEDCONTEXTCURRENTAMDPROC)VAR_10("wglMakeAssociatedContextCurrentAMD");
 VAR_6 = (PFNWGLGETCURRENTASSOCIATEDCONTEXTAMDPROC)VAR_10("wglGetCurrentAssociatedContextAMD");
 VAR_1 = (PFNWGLBLITCONTEXTFRAMEBUFFERAMDPROC)VAR_10("wglBlitContextFramebufferAMD");
}
