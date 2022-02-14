
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLGETQUERYOBJECTUI64VEXTPROC ;
typedef scalar_t__ PFNGLGETQUERYOBJECTI64VEXTPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_3) {
 if(!VAR_0) return;
 VAR_1 = (PFNGLGETQUERYOBJECTI64VEXTPROC)VAR_3("glGetQueryObjecti64vEXT");
 VAR_2 = (PFNGLGETQUERYOBJECTUI64VEXTPROC)VAR_3("glGetQueryObjectui64vEXT");
}
