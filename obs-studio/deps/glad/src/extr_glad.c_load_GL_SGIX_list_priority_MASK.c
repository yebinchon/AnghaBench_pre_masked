
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLLISTPARAMETERIVSGIXPROC ;
typedef scalar_t__ PFNGLLISTPARAMETERISGIXPROC ;
typedef scalar_t__ PFNGLLISTPARAMETERFVSGIXPROC ;
typedef scalar_t__ PFNGLLISTPARAMETERFSGIXPROC ;
typedef scalar_t__ PFNGLGETLISTPARAMETERIVSGIXPROC ;
typedef scalar_t__ PFNGLGETLISTPARAMETERFVSGIXPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_7) {
 if(!VAR_0) return;
 VAR_1 = (PFNGLGETLISTPARAMETERFVSGIXPROC)VAR_7("glGetListParameterfvSGIX");
 VAR_2 = (PFNGLGETLISTPARAMETERIVSGIXPROC)VAR_7("glGetListParameterivSGIX");
 VAR_3 = (PFNGLLISTPARAMETERFSGIXPROC)VAR_7("glListParameterfSGIX");
 VAR_4 = (PFNGLLISTPARAMETERFVSGIXPROC)VAR_7("glListParameterfvSGIX");
 VAR_5 = (PFNGLLISTPARAMETERISGIXPROC)VAR_7("glListParameteriSGIX");
 VAR_6 = (PFNGLLISTPARAMETERIVSGIXPROC)VAR_7("glListParameterivSGIX");
}
