
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLPROGRAMPARAMETERIPROC ;
typedef scalar_t__ PFNGLPROGRAMBINARYPROC ;
typedef scalar_t__ PFNGLGETPROGRAMBINARYPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_4) {
 if(!VAR_0) return;
 VAR_1 = (PFNGLGETPROGRAMBINARYPROC)VAR_4("glGetProgramBinary");
 VAR_2 = (PFNGLPROGRAMBINARYPROC)VAR_4("glProgramBinary");
 VAR_3 = (PFNGLPROGRAMPARAMETERIPROC)VAR_4("glProgramParameteri");
}
