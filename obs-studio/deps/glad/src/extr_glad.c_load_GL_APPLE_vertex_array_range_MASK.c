
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLVERTEXARRAYRANGEAPPLEPROC ;
typedef scalar_t__ PFNGLVERTEXARRAYPARAMETERIAPPLEPROC ;
typedef scalar_t__ PFNGLFLUSHVERTEXARRAYRANGEAPPLEPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_4) {
 if(!VAR_0) return;
 VAR_3 = (PFNGLVERTEXARRAYRANGEAPPLEPROC)VAR_4("glVertexArrayRangeAPPLE");
 VAR_1 = (PFNGLFLUSHVERTEXARRAYRANGEAPPLEPROC)VAR_4("glFlushVertexArrayRangeAPPLE");
 VAR_2 = (PFNGLVERTEXARRAYPARAMETERIAPPLEPROC)VAR_4("glVertexArrayParameteriAPPLE");
}
