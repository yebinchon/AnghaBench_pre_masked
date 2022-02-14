
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNWGLRESETFRAMECOUNTNVPROC ;
typedef scalar_t__ PFNWGLQUERYSWAPGROUPNVPROC ;
typedef scalar_t__ PFNWGLQUERYMAXSWAPGROUPSNVPROC ;
typedef scalar_t__ PFNWGLQUERYFRAMECOUNTNVPROC ;
typedef scalar_t__ PFNWGLJOINSWAPGROUPNVPROC ;
typedef scalar_t__ PFNWGLBINDSWAPBARRIERNVPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_7) {
 if(!VAR_0) return;
 VAR_2 = (PFNWGLJOINSWAPGROUPNVPROC)VAR_7("wglJoinSwapGroupNV");
 VAR_1 = (PFNWGLBINDSWAPBARRIERNVPROC)VAR_7("wglBindSwapBarrierNV");
 VAR_5 = (PFNWGLQUERYSWAPGROUPNVPROC)VAR_7("wglQuerySwapGroupNV");
 VAR_4 = (PFNWGLQUERYMAXSWAPGROUPSNVPROC)VAR_7("wglQueryMaxSwapGroupsNV");
 VAR_3 = (PFNWGLQUERYFRAMECOUNTNVPROC)VAR_7("wglQueryFrameCountNV");
 VAR_6 = (PFNWGLRESETFRAMECOUNTNVPROC)VAR_7("wglResetFrameCountNV");
}
