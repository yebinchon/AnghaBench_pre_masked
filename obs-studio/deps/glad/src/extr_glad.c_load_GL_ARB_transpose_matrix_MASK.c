
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLMULTTRANSPOSEMATRIXFARBPROC ;
typedef scalar_t__ PFNGLMULTTRANSPOSEMATRIXDARBPROC ;
typedef scalar_t__ PFNGLLOADTRANSPOSEMATRIXFARBPROC ;
typedef scalar_t__ PFNGLLOADTRANSPOSEMATRIXDARBPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_5) {
 if(!VAR_0) return;
 VAR_2 = (PFNGLLOADTRANSPOSEMATRIXFARBPROC)VAR_5("glLoadTransposeMatrixfARB");
 VAR_1 = (PFNGLLOADTRANSPOSEMATRIXDARBPROC)VAR_5("glLoadTransposeMatrixdARB");
 VAR_4 = (PFNGLMULTTRANSPOSEMATRIXFARBPROC)VAR_5("glMultTransposeMatrixfARB");
 VAR_3 = (PFNGLMULTTRANSPOSEMATRIXDARBPROC)VAR_5("glMultTransposeMatrixdARB");
}
