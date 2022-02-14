
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLXQUERYCHANNELRECTSGIXPROC ;
typedef scalar_t__ PFNGLXQUERYCHANNELDELTASSGIXPROC ;
typedef scalar_t__ PFNGLXCHANNELRECTSYNCSGIXPROC ;
typedef scalar_t__ PFNGLXCHANNELRECTSGIXPROC ;
typedef scalar_t__ PFNGLXBINDCHANNELTOWINDOWSGIXPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_6) {
 if(!VAR_0) return;
 VAR_1 = (PFNGLXBINDCHANNELTOWINDOWSGIXPROC)VAR_6("glXBindChannelToWindowSGIX");
 VAR_2 = (PFNGLXCHANNELRECTSGIXPROC)VAR_6("glXChannelRectSGIX");
 VAR_5 = (PFNGLXQUERYCHANNELRECTSGIXPROC)VAR_6("glXQueryChannelRectSGIX");
 VAR_4 = (PFNGLXQUERYCHANNELDELTASSGIXPROC)VAR_6("glXQueryChannelDeltasSGIX");
 VAR_3 = (PFNGLXCHANNELRECTSYNCSGIXPROC)VAR_6("glXChannelRectSyncSGIX");
}
