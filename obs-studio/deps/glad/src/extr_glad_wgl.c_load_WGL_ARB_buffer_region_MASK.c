
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNWGLSAVEBUFFERREGIONARBPROC ;
typedef scalar_t__ PFNWGLRESTOREBUFFERREGIONARBPROC ;
typedef scalar_t__ PFNWGLDELETEBUFFERREGIONARBPROC ;
typedef scalar_t__ PFNWGLCREATEBUFFERREGIONARBPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_5) {
 if(!VAR_0) return;
 VAR_1 = (PFNWGLCREATEBUFFERREGIONARBPROC)VAR_5("wglCreateBufferRegionARB");
 VAR_2 = (PFNWGLDELETEBUFFERREGIONARBPROC)VAR_5("wglDeleteBufferRegionARB");
 VAR_4 = (PFNWGLSAVEBUFFERREGIONARBPROC)VAR_5("wglSaveBufferRegionARB");
 VAR_3 = (PFNWGLRESTOREBUFFERREGIONARBPROC)VAR_5("wglRestoreBufferRegionARB");
}
