
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLGETFRAMEBUFFERPARAMETERIVPROC ;
typedef scalar_t__ PFNGLFRAMEBUFFERPARAMETERIPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_3) {
 if(!VAR_0) return;
 VAR_1 = (PFNGLFRAMEBUFFERPARAMETERIPROC)VAR_3("glFramebufferParameteri");
 VAR_2 = (PFNGLGETFRAMEBUFFERPARAMETERIVPROC)VAR_3("glGetFramebufferParameteriv");
}
