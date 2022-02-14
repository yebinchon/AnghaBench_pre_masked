
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLXQUERYHYPERPIPENETWORKSGIXPROC ;
typedef scalar_t__ PFNGLXQUERYHYPERPIPECONFIGSGIXPROC ;
typedef scalar_t__ PFNGLXQUERYHYPERPIPEBESTATTRIBSGIXPROC ;
typedef scalar_t__ PFNGLXQUERYHYPERPIPEATTRIBSGIXPROC ;
typedef scalar_t__ PFNGLXHYPERPIPECONFIGSGIXPROC ;
typedef scalar_t__ PFNGLXHYPERPIPEATTRIBSGIXPROC ;
typedef scalar_t__ PFNGLXDESTROYHYPERPIPECONFIGSGIXPROC ;
typedef scalar_t__ PFNGLXBINDHYPERPIPESGIXPROC ;
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
 VAR_8 = (PFNGLXQUERYHYPERPIPENETWORKSGIXPROC)VAR_9("glXQueryHyperpipeNetworkSGIX");
 VAR_4 = (PFNGLXHYPERPIPECONFIGSGIXPROC)VAR_9("glXHyperpipeConfigSGIX");
 VAR_7 = (PFNGLXQUERYHYPERPIPECONFIGSGIXPROC)VAR_9("glXQueryHyperpipeConfigSGIX");
 VAR_2 = (PFNGLXDESTROYHYPERPIPECONFIGSGIXPROC)VAR_9("glXDestroyHyperpipeConfigSGIX");
 VAR_1 = (PFNGLXBINDHYPERPIPESGIXPROC)VAR_9("glXBindHyperpipeSGIX");
 VAR_6 = (PFNGLXQUERYHYPERPIPEBESTATTRIBSGIXPROC)VAR_9("glXQueryHyperpipeBestAttribSGIX");
 VAR_3 = (PFNGLXHYPERPIPEATTRIBSGIXPROC)VAR_9("glXHyperpipeAttribSGIX");
 VAR_5 = (PFNGLXQUERYHYPERPIPEATTRIBSGIXPROC)VAR_9("glXQueryHyperpipeAttribSGIX");
}
