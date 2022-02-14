
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLPUSHDEBUGGROUPPROC ;
typedef scalar_t__ PFNGLPUSHDEBUGGROUPKHRPROC ;
typedef scalar_t__ PFNGLPOPDEBUGGROUPPROC ;
typedef scalar_t__ PFNGLPOPDEBUGGROUPKHRPROC ;
typedef scalar_t__ PFNGLOBJECTPTRLABELPROC ;
typedef scalar_t__ PFNGLOBJECTPTRLABELKHRPROC ;
typedef scalar_t__ PFNGLOBJECTLABELPROC ;
typedef scalar_t__ PFNGLOBJECTLABELKHRPROC ;
typedef scalar_t__ PFNGLGETPOINTERVPROC ;
typedef scalar_t__ PFNGLGETPOINTERVKHRPROC ;
typedef scalar_t__ PFNGLGETOBJECTPTRLABELPROC ;
typedef scalar_t__ PFNGLGETOBJECTPTRLABELKHRPROC ;
typedef scalar_t__ PFNGLGETOBJECTLABELPROC ;
typedef scalar_t__ PFNGLGETOBJECTLABELKHRPROC ;
typedef scalar_t__ PFNGLGETDEBUGMESSAGELOGPROC ;
typedef scalar_t__ PFNGLGETDEBUGMESSAGELOGKHRPROC ;
typedef scalar_t__ PFNGLDEBUGMESSAGEINSERTPROC ;
typedef scalar_t__ PFNGLDEBUGMESSAGEINSERTKHRPROC ;
typedef scalar_t__ PFNGLDEBUGMESSAGECONTROLPROC ;
typedef scalar_t__ PFNGLDEBUGMESSAGECONTROLKHRPROC ;
typedef scalar_t__ PFNGLDEBUGMESSAGECALLBACKPROC ;
typedef scalar_t__ PFNGLDEBUGMESSAGECALLBACKKHRPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_23) {
 if(!VAR_0) return;
 VAR_3 = (PFNGLDEBUGMESSAGECONTROLPROC)VAR_23("glDebugMessageControl");
 VAR_5 = (PFNGLDEBUGMESSAGEINSERTPROC)VAR_23("glDebugMessageInsert");
 VAR_1 = (PFNGLDEBUGMESSAGECALLBACKPROC)VAR_23("glDebugMessageCallback");
 VAR_7 = (PFNGLGETDEBUGMESSAGELOGPROC)VAR_23("glGetDebugMessageLog");
 VAR_21 = (PFNGLPUSHDEBUGGROUPPROC)VAR_23("glPushDebugGroup");
 VAR_19 = (PFNGLPOPDEBUGGROUPPROC)VAR_23("glPopDebugGroup");
 VAR_15 = (PFNGLOBJECTLABELPROC)VAR_23("glObjectLabel");
 VAR_9 = (PFNGLGETOBJECTLABELPROC)VAR_23("glGetObjectLabel");
 VAR_17 = (PFNGLOBJECTPTRLABELPROC)VAR_23("glObjectPtrLabel");
 VAR_11 = (PFNGLGETOBJECTPTRLABELPROC)VAR_23("glGetObjectPtrLabel");
 VAR_13 = (PFNGLGETPOINTERVPROC)VAR_23("glGetPointerv");
 VAR_4 = (PFNGLDEBUGMESSAGECONTROLKHRPROC)VAR_23("glDebugMessageControlKHR");
 VAR_6 = (PFNGLDEBUGMESSAGEINSERTKHRPROC)VAR_23("glDebugMessageInsertKHR");
 VAR_2 = (PFNGLDEBUGMESSAGECALLBACKKHRPROC)VAR_23("glDebugMessageCallbackKHR");
 VAR_8 = (PFNGLGETDEBUGMESSAGELOGKHRPROC)VAR_23("glGetDebugMessageLogKHR");
 VAR_22 = (PFNGLPUSHDEBUGGROUPKHRPROC)VAR_23("glPushDebugGroupKHR");
 VAR_20 = (PFNGLPOPDEBUGGROUPKHRPROC)VAR_23("glPopDebugGroupKHR");
 VAR_16 = (PFNGLOBJECTLABELKHRPROC)VAR_23("glObjectLabelKHR");
 VAR_10 = (PFNGLGETOBJECTLABELKHRPROC)VAR_23("glGetObjectLabelKHR");
 VAR_18 = (PFNGLOBJECTPTRLABELKHRPROC)VAR_23("glObjectPtrLabelKHR");
 VAR_12 = (PFNGLGETOBJECTPTRLABELKHRPROC)VAR_23("glGetObjectPtrLabelKHR");
 VAR_14 = (PFNGLGETPOINTERVKHRPROC)VAR_23("glGetPointervKHR");
}
