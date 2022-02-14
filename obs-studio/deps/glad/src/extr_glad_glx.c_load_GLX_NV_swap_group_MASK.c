
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLXRESETFRAMECOUNTNVPROC ;
typedef scalar_t__ PFNGLXQUERYSWAPGROUPNVPROC ;
typedef scalar_t__ PFNGLXQUERYMAXSWAPGROUPSNVPROC ;
typedef scalar_t__ PFNGLXQUERYFRAMECOUNTNVPROC ;
typedef scalar_t__ PFNGLXJOINSWAPGROUPNVPROC ;
typedef scalar_t__ PFNGLXBINDSWAPBARRIERNVPROC ;
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
 VAR_2 = (PFNGLXJOINSWAPGROUPNVPROC)VAR_7("glXJoinSwapGroupNV");
 VAR_1 = (PFNGLXBINDSWAPBARRIERNVPROC)VAR_7("glXBindSwapBarrierNV");
 VAR_5 = (PFNGLXQUERYSWAPGROUPNVPROC)VAR_7("glXQuerySwapGroupNV");
 VAR_4 = (PFNGLXQUERYMAXSWAPGROUPSNVPROC)VAR_7("glXQueryMaxSwapGroupsNV");
 VAR_3 = (PFNGLXQUERYFRAMECOUNTNVPROC)VAR_7("glXQueryFrameCountNV");
 VAR_6 = (PFNGLXRESETFRAMECOUNTNVPROC)VAR_7("glXResetFrameCountNV");
}
