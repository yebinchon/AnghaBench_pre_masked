
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLPUSHGROUPMARKEREXTPROC ;
typedef scalar_t__ PFNGLPOPGROUPMARKEREXTPROC ;
typedef scalar_t__ PFNGLINSERTEVENTMARKEREXTPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_4) {
 if(!VAR_0) return;
 VAR_1 = (PFNGLINSERTEVENTMARKEREXTPROC)VAR_4("glInsertEventMarkerEXT");
 VAR_3 = (PFNGLPUSHGROUPMARKEREXTPROC)VAR_4("glPushGroupMarkerEXT");
 VAR_2 = (PFNGLPOPGROUPMARKEREXTPROC)VAR_4("glPopGroupMarkerEXT");
}
