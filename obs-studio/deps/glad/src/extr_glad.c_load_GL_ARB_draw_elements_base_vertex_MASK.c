
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC ;
typedef scalar_t__ PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC ;
typedef scalar_t__ PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC ;
typedef scalar_t__ PFNGLDRAWELEMENTSBASEVERTEXPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_5) {
 if(!VAR_0) return;
 VAR_1 = (PFNGLDRAWELEMENTSBASEVERTEXPROC)VAR_5("glDrawElementsBaseVertex");
 VAR_3 = (PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC)VAR_5("glDrawRangeElementsBaseVertex");
 VAR_2 = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC)VAR_5("glDrawElementsInstancedBaseVertex");
 VAR_4 = (PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC)VAR_5("glMultiDrawElementsBaseVertex");
}
