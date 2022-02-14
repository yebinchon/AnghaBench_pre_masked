
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNWGLENUMGPUSNVPROC ;
typedef scalar_t__ PFNWGLENUMGPUSFROMAFFINITYDCNVPROC ;
typedef scalar_t__ PFNWGLENUMGPUDEVICESNVPROC ;
typedef scalar_t__ PFNWGLDELETEDCNVPROC ;
typedef scalar_t__ PFNWGLCREATEAFFINITYDCNVPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_6) {
 if(!VAR_0) return;
 VAR_5 = (PFNWGLENUMGPUSNVPROC)VAR_6("wglEnumGpusNV");
 VAR_3 = (PFNWGLENUMGPUDEVICESNVPROC)VAR_6("wglEnumGpuDevicesNV");
 VAR_1 = (PFNWGLCREATEAFFINITYDCNVPROC)VAR_6("wglCreateAffinityDCNV");
 VAR_4 = (PFNWGLENUMGPUSFROMAFFINITYDCNVPROC)VAR_6("wglEnumGpusFromAffinityDCNV");
 VAR_2 = (PFNWGLDELETEDCNVPROC)VAR_6("wglDeleteDCNV");
}
