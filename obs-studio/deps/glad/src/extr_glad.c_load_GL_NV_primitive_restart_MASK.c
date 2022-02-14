
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLPRIMITIVERESTARTNVPROC ;
typedef scalar_t__ PFNGLPRIMITIVERESTARTINDEXNVPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_3) {
 if(!VAR_0) return;
 VAR_2 = (PFNGLPRIMITIVERESTARTNVPROC)VAR_3("glPrimitiveRestartNV");
 VAR_1 = (PFNGLPRIMITIVERESTARTINDEXNVPROC)VAR_3("glPrimitiveRestartIndexNV");
}
