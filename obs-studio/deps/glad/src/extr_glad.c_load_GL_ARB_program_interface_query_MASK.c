
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLGETPROGRAMRESOURCENAMEPROC ;
typedef scalar_t__ PFNGLGETPROGRAMRESOURCELOCATIONPROC ;
typedef scalar_t__ PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC ;
typedef scalar_t__ PFNGLGETPROGRAMRESOURCEIVPROC ;
typedef scalar_t__ PFNGLGETPROGRAMRESOURCEINDEXPROC ;
typedef scalar_t__ PFNGLGETPROGRAMINTERFACEIVPROC ;
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
 VAR_1 = (PFNGLGETPROGRAMINTERFACEIVPROC)VAR_7("glGetProgramInterfaceiv");
 VAR_2 = (PFNGLGETPROGRAMRESOURCEINDEXPROC)VAR_7("glGetProgramResourceIndex");
 VAR_5 = (PFNGLGETPROGRAMRESOURCENAMEPROC)VAR_7("glGetProgramResourceName");
 VAR_6 = (PFNGLGETPROGRAMRESOURCEIVPROC)VAR_7("glGetProgramResourceiv");
 VAR_3 = (PFNGLGETPROGRAMRESOURCELOCATIONPROC)VAR_7("glGetProgramResourceLocation");
 VAR_4 = (PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC)VAR_7("glGetProgramResourceLocationIndex");
}
