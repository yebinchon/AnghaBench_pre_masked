
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLXSENDPBUFFERTOVIDEONVPROC ;
typedef scalar_t__ PFNGLXRELEASEVIDEOIMAGENVPROC ;
typedef scalar_t__ PFNGLXRELEASEVIDEODEVICENVPROC ;
typedef scalar_t__ PFNGLXGETVIDEOINFONVPROC ;
typedef scalar_t__ PFNGLXGETVIDEODEVICENVPROC ;
typedef scalar_t__ PFNGLXBINDVIDEOIMAGENVPROC ;
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
 VAR_2 = (PFNGLXGETVIDEODEVICENVPROC)VAR_7("glXGetVideoDeviceNV");
 VAR_4 = (PFNGLXRELEASEVIDEODEVICENVPROC)VAR_7("glXReleaseVideoDeviceNV");
 VAR_1 = (PFNGLXBINDVIDEOIMAGENVPROC)VAR_7("glXBindVideoImageNV");
 VAR_5 = (PFNGLXRELEASEVIDEOIMAGENVPROC)VAR_7("glXReleaseVideoImageNV");
 VAR_6 = (PFNGLXSENDPBUFFERTOVIDEONVPROC)VAR_7("glXSendPbufferToVideoNV");
 VAR_3 = (PFNGLXGETVIDEOINFONVPROC)VAR_7("glXGetVideoInfoNV");
}
