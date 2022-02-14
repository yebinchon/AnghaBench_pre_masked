
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLTESTOBJECTAPPLEPROC ;
typedef scalar_t__ PFNGLTESTFENCEAPPLEPROC ;
typedef scalar_t__ PFNGLSETFENCEAPPLEPROC ;
typedef scalar_t__ PFNGLISFENCEAPPLEPROC ;
typedef scalar_t__ PFNGLGENFENCESAPPLEPROC ;
typedef scalar_t__ PFNGLFINISHOBJECTAPPLEPROC ;
typedef scalar_t__ PFNGLFINISHFENCEAPPLEPROC ;
typedef scalar_t__ PFNGLDELETEFENCESAPPLEPROC ;
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

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_9) {
 if(!VAR_0) return;
 VAR_4 = (PFNGLGENFENCESAPPLEPROC)VAR_9("glGenFencesAPPLE");
 VAR_1 = (PFNGLDELETEFENCESAPPLEPROC)VAR_9("glDeleteFencesAPPLE");
 VAR_6 = (PFNGLSETFENCEAPPLEPROC)VAR_9("glSetFenceAPPLE");
 VAR_5 = (PFNGLISFENCEAPPLEPROC)VAR_9("glIsFenceAPPLE");
 VAR_7 = (PFNGLTESTFENCEAPPLEPROC)VAR_9("glTestFenceAPPLE");
 VAR_2 = (PFNGLFINISHFENCEAPPLEPROC)VAR_9("glFinishFenceAPPLE");
 VAR_8 = (PFNGLTESTOBJECTAPPLEPROC)VAR_9("glTestObjectAPPLE");
 VAR_3 = (PFNGLFINISHOBJECTAPPLEPROC)VAR_9("glFinishObjectAPPLE");
}
