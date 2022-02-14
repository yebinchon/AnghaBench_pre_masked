
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLWAITSYNCPROC ;
typedef scalar_t__ PFNGLISSYNCPROC ;
typedef scalar_t__ PFNGLGETSYNCIVPROC ;
typedef scalar_t__ PFNGLGETINTEGER64VPROC ;
typedef scalar_t__ PFNGLFENCESYNCPROC ;
typedef scalar_t__ PFNGLDELETESYNCPROC ;
typedef scalar_t__ PFNGLCLIENTWAITSYNCPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_8) {
 if(!VAR_0) return;
 VAR_3 = (PFNGLFENCESYNCPROC)VAR_8("glFenceSync");
 VAR_6 = (PFNGLISSYNCPROC)VAR_8("glIsSync");
 VAR_2 = (PFNGLDELETESYNCPROC)VAR_8("glDeleteSync");
 VAR_1 = (PFNGLCLIENTWAITSYNCPROC)VAR_8("glClientWaitSync");
 VAR_7 = (PFNGLWAITSYNCPROC)VAR_8("glWaitSync");
 VAR_4 = (PFNGLGETINTEGER64VPROC)VAR_8("glGetInteger64v");
 VAR_5 = (PFNGLGETSYNCIVPROC)VAR_8("glGetSynciv");
}
