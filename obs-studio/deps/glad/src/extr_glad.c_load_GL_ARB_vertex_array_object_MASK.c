
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLISVERTEXARRAYPROC ;
typedef scalar_t__ PFNGLGENVERTEXARRAYSPROC ;
typedef scalar_t__ PFNGLDELETEVERTEXARRAYSPROC ;
typedef scalar_t__ PFNGLBINDVERTEXARRAYPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_5) {
 if(!VAR_0) return;
 VAR_1 = (PFNGLBINDVERTEXARRAYPROC)VAR_5("glBindVertexArray");
 VAR_2 = (PFNGLDELETEVERTEXARRAYSPROC)VAR_5("glDeleteVertexArrays");
 VAR_3 = (PFNGLGENVERTEXARRAYSPROC)VAR_5("glGenVertexArrays");
 VAR_4 = (PFNGLISVERTEXARRAYPROC)VAR_5("glIsVertexArray");
}
