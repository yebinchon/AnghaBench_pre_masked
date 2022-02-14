
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLXQUERYCONTEXTINFOEXTPROC ;
typedef scalar_t__ PFNGLXIMPORTCONTEXTEXTPROC ;
typedef scalar_t__ PFNGLXGETCURRENTDISPLAYEXTPROC ;
typedef scalar_t__ PFNGLXGETCONTEXTIDEXTPROC ;
typedef scalar_t__ PFNGLXFREECONTEXTEXTPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_6) {
 if(!VAR_0) return;
 VAR_3 = (PFNGLXGETCURRENTDISPLAYEXTPROC)VAR_6("glXGetCurrentDisplayEXT");
 VAR_5 = (PFNGLXQUERYCONTEXTINFOEXTPROC)VAR_6("glXQueryContextInfoEXT");
 VAR_2 = (PFNGLXGETCONTEXTIDEXTPROC)VAR_6("glXGetContextIDEXT");
 VAR_4 = (PFNGLXIMPORTCONTEXTEXTPROC)VAR_6("glXImportContextEXT");
 VAR_1 = (PFNGLXFREECONTEXTEXTPROC)VAR_6("glXFreeContextEXT");
}
