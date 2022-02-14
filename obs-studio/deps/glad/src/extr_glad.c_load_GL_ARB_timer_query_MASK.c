
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLQUERYCOUNTERPROC ;
typedef scalar_t__ PFNGLGETQUERYOBJECTUI64VPROC ;
typedef scalar_t__ PFNGLGETQUERYOBJECTI64VPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_4) {
 if(!VAR_0) return;
 VAR_3 = (PFNGLQUERYCOUNTERPROC)VAR_4("glQueryCounter");
 VAR_1 = (PFNGLGETQUERYOBJECTI64VPROC)VAR_4("glGetQueryObjecti64v");
 VAR_2 = (PFNGLGETQUERYOBJECTUI64VPROC)VAR_4("glGetQueryObjectui64v");
}
