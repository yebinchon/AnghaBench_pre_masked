
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLSAMPLERPARAMETERIVPROC ;
typedef scalar_t__ PFNGLSAMPLERPARAMETERIUIVPROC ;
typedef scalar_t__ PFNGLSAMPLERPARAMETERIPROC ;
typedef scalar_t__ PFNGLSAMPLERPARAMETERIIVPROC ;
typedef scalar_t__ PFNGLSAMPLERPARAMETERFVPROC ;
typedef scalar_t__ PFNGLSAMPLERPARAMETERFPROC ;
typedef scalar_t__ PFNGLISSAMPLERPROC ;
typedef scalar_t__ PFNGLGETSAMPLERPARAMETERIVPROC ;
typedef scalar_t__ PFNGLGETSAMPLERPARAMETERIUIVPROC ;
typedef scalar_t__ PFNGLGETSAMPLERPARAMETERIIVPROC ;
typedef scalar_t__ PFNGLGETSAMPLERPARAMETERFVPROC ;
typedef scalar_t__ PFNGLGENSAMPLERSPROC ;
typedef scalar_t__ PFNGLDELETESAMPLERSPROC ;
typedef scalar_t__ PFNGLBINDSAMPLERPROC ;
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
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_15) {
 if(!VAR_0) return;
 VAR_3 = (PFNGLGENSAMPLERSPROC)VAR_15("glGenSamplers");
 VAR_2 = (PFNGLDELETESAMPLERSPROC)VAR_15("glDeleteSamplers");
 VAR_8 = (PFNGLISSAMPLERPROC)VAR_15("glIsSampler");
 VAR_1 = (PFNGLBINDSAMPLERPROC)VAR_15("glBindSampler");
 VAR_13 = (PFNGLSAMPLERPARAMETERIPROC)VAR_15("glSamplerParameteri");
 VAR_14 = (PFNGLSAMPLERPARAMETERIVPROC)VAR_15("glSamplerParameteriv");
 VAR_11 = (PFNGLSAMPLERPARAMETERFPROC)VAR_15("glSamplerParameterf");
 VAR_12 = (PFNGLSAMPLERPARAMETERFVPROC)VAR_15("glSamplerParameterfv");
 VAR_9 = (PFNGLSAMPLERPARAMETERIIVPROC)VAR_15("glSamplerParameterIiv");
 VAR_10 = (PFNGLSAMPLERPARAMETERIUIVPROC)VAR_15("glSamplerParameterIuiv");
 VAR_7 = (PFNGLGETSAMPLERPARAMETERIVPROC)VAR_15("glGetSamplerParameteriv");
 VAR_4 = (PFNGLGETSAMPLERPARAMETERIIVPROC)VAR_15("glGetSamplerParameterIiv");
 VAR_6 = (PFNGLGETSAMPLERPARAMETERFVPROC)VAR_15("glGetSamplerParameterfv");
 VAR_5 = (PFNGLGETSAMPLERPARAMETERIUIVPROC)VAR_15("glGetSamplerParameterIuiv");
}
