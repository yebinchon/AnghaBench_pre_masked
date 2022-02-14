
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLGETQUERYINDEXEDIVPROC ;
typedef scalar_t__ PFNGLENDQUERYINDEXEDPROC ;
typedef scalar_t__ PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC ;
typedef scalar_t__ PFNGLBEGINQUERYINDEXEDPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_5) {
 if(!VAR_0) return;
 VAR_2 = (PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC)VAR_5("glDrawTransformFeedbackStream");
 VAR_1 = (PFNGLBEGINQUERYINDEXEDPROC)VAR_5("glBeginQueryIndexed");
 VAR_3 = (PFNGLENDQUERYINDEXEDPROC)VAR_5("glEndQueryIndexed");
 VAR_4 = (PFNGLGETQUERYINDEXEDIVPROC)VAR_5("glGetQueryIndexediv");
}
