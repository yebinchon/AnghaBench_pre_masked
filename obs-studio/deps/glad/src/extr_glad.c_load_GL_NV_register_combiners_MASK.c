
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLGETFINALCOMBINERINPUTPARAMETERIVNVPROC ;
typedef scalar_t__ PFNGLGETFINALCOMBINERINPUTPARAMETERFVNVPROC ;
typedef scalar_t__ PFNGLGETCOMBINEROUTPUTPARAMETERIVNVPROC ;
typedef scalar_t__ PFNGLGETCOMBINEROUTPUTPARAMETERFVNVPROC ;
typedef scalar_t__ PFNGLGETCOMBINERINPUTPARAMETERIVNVPROC ;
typedef scalar_t__ PFNGLGETCOMBINERINPUTPARAMETERFVNVPROC ;
typedef scalar_t__ PFNGLFINALCOMBINERINPUTNVPROC ;
typedef scalar_t__ PFNGLCOMBINERPARAMETERIVNVPROC ;
typedef scalar_t__ PFNGLCOMBINERPARAMETERINVPROC ;
typedef scalar_t__ PFNGLCOMBINERPARAMETERFVNVPROC ;
typedef scalar_t__ PFNGLCOMBINERPARAMETERFNVPROC ;
typedef scalar_t__ PFNGLCOMBINEROUTPUTNVPROC ;
typedef scalar_t__ PFNGLCOMBINERINPUTNVPROC ;
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
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_14) {
 if(!VAR_0) return;
 VAR_4 = (PFNGLCOMBINERPARAMETERFVNVPROC)VAR_14("glCombinerParameterfvNV");
 VAR_3 = (PFNGLCOMBINERPARAMETERFNVPROC)VAR_14("glCombinerParameterfNV");
 VAR_6 = (PFNGLCOMBINERPARAMETERIVNVPROC)VAR_14("glCombinerParameterivNV");
 VAR_5 = (PFNGLCOMBINERPARAMETERINVPROC)VAR_14("glCombinerParameteriNV");
 VAR_1 = (PFNGLCOMBINERINPUTNVPROC)VAR_14("glCombinerInputNV");
 VAR_2 = (PFNGLCOMBINEROUTPUTNVPROC)VAR_14("glCombinerOutputNV");
 VAR_7 = (PFNGLFINALCOMBINERINPUTNVPROC)VAR_14("glFinalCombinerInputNV");
 VAR_8 = (PFNGLGETCOMBINERINPUTPARAMETERFVNVPROC)VAR_14("glGetCombinerInputParameterfvNV");
 VAR_9 = (PFNGLGETCOMBINERINPUTPARAMETERIVNVPROC)VAR_14("glGetCombinerInputParameterivNV");
 VAR_10 = (PFNGLGETCOMBINEROUTPUTPARAMETERFVNVPROC)VAR_14("glGetCombinerOutputParameterfvNV");
 VAR_11 = (PFNGLGETCOMBINEROUTPUTPARAMETERIVNVPROC)VAR_14("glGetCombinerOutputParameterivNV");
 VAR_12 = (PFNGLGETFINALCOMBINERINPUTPARAMETERFVNVPROC)VAR_14("glGetFinalCombinerInputParameterfvNV");
 VAR_13 = (PFNGLGETFINALCOMBINERINPUTPARAMETERIVNVPROC)VAR_14("glGetFinalCombinerInputParameterivNV");
}
