
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLISNAMEAMDPROC ;
typedef scalar_t__ PFNGLGENNAMESAMDPROC ;
typedef scalar_t__ PFNGLDELETENAMESAMDPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_4) {
 if(!VAR_0) return;
 VAR_2 = (PFNGLGENNAMESAMDPROC)VAR_4("glGenNamesAMD");
 VAR_1 = (PFNGLDELETENAMESAMDPROC)VAR_4("glDeleteNamesAMD");
 VAR_3 = (PFNGLISNAMEAMDPROC)VAR_4("glIsNameAMD");
}
