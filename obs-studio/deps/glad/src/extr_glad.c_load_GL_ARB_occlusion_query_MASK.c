
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLISQUERYARBPROC ;
typedef scalar_t__ PFNGLGETQUERYOBJECTUIVARBPROC ;
typedef scalar_t__ PFNGLGETQUERYOBJECTIVARBPROC ;
typedef scalar_t__ PFNGLGETQUERYIVARBPROC ;
typedef scalar_t__ PFNGLGENQUERIESARBPROC ;
typedef scalar_t__ PFNGLENDQUERYARBPROC ;
typedef scalar_t__ PFNGLDELETEQUERIESARBPROC ;
typedef scalar_t__ PFNGLBEGINQUERYARBPROC ;
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

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_9) {
 if(!VAR_0) return;
 VAR_4 = (PFNGLGENQUERIESARBPROC)VAR_9("glGenQueriesARB");
 VAR_2 = (PFNGLDELETEQUERIESARBPROC)VAR_9("glDeleteQueriesARB");
 VAR_8 = (PFNGLISQUERYARBPROC)VAR_9("glIsQueryARB");
 VAR_1 = (PFNGLBEGINQUERYARBPROC)VAR_9("glBeginQueryARB");
 VAR_3 = (PFNGLENDQUERYARBPROC)VAR_9("glEndQueryARB");
 VAR_7 = (PFNGLGETQUERYIVARBPROC)VAR_9("glGetQueryivARB");
 VAR_5 = (PFNGLGETQUERYOBJECTIVARBPROC)VAR_9("glGetQueryObjectivARB");
 VAR_6 = (PFNGLGETQUERYOBJECTUIVARBPROC)VAR_9("glGetQueryObjectuivARB");
}
