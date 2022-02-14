
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLUNIFORMSUBROUTINESUIVPROC ;
typedef scalar_t__ PFNGLGETUNIFORMSUBROUTINEUIVPROC ;
typedef scalar_t__ PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC ;
typedef scalar_t__ PFNGLGETSUBROUTINEINDEXPROC ;
typedef scalar_t__ PFNGLGETPROGRAMSTAGEIVPROC ;
typedef scalar_t__ PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC ;
typedef scalar_t__ PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC ;
typedef scalar_t__ PFNGLGETACTIVESUBROUTINENAMEPROC ;
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

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_9) {
 if(!VAR_0) return;
 VAR_6 = (PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC)VAR_9("glGetSubroutineUniformLocation");
 VAR_5 = (PFNGLGETSUBROUTINEINDEXPROC)VAR_9("glGetSubroutineIndex");
 VAR_3 = (PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC)VAR_9("glGetActiveSubroutineUniformiv");
 VAR_2 = (PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC)VAR_9("glGetActiveSubroutineUniformName");
 VAR_1 = (PFNGLGETACTIVESUBROUTINENAMEPROC)VAR_9("glGetActiveSubroutineName");
 VAR_8 = (PFNGLUNIFORMSUBROUTINESUIVPROC)VAR_9("glUniformSubroutinesuiv");
 VAR_7 = (PFNGLGETUNIFORMSUBROUTINEUIVPROC)VAR_9("glGetUniformSubroutineuiv");
 VAR_4 = (PFNGLGETPROGRAMSTAGEIVPROC)VAR_9("glGetProgramStageiv");
}
