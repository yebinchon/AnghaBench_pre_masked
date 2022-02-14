
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLXGETVISUALFROMFBCONFIGSGIXPROC ;
typedef scalar_t__ PFNGLXGETFBCONFIGFROMVISUALSGIXPROC ;
typedef scalar_t__ PFNGLXGETFBCONFIGATTRIBSGIXPROC ;
typedef scalar_t__ PFNGLXCREATEGLXPIXMAPWITHCONFIGSGIXPROC ;
typedef scalar_t__ PFNGLXCREATECONTEXTWITHCONFIGSGIXPROC ;
typedef scalar_t__ PFNGLXCHOOSEFBCONFIGSGIXPROC ;
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
 VAR_4 = (PFNGLXGETFBCONFIGATTRIBSGIXPROC)VAR_7("glXGetFBConfigAttribSGIX");
 VAR_1 = (PFNGLXCHOOSEFBCONFIGSGIXPROC)VAR_7("glXChooseFBConfigSGIX");
 VAR_3 = (PFNGLXCREATEGLXPIXMAPWITHCONFIGSGIXPROC)VAR_7("glXCreateGLXPixmapWithConfigSGIX");
 VAR_2 = (PFNGLXCREATECONTEXTWITHCONFIGSGIXPROC)VAR_7("glXCreateContextWithConfigSGIX");
 VAR_6 = (PFNGLXGETVISUALFROMFBCONFIGSGIXPROC)VAR_7("glXGetVisualFromFBConfigSGIX");
 VAR_5 = (PFNGLXGETFBCONFIGFROMVISUALSGIXPROC)VAR_7("glXGetFBConfigFromVisualSGIX");
}
