
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLGETDEBUGMESSAGELOGAMDPROC ;
typedef scalar_t__ PFNGLDEBUGMESSAGEINSERTAMDPROC ;
typedef scalar_t__ PFNGLDEBUGMESSAGEENABLEAMDPROC ;
typedef scalar_t__ PFNGLDEBUGMESSAGECALLBACKAMDPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_5) {
 if(!VAR_0) return;
 VAR_2 = (PFNGLDEBUGMESSAGEENABLEAMDPROC)VAR_5("glDebugMessageEnableAMD");
 VAR_3 = (PFNGLDEBUGMESSAGEINSERTAMDPROC)VAR_5("glDebugMessageInsertAMD");
 VAR_1 = (PFNGLDEBUGMESSAGECALLBACKAMDPROC)VAR_5("glDebugMessageCallbackAMD");
 VAR_4 = (PFNGLGETDEBUGMESSAGELOGAMDPROC)VAR_5("glGetDebugMessageLogAMD");
}
