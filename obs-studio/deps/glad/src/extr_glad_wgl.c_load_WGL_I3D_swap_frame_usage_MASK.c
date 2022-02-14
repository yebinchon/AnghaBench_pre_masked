
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNWGLQUERYFRAMETRACKINGI3DPROC ;
typedef scalar_t__ PFNWGLGETFRAMEUSAGEI3DPROC ;
typedef scalar_t__ PFNWGLENDFRAMETRACKINGI3DPROC ;
typedef scalar_t__ PFNWGLBEGINFRAMETRACKINGI3DPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_5) {
 if(!VAR_0) return;
 VAR_3 = (PFNWGLGETFRAMEUSAGEI3DPROC)VAR_5("wglGetFrameUsageI3D");
 VAR_1 = (PFNWGLBEGINFRAMETRACKINGI3DPROC)VAR_5("wglBeginFrameTrackingI3D");
 VAR_2 = (PFNWGLENDFRAMETRACKINGI3DPROC)VAR_5("wglEndFrameTrackingI3D");
 VAR_4 = (PFNWGLQUERYFRAMETRACKINGI3DPROC)VAR_5("wglQueryFrameTrackingI3D");
}
