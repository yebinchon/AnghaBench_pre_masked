
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLLOADIDENTITYDEFORMATIONMAPSGIXPROC ;
typedef scalar_t__ PFNGLDEFORMSGIXPROC ;
typedef scalar_t__ PFNGLDEFORMATIONMAP3FSGIXPROC ;
typedef scalar_t__ PFNGLDEFORMATIONMAP3DSGIXPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_5) {
 if(!VAR_0) return;
 VAR_2 = (PFNGLDEFORMATIONMAP3DSGIXPROC)VAR_5("glDeformationMap3dSGIX");
 VAR_3 = (PFNGLDEFORMATIONMAP3FSGIXPROC)VAR_5("glDeformationMap3fSGIX");
 VAR_1 = (PFNGLDEFORMSGIXPROC)VAR_5("glDeformSGIX");
 VAR_4 = (PFNGLLOADIDENTITYDEFORMATIONMAPSGIXPROC)VAR_5("glLoadIdentityDeformationMapSGIX");
}
