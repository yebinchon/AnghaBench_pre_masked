
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLPROGRAMSUBROUTINEPARAMETERSUIVNVPROC ;
typedef scalar_t__ PFNGLGETPROGRAMSUBROUTINEPARAMETERUIVNVPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_3) {
 if(!VAR_0) return;
 VAR_2 = (PFNGLPROGRAMSUBROUTINEPARAMETERSUIVNVPROC)VAR_3("glProgramSubroutineParametersuivNV");
 VAR_1 = (PFNGLGETPROGRAMSUBROUTINEPARAMETERUIVNVPROC)VAR_3("glGetProgramSubroutineParameteruivNV");
}
