
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLDEPTHRANGEDNVPROC ;
typedef scalar_t__ PFNGLDEPTHBOUNDSDNVPROC ;
typedef scalar_t__ PFNGLCLEARDEPTHDNVPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_4) {
 if(!VAR_0) return;
 VAR_3 = (PFNGLDEPTHRANGEDNVPROC)VAR_4("glDepthRangedNV");
 VAR_1 = (PFNGLCLEARDEPTHDNVPROC)VAR_4("glClearDepthdNV");
 VAR_2 = (PFNGLDEPTHBOUNDSDNVPROC)VAR_4("glDepthBoundsdNV");
}
