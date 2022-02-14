
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLPATCHPARAMETERIPROC ;
typedef scalar_t__ PFNGLPATCHPARAMETERFVPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_3) {
 if(!VAR_0) return;
 VAR_2 = (PFNGLPATCHPARAMETERIPROC)VAR_3("glPatchParameteri");
 VAR_1 = (PFNGLPATCHPARAMETERFVPROC)VAR_3("glPatchParameterfv");
}
