
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNWGLSENDPBUFFERTOVIDEONVPROC ;
typedef scalar_t__ PFNWGLRELEASEVIDEOIMAGENVPROC ;
typedef scalar_t__ PFNWGLRELEASEVIDEODEVICENVPROC ;
typedef scalar_t__ PFNWGLGETVIDEOINFONVPROC ;
typedef scalar_t__ PFNWGLGETVIDEODEVICENVPROC ;
typedef scalar_t__ PFNWGLBINDVIDEOIMAGENVPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_7) {
 if(!VAR_0) return;
 VAR_2 = (PFNWGLGETVIDEODEVICENVPROC)VAR_7("wglGetVideoDeviceNV");
 VAR_4 = (PFNWGLRELEASEVIDEODEVICENVPROC)VAR_7("wglReleaseVideoDeviceNV");
 VAR_1 = (PFNWGLBINDVIDEOIMAGENVPROC)VAR_7("wglBindVideoImageNV");
 VAR_5 = (PFNWGLRELEASEVIDEOIMAGENVPROC)VAR_7("wglReleaseVideoImageNV");
 VAR_6 = (PFNWGLSENDPBUFFERTOVIDEONVPROC)VAR_7("wglSendPbufferToVideoNV");
 VAR_3 = (PFNWGLGETVIDEOINFONVPROC)VAR_7("wglGetVideoInfoNV");
}
