
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLTEXSTORAGE3DPROC ;
typedef scalar_t__ PFNGLTEXSTORAGE2DPROC ;
typedef scalar_t__ PFNGLTEXSTORAGE1DPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_4) {
 if(!VAR_0) return;
 VAR_1 = (PFNGLTEXSTORAGE1DPROC)VAR_4("glTexStorage1D");
 VAR_2 = (PFNGLTEXSTORAGE2DPROC)VAR_4("glTexStorage2D");
 VAR_3 = (PFNGLTEXSTORAGE3DPROC)VAR_4("glTexStorage3D");
}
