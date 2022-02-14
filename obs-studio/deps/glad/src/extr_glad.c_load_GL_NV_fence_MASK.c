
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLTESTFENCENVPROC ;
typedef scalar_t__ PFNGLSETFENCENVPROC ;
typedef scalar_t__ PFNGLISFENCENVPROC ;
typedef scalar_t__ PFNGLGETFENCEIVNVPROC ;
typedef scalar_t__ PFNGLGENFENCESNVPROC ;
typedef scalar_t__ PFNGLFINISHFENCENVPROC ;
typedef scalar_t__ PFNGLDELETEFENCESNVPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_8) {
 if(!VAR_0) return;
 VAR_1 = (PFNGLDELETEFENCESNVPROC)VAR_8("glDeleteFencesNV");
 VAR_3 = (PFNGLGENFENCESNVPROC)VAR_8("glGenFencesNV");
 VAR_5 = (PFNGLISFENCENVPROC)VAR_8("glIsFenceNV");
 VAR_7 = (PFNGLTESTFENCENVPROC)VAR_8("glTestFenceNV");
 VAR_4 = (PFNGLGETFENCEIVNVPROC)VAR_8("glGetFenceivNV");
 VAR_2 = (PFNGLFINISHFENCENVPROC)VAR_8("glFinishFenceNV");
 VAR_6 = (PFNGLSETFENCENVPROC)VAR_8("glSetFenceNV");
}
