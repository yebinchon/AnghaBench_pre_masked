
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLGETDEBUGMESSAGELOGARBPROC ;
typedef scalar_t__ PFNGLDEBUGMESSAGEINSERTARBPROC ;
typedef scalar_t__ PFNGLDEBUGMESSAGECONTROLARBPROC ;
typedef scalar_t__ PFNGLDEBUGMESSAGECALLBACKARBPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_5) {
 if(!VAR_0) return;
 VAR_2 = (PFNGLDEBUGMESSAGECONTROLARBPROC)VAR_5("glDebugMessageControlARB");
 VAR_3 = (PFNGLDEBUGMESSAGEINSERTARBPROC)VAR_5("glDebugMessageInsertARB");
 VAR_1 = (PFNGLDEBUGMESSAGECALLBACKARBPROC)VAR_5("glDebugMessageCallbackARB");
 VAR_4 = (PFNGLGETDEBUGMESSAGELOGARBPROC)VAR_5("glGetDebugMessageLogARB");
}
