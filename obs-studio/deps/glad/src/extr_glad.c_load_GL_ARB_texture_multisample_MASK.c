
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLTEXIMAGE3DMULTISAMPLEPROC ;
typedef scalar_t__ PFNGLTEXIMAGE2DMULTISAMPLEPROC ;
typedef scalar_t__ PFNGLSAMPLEMASKIPROC ;
typedef scalar_t__ PFNGLGETMULTISAMPLEFVPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_5) {
 if(!VAR_0) return;
 VAR_3 = (PFNGLTEXIMAGE2DMULTISAMPLEPROC)VAR_5("glTexImage2DMultisample");
 VAR_4 = (PFNGLTEXIMAGE3DMULTISAMPLEPROC)VAR_5("glTexImage3DMultisample");
 VAR_1 = (PFNGLGETMULTISAMPLEFVPROC)VAR_5("glGetMultisamplefv");
 VAR_2 = (PFNGLSAMPLEMASKIPROC)VAR_5("glSampleMaski");
}
