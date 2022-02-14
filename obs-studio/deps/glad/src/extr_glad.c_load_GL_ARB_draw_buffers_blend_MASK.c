
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLBLENDFUNCSEPARATEIARBPROC ;
typedef scalar_t__ PFNGLBLENDFUNCIARBPROC ;
typedef scalar_t__ PFNGLBLENDEQUATIONSEPARATEIARBPROC ;
typedef scalar_t__ PFNGLBLENDEQUATIONIARBPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_5) {
 if(!VAR_0) return;
 VAR_2 = (PFNGLBLENDEQUATIONIARBPROC)VAR_5("glBlendEquationiARB");
 VAR_1 = (PFNGLBLENDEQUATIONSEPARATEIARBPROC)VAR_5("glBlendEquationSeparateiARB");
 VAR_4 = (PFNGLBLENDFUNCIARBPROC)VAR_5("glBlendFunciARB");
 VAR_3 = (PFNGLBLENDFUNCSEPARATEIARBPROC)VAR_5("glBlendFuncSeparateiARB");
}
