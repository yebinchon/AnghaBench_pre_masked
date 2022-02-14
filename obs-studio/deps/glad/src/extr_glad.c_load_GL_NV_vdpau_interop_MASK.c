
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLVDPAUUNREGISTERSURFACENVPROC ;
typedef scalar_t__ PFNGLVDPAUUNMAPSURFACESNVPROC ;
typedef scalar_t__ PFNGLVDPAUSURFACEACCESSNVPROC ;
typedef scalar_t__ PFNGLVDPAUREGISTERVIDEOSURFACENVPROC ;
typedef scalar_t__ PFNGLVDPAUREGISTEROUTPUTSURFACENVPROC ;
typedef scalar_t__ PFNGLVDPAUMAPSURFACESNVPROC ;
typedef scalar_t__ PFNGLVDPAUISSURFACENVPROC ;
typedef scalar_t__ PFNGLVDPAUINITNVPROC ;
typedef scalar_t__ PFNGLVDPAUGETSURFACEIVNVPROC ;
typedef scalar_t__ PFNGLVDPAUFININVPROC ;
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

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_11) {
 if(!VAR_0) return;
 VAR_3 = (PFNGLVDPAUINITNVPROC)VAR_11("glVDPAUInitNV");
 VAR_1 = (PFNGLVDPAUFININVPROC)VAR_11("glVDPAUFiniNV");
 VAR_7 = (PFNGLVDPAUREGISTERVIDEOSURFACENVPROC)VAR_11("glVDPAURegisterVideoSurfaceNV");
 VAR_6 = (PFNGLVDPAUREGISTEROUTPUTSURFACENVPROC)VAR_11("glVDPAURegisterOutputSurfaceNV");
 VAR_4 = (PFNGLVDPAUISSURFACENVPROC)VAR_11("glVDPAUIsSurfaceNV");
 VAR_10 = (PFNGLVDPAUUNREGISTERSURFACENVPROC)VAR_11("glVDPAUUnregisterSurfaceNV");
 VAR_2 = (PFNGLVDPAUGETSURFACEIVNVPROC)VAR_11("glVDPAUGetSurfaceivNV");
 VAR_8 = (PFNGLVDPAUSURFACEACCESSNVPROC)VAR_11("glVDPAUSurfaceAccessNV");
 VAR_5 = (PFNGLVDPAUMAPSURFACESNVPROC)VAR_11("glVDPAUMapSurfacesNV");
 VAR_9 = (PFNGLVDPAUUNMAPSURFACESNVPROC)VAR_11("glVDPAUUnmapSurfacesNV");
}
