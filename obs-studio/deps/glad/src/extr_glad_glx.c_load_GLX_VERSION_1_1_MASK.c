
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLXQUERYSERVERSTRINGPROC ;
typedef scalar_t__ PFNGLXQUERYEXTENSIONSSTRINGPROC ;
typedef scalar_t__ PFNGLXGETCLIENTSTRINGPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_4) {
 if(!VAR_0) return;
 VAR_2 = (PFNGLXQUERYEXTENSIONSSTRINGPROC)VAR_4("glXQueryExtensionsString");
 VAR_3 = (PFNGLXQUERYSERVERSTRINGPROC)VAR_4("glXQueryServerString");
 VAR_1 = (PFNGLXGETCLIENTSTRINGPROC)VAR_4("glXGetClientString");
}
