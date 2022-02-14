
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLCOPYTEXSUBIMAGE3DEXTPROC ;
typedef scalar_t__ PFNGLCOPYTEXSUBIMAGE2DEXTPROC ;
typedef scalar_t__ PFNGLCOPYTEXSUBIMAGE1DEXTPROC ;
typedef scalar_t__ PFNGLCOPYTEXIMAGE2DEXTPROC ;
typedef scalar_t__ PFNGLCOPYTEXIMAGE1DEXTPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_6) {
 if(!VAR_0) return;
 VAR_1 = (PFNGLCOPYTEXIMAGE1DEXTPROC)VAR_6("glCopyTexImage1DEXT");
 VAR_2 = (PFNGLCOPYTEXIMAGE2DEXTPROC)VAR_6("glCopyTexImage2DEXT");
 VAR_3 = (PFNGLCOPYTEXSUBIMAGE1DEXTPROC)VAR_6("glCopyTexSubImage1DEXT");
 VAR_4 = (PFNGLCOPYTEXSUBIMAGE2DEXTPROC)VAR_6("glCopyTexSubImage2DEXT");
 VAR_5 = (PFNGLCOPYTEXSUBIMAGE3DEXTPROC)VAR_6("glCopyTexSubImage3DEXT");
}
