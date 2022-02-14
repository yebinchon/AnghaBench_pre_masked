
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLSEPARABLEFILTER2DEXTPROC ;
typedef scalar_t__ PFNGLGETSEPARABLEFILTEREXTPROC ;
typedef scalar_t__ PFNGLGETCONVOLUTIONPARAMETERIVEXTPROC ;
typedef scalar_t__ PFNGLGETCONVOLUTIONPARAMETERFVEXTPROC ;
typedef scalar_t__ PFNGLGETCONVOLUTIONFILTEREXTPROC ;
typedef scalar_t__ PFNGLCOPYCONVOLUTIONFILTER2DEXTPROC ;
typedef scalar_t__ PFNGLCOPYCONVOLUTIONFILTER1DEXTPROC ;
typedef scalar_t__ PFNGLCONVOLUTIONPARAMETERIVEXTPROC ;
typedef scalar_t__ PFNGLCONVOLUTIONPARAMETERIEXTPROC ;
typedef scalar_t__ PFNGLCONVOLUTIONPARAMETERFVEXTPROC ;
typedef scalar_t__ PFNGLCONVOLUTIONPARAMETERFEXTPROC ;
typedef scalar_t__ PFNGLCONVOLUTIONFILTER2DEXTPROC ;
typedef scalar_t__ PFNGLCONVOLUTIONFILTER1DEXTPROC ;
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
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_14) {
 if(!VAR_0) return;
 VAR_1 = (PFNGLCONVOLUTIONFILTER1DEXTPROC)VAR_14("glConvolutionFilter1DEXT");
 VAR_2 = (PFNGLCONVOLUTIONFILTER2DEXTPROC)VAR_14("glConvolutionFilter2DEXT");
 VAR_3 = (PFNGLCONVOLUTIONPARAMETERFEXTPROC)VAR_14("glConvolutionParameterfEXT");
 VAR_4 = (PFNGLCONVOLUTIONPARAMETERFVEXTPROC)VAR_14("glConvolutionParameterfvEXT");
 VAR_5 = (PFNGLCONVOLUTIONPARAMETERIEXTPROC)VAR_14("glConvolutionParameteriEXT");
 VAR_6 = (PFNGLCONVOLUTIONPARAMETERIVEXTPROC)VAR_14("glConvolutionParameterivEXT");
 VAR_7 = (PFNGLCOPYCONVOLUTIONFILTER1DEXTPROC)VAR_14("glCopyConvolutionFilter1DEXT");
 VAR_8 = (PFNGLCOPYCONVOLUTIONFILTER2DEXTPROC)VAR_14("glCopyConvolutionFilter2DEXT");
 VAR_9 = (PFNGLGETCONVOLUTIONFILTEREXTPROC)VAR_14("glGetConvolutionFilterEXT");
 VAR_10 = (PFNGLGETCONVOLUTIONPARAMETERFVEXTPROC)VAR_14("glGetConvolutionParameterfvEXT");
 VAR_11 = (PFNGLGETCONVOLUTIONPARAMETERIVEXTPROC)VAR_14("glGetConvolutionParameterivEXT");
 VAR_12 = (PFNGLGETSEPARABLEFILTEREXTPROC)VAR_14("glGetSeparableFilterEXT");
 VAR_13 = (PFNGLSEPARABLEFILTER2DEXTPROC)VAR_14("glSeparableFilter2DEXT");
}
