
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLISOCCLUSIONQUERYNVPROC ;
typedef scalar_t__ PFNGLGETOCCLUSIONQUERYUIVNVPROC ;
typedef scalar_t__ PFNGLGETOCCLUSIONQUERYIVNVPROC ;
typedef scalar_t__ PFNGLGENOCCLUSIONQUERIESNVPROC ;
typedef scalar_t__ PFNGLENDOCCLUSIONQUERYNVPROC ;
typedef scalar_t__ PFNGLDELETEOCCLUSIONQUERIESNVPROC ;
typedef scalar_t__ PFNGLBEGINOCCLUSIONQUERYNVPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_8) {
 if(!VAR_0) return;
 VAR_4 = (PFNGLGENOCCLUSIONQUERIESNVPROC)VAR_8("glGenOcclusionQueriesNV");
 VAR_2 = (PFNGLDELETEOCCLUSIONQUERIESNVPROC)VAR_8("glDeleteOcclusionQueriesNV");
 VAR_7 = (PFNGLISOCCLUSIONQUERYNVPROC)VAR_8("glIsOcclusionQueryNV");
 VAR_1 = (PFNGLBEGINOCCLUSIONQUERYNVPROC)VAR_8("glBeginOcclusionQueryNV");
 VAR_3 = (PFNGLENDOCCLUSIONQUERYNVPROC)VAR_8("glEndOcclusionQueryNV");
 VAR_5 = (PFNGLGETOCCLUSIONQUERYIVNVPROC)VAR_8("glGetOcclusionQueryivNV");
 VAR_6 = (PFNGLGETOCCLUSIONQUERYUIVNVPROC)VAR_8("glGetOcclusionQueryuivNV");
}
