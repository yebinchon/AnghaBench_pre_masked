
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLTEXBUMPPARAMETERIVATIPROC ;
typedef scalar_t__ PFNGLTEXBUMPPARAMETERFVATIPROC ;
typedef scalar_t__ PFNGLGETTEXBUMPPARAMETERIVATIPROC ;
typedef scalar_t__ PFNGLGETTEXBUMPPARAMETERFVATIPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_5) {
 if(!VAR_0) return;
 VAR_4 = (PFNGLTEXBUMPPARAMETERIVATIPROC)VAR_5("glTexBumpParameterivATI");
 VAR_3 = (PFNGLTEXBUMPPARAMETERFVATIPROC)VAR_5("glTexBumpParameterfvATI");
 VAR_2 = (PFNGLGETTEXBUMPPARAMETERIVATIPROC)VAR_5("glGetTexBumpParameterivATI");
 VAR_1 = (PFNGLGETTEXBUMPPARAMETERFVATIPROC)VAR_5("glGetTexBumpParameterfvATI");
}
