
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLXQUERYRENDERERSTRINGMESAPROC ;
typedef scalar_t__ PFNGLXQUERYRENDERERINTEGERMESAPROC ;
typedef scalar_t__ PFNGLXQUERYCURRENTRENDERERSTRINGMESAPROC ;
typedef scalar_t__ PFNGLXQUERYCURRENTRENDERERINTEGERMESAPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_5) {
 if(!VAR_0) return;
 VAR_1 = (PFNGLXQUERYCURRENTRENDERERINTEGERMESAPROC)VAR_5("glXQueryCurrentRendererIntegerMESA");
 VAR_2 = (PFNGLXQUERYCURRENTRENDERERSTRINGMESAPROC)VAR_5("glXQueryCurrentRendererStringMESA");
 VAR_3 = (PFNGLXQUERYRENDERERINTEGERMESAPROC)VAR_5("glXQueryRendererIntegerMESA");
 VAR_4 = (PFNGLXQUERYRENDERERSTRINGMESAPROC)VAR_5("glXQueryRendererStringMESA");
}
