
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLBLENDFUNCSEPARATEINDEXEDAMDPROC ;
typedef scalar_t__ PFNGLBLENDFUNCINDEXEDAMDPROC ;
typedef scalar_t__ PFNGLBLENDEQUATIONSEPARATEINDEXEDAMDPROC ;
typedef scalar_t__ PFNGLBLENDEQUATIONINDEXEDAMDPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_5) {
 if(!VAR_0) return;
 VAR_3 = (PFNGLBLENDFUNCINDEXEDAMDPROC)VAR_5("glBlendFuncIndexedAMD");
 VAR_4 = (PFNGLBLENDFUNCSEPARATEINDEXEDAMDPROC)VAR_5("glBlendFuncSeparateIndexedAMD");
 VAR_1 = (PFNGLBLENDEQUATIONINDEXEDAMDPROC)VAR_5("glBlendEquationIndexedAMD");
 VAR_2 = (PFNGLBLENDEQUATIONSEPARATEINDEXEDAMDPROC)VAR_5("glBlendEquationSeparateIndexedAMD");
}
