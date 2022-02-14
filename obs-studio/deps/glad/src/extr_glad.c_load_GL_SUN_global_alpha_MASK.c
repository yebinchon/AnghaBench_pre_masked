
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLGLOBALALPHAFACTORUSSUNPROC ;
typedef scalar_t__ PFNGLGLOBALALPHAFACTORUISUNPROC ;
typedef scalar_t__ PFNGLGLOBALALPHAFACTORUBSUNPROC ;
typedef scalar_t__ PFNGLGLOBALALPHAFACTORSSUNPROC ;
typedef scalar_t__ PFNGLGLOBALALPHAFACTORISUNPROC ;
typedef scalar_t__ PFNGLGLOBALALPHAFACTORFSUNPROC ;
typedef scalar_t__ PFNGLGLOBALALPHAFACTORDSUNPROC ;
typedef scalar_t__ PFNGLGLOBALALPHAFACTORBSUNPROC ;
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
 VAR_1 = (PFNGLGLOBALALPHAFACTORBSUNPROC)VAR_9("glGlobalAlphaFactorbSUN");
 VAR_5 = (PFNGLGLOBALALPHAFACTORSSUNPROC)VAR_9("glGlobalAlphaFactorsSUN");
 VAR_4 = (PFNGLGLOBALALPHAFACTORISUNPROC)VAR_9("glGlobalAlphaFactoriSUN");
 VAR_3 = (PFNGLGLOBALALPHAFACTORFSUNPROC)VAR_9("glGlobalAlphaFactorfSUN");
 VAR_2 = (PFNGLGLOBALALPHAFACTORDSUNPROC)VAR_9("glGlobalAlphaFactordSUN");
 VAR_6 = (PFNGLGLOBALALPHAFACTORUBSUNPROC)VAR_9("glGlobalAlphaFactorubSUN");
 VAR_8 = (PFNGLGLOBALALPHAFACTORUSSUNPROC)VAR_9("glGlobalAlphaFactorusSUN");
 VAR_7 = (PFNGLGLOBALALPHAFACTORUISUNPROC)VAR_9("glGlobalAlphaFactoruiSUN");
}
