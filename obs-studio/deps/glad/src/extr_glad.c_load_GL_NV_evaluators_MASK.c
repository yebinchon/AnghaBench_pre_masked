
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLMAPPARAMETERIVNVPROC ;
typedef scalar_t__ PFNGLMAPPARAMETERFVNVPROC ;
typedef scalar_t__ PFNGLMAPCONTROLPOINTSNVPROC ;
typedef scalar_t__ PFNGLGETMAPPARAMETERIVNVPROC ;
typedef scalar_t__ PFNGLGETMAPPARAMETERFVNVPROC ;
typedef scalar_t__ PFNGLGETMAPCONTROLPOINTSNVPROC ;
typedef scalar_t__ PFNGLGETMAPATTRIBPARAMETERIVNVPROC ;
typedef scalar_t__ PFNGLGETMAPATTRIBPARAMETERFVNVPROC ;
typedef scalar_t__ PFNGLEVALMAPSNVPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_10) {
 if(!VAR_0) return;
 VAR_7 = (PFNGLMAPCONTROLPOINTSNVPROC)VAR_10("glMapControlPointsNV");
 VAR_9 = (PFNGLMAPPARAMETERIVNVPROC)VAR_10("glMapParameterivNV");
 VAR_8 = (PFNGLMAPPARAMETERFVNVPROC)VAR_10("glMapParameterfvNV");
 VAR_4 = (PFNGLGETMAPCONTROLPOINTSNVPROC)VAR_10("glGetMapControlPointsNV");
 VAR_6 = (PFNGLGETMAPPARAMETERIVNVPROC)VAR_10("glGetMapParameterivNV");
 VAR_5 = (PFNGLGETMAPPARAMETERFVNVPROC)VAR_10("glGetMapParameterfvNV");
 VAR_3 = (PFNGLGETMAPATTRIBPARAMETERIVNVPROC)VAR_10("glGetMapAttribParameterivNV");
 VAR_2 = (PFNGLGETMAPATTRIBPARAMETERFVNVPROC)VAR_10("glGetMapAttribParameterfvNV");
 VAR_1 = (PFNGLEVALMAPSNVPROC)VAR_10("glEvalMapsNV");
}
