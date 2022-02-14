
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLPROGRAMNAMEDPARAMETER4FVNVPROC ;
typedef scalar_t__ PFNGLPROGRAMNAMEDPARAMETER4FNVPROC ;
typedef scalar_t__ PFNGLPROGRAMNAMEDPARAMETER4DVNVPROC ;
typedef scalar_t__ PFNGLPROGRAMNAMEDPARAMETER4DNVPROC ;
typedef scalar_t__ PFNGLGETPROGRAMNAMEDPARAMETERFVNVPROC ;
typedef scalar_t__ PFNGLGETPROGRAMNAMEDPARAMETERDVNVPROC ;
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
 VAR_5 = (PFNGLPROGRAMNAMEDPARAMETER4FNVPROC)VAR_7("glProgramNamedParameter4fNV");
 VAR_6 = (PFNGLPROGRAMNAMEDPARAMETER4FVNVPROC)VAR_7("glProgramNamedParameter4fvNV");
 VAR_3 = (PFNGLPROGRAMNAMEDPARAMETER4DNVPROC)VAR_7("glProgramNamedParameter4dNV");
 VAR_4 = (PFNGLPROGRAMNAMEDPARAMETER4DVNVPROC)VAR_7("glProgramNamedParameter4dvNV");
 VAR_2 = (PFNGLGETPROGRAMNAMEDPARAMETERFVNVPROC)VAR_7("glGetProgramNamedParameterfvNV");
 VAR_1 = (PFNGLGETPROGRAMNAMEDPARAMETERDVNVPROC)VAR_7("glGetProgramNamedParameterdvNV");
}
