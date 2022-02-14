
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNWGLSETPBUFFERATTRIBARBPROC ;
typedef scalar_t__ PFNWGLRELEASETEXIMAGEARBPROC ;
typedef scalar_t__ PFNWGLBINDTEXIMAGEARBPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_4) {
 if(!VAR_0) return;
 VAR_1 = (PFNWGLBINDTEXIMAGEARBPROC)VAR_4("wglBindTexImageARB");
 VAR_2 = (PFNWGLRELEASETEXIMAGEARBPROC)VAR_4("wglReleaseTexImageARB");
 VAR_3 = (PFNWGLSETPBUFFERATTRIBARBPROC)VAR_4("wglSetPbufferAttribARB");
}
