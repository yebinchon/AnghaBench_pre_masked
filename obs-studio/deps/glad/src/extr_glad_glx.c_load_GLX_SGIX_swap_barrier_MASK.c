
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLXQUERYMAXSWAPBARRIERSSGIXPROC ;
typedef scalar_t__ PFNGLXBINDSWAPBARRIERSGIXPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_3) {
 if(!VAR_0) return;
 VAR_1 = (PFNGLXBINDSWAPBARRIERSGIXPROC)VAR_3("glXBindSwapBarrierSGIX");
 VAR_2 = (PFNGLXQUERYMAXSWAPBARRIERSSGIXPROC)VAR_3("glXQueryMaxSwapBarriersSGIX");
}
