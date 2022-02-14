
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLISVERTEXARRAYAPPLEPROC ;
typedef scalar_t__ PFNGLGENVERTEXARRAYSAPPLEPROC ;
typedef scalar_t__ PFNGLDELETEVERTEXARRAYSAPPLEPROC ;
typedef scalar_t__ PFNGLBINDVERTEXARRAYAPPLEPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_5) {
 if(!VAR_0) return;
 VAR_1 = (PFNGLBINDVERTEXARRAYAPPLEPROC)VAR_5("glBindVertexArrayAPPLE");
 VAR_2 = (PFNGLDELETEVERTEXARRAYSAPPLEPROC)VAR_5("glDeleteVertexArraysAPPLE");
 VAR_3 = (PFNGLGENVERTEXARRAYSAPPLEPROC)VAR_5("glGenVertexArraysAPPLE");
 VAR_4 = (PFNGLISVERTEXARRAYAPPLEPROC)VAR_5("glIsVertexArrayAPPLE");
}
