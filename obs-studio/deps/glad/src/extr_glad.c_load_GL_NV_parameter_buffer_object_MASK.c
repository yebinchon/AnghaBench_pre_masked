
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLPROGRAMBUFFERPARAMETERSIUIVNVPROC ;
typedef scalar_t__ PFNGLPROGRAMBUFFERPARAMETERSIIVNVPROC ;
typedef scalar_t__ PFNGLPROGRAMBUFFERPARAMETERSFVNVPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_4) {
 if(!VAR_0) return;
 VAR_3 = (PFNGLPROGRAMBUFFERPARAMETERSFVNVPROC)VAR_4("glProgramBufferParametersfvNV");
 VAR_1 = (PFNGLPROGRAMBUFFERPARAMETERSIIVNVPROC)VAR_4("glProgramBufferParametersIivNV");
 VAR_2 = (PFNGLPROGRAMBUFFERPARAMETERSIUIVNVPROC)VAR_4("glProgramBufferParametersIuivNV");
}
