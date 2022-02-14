
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLMULTIDRAWRANGEELEMENTARRAYAPPLEPROC ;
typedef scalar_t__ PFNGLMULTIDRAWELEMENTARRAYAPPLEPROC ;
typedef scalar_t__ PFNGLELEMENTPOINTERAPPLEPROC ;
typedef scalar_t__ PFNGLDRAWRANGEELEMENTARRAYAPPLEPROC ;
typedef scalar_t__ PFNGLDRAWELEMENTARRAYAPPLEPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_6) {
 if(!VAR_0) return;
 VAR_3 = (PFNGLELEMENTPOINTERAPPLEPROC)VAR_6("glElementPointerAPPLE");
 VAR_1 = (PFNGLDRAWELEMENTARRAYAPPLEPROC)VAR_6("glDrawElementArrayAPPLE");
 VAR_2 = (PFNGLDRAWRANGEELEMENTARRAYAPPLEPROC)VAR_6("glDrawRangeElementArrayAPPLE");
 VAR_4 = (PFNGLMULTIDRAWELEMENTARRAYAPPLEPROC)VAR_6("glMultiDrawElementArrayAPPLE");
 VAR_5 = (PFNGLMULTIDRAWRANGEELEMENTARRAYAPPLEPROC)VAR_6("glMultiDrawRangeElementArrayAPPLE");
}
