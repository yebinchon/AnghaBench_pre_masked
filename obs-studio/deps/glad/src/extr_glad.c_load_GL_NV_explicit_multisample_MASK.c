
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLTEXRENDERBUFFERNVPROC ;
typedef scalar_t__ PFNGLSAMPLEMASKINDEXEDNVPROC ;
typedef scalar_t__ PFNGLGETMULTISAMPLEFVNVPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_4) {
 if(!VAR_0) return;
 VAR_1 = (PFNGLGETMULTISAMPLEFVNVPROC)VAR_4("glGetMultisamplefvNV");
 VAR_2 = (PFNGLSAMPLEMASKINDEXEDNVPROC)VAR_4("glSampleMaskIndexedNV");
 VAR_3 = (PFNGLTEXRENDERBUFFERNVPROC)VAR_4("glTexRenderbufferNV");
}
