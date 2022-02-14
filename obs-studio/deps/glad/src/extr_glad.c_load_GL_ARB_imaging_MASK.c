
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLSEPARABLEFILTER2DPROC ;
typedef scalar_t__ PFNGLRESETMINMAXPROC ;
typedef scalar_t__ PFNGLRESETHISTOGRAMPROC ;
typedef scalar_t__ PFNGLMINMAXPROC ;
typedef scalar_t__ PFNGLHISTOGRAMPROC ;
typedef scalar_t__ PFNGLGETSEPARABLEFILTERPROC ;
typedef scalar_t__ PFNGLGETMINMAXPROC ;
typedef scalar_t__ PFNGLGETMINMAXPARAMETERIVPROC ;
typedef scalar_t__ PFNGLGETMINMAXPARAMETERFVPROC ;
typedef scalar_t__ PFNGLGETHISTOGRAMPROC ;
typedef scalar_t__ PFNGLGETHISTOGRAMPARAMETERIVPROC ;
typedef scalar_t__ PFNGLGETHISTOGRAMPARAMETERFVPROC ;
typedef scalar_t__ PFNGLGETCONVOLUTIONPARAMETERIVPROC ;
typedef scalar_t__ PFNGLGETCONVOLUTIONPARAMETERFVPROC ;
typedef scalar_t__ PFNGLGETCONVOLUTIONFILTERPROC ;
typedef scalar_t__ PFNGLGETCOLORTABLEPROC ;
typedef scalar_t__ PFNGLGETCOLORTABLEPARAMETERIVPROC ;
typedef scalar_t__ PFNGLGETCOLORTABLEPARAMETERFVPROC ;
typedef scalar_t__ PFNGLCOPYCONVOLUTIONFILTER2DPROC ;
typedef scalar_t__ PFNGLCOPYCONVOLUTIONFILTER1DPROC ;
typedef scalar_t__ PFNGLCOPYCOLORTABLEPROC ;
typedef scalar_t__ PFNGLCOPYCOLORSUBTABLEPROC ;
typedef scalar_t__ PFNGLCONVOLUTIONPARAMETERIVPROC ;
typedef scalar_t__ PFNGLCONVOLUTIONPARAMETERIPROC ;
typedef scalar_t__ PFNGLCONVOLUTIONPARAMETERFVPROC ;
typedef scalar_t__ PFNGLCONVOLUTIONPARAMETERFPROC ;
typedef scalar_t__ PFNGLCONVOLUTIONFILTER2DPROC ;
typedef scalar_t__ PFNGLCONVOLUTIONFILTER1DPROC ;
typedef scalar_t__ PFNGLCOLORTABLEPROC ;
typedef scalar_t__ PFNGLCOLORTABLEPARAMETERIVPROC ;
typedef scalar_t__ PFNGLCOLORTABLEPARAMETERFVPROC ;
typedef scalar_t__ PFNGLCOLORSUBTABLEPROC ;
typedef scalar_t__ PFNGLBLENDEQUATIONPROC ;
typedef scalar_t__ PFNGLBLENDCOLORPROC ;
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
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_35) {
 if(!VAR_0) return;
 VAR_1 = (PFNGLBLENDCOLORPROC)VAR_35("glBlendColor");
 VAR_2 = (PFNGLBLENDEQUATIONPROC)VAR_35("glBlendEquation");
 VAR_4 = (PFNGLCOLORTABLEPROC)VAR_35("glColorTable");
 VAR_5 = (PFNGLCOLORTABLEPARAMETERFVPROC)VAR_35("glColorTableParameterfv");
 VAR_6 = (PFNGLCOLORTABLEPARAMETERIVPROC)VAR_35("glColorTableParameteriv");
 VAR_14 = (PFNGLCOPYCOLORTABLEPROC)VAR_35("glCopyColorTable");
 VAR_17 = (PFNGLGETCOLORTABLEPROC)VAR_35("glGetColorTable");
 VAR_18 = (PFNGLGETCOLORTABLEPARAMETERFVPROC)VAR_35("glGetColorTableParameterfv");
 VAR_19 = (PFNGLGETCOLORTABLEPARAMETERIVPROC)VAR_35("glGetColorTableParameteriv");
 VAR_3 = (PFNGLCOLORSUBTABLEPROC)VAR_35("glColorSubTable");
 VAR_13 = (PFNGLCOPYCOLORSUBTABLEPROC)VAR_35("glCopyColorSubTable");
 VAR_7 = (PFNGLCONVOLUTIONFILTER1DPROC)VAR_35("glConvolutionFilter1D");
 VAR_8 = (PFNGLCONVOLUTIONFILTER2DPROC)VAR_35("glConvolutionFilter2D");
 VAR_9 = (PFNGLCONVOLUTIONPARAMETERFPROC)VAR_35("glConvolutionParameterf");
 VAR_10 = (PFNGLCONVOLUTIONPARAMETERFVPROC)VAR_35("glConvolutionParameterfv");
 VAR_11 = (PFNGLCONVOLUTIONPARAMETERIPROC)VAR_35("glConvolutionParameteri");
 VAR_12 = (PFNGLCONVOLUTIONPARAMETERIVPROC)VAR_35("glConvolutionParameteriv");
 VAR_15 = (PFNGLCOPYCONVOLUTIONFILTER1DPROC)VAR_35("glCopyConvolutionFilter1D");
 VAR_16 = (PFNGLCOPYCONVOLUTIONFILTER2DPROC)VAR_35("glCopyConvolutionFilter2D");
 VAR_20 = (PFNGLGETCONVOLUTIONFILTERPROC)VAR_35("glGetConvolutionFilter");
 VAR_21 = (PFNGLGETCONVOLUTIONPARAMETERFVPROC)VAR_35("glGetConvolutionParameterfv");
 VAR_22 = (PFNGLGETCONVOLUTIONPARAMETERIVPROC)VAR_35("glGetConvolutionParameteriv");
 VAR_29 = (PFNGLGETSEPARABLEFILTERPROC)VAR_35("glGetSeparableFilter");
 VAR_34 = (PFNGLSEPARABLEFILTER2DPROC)VAR_35("glSeparableFilter2D");
 VAR_23 = (PFNGLGETHISTOGRAMPROC)VAR_35("glGetHistogram");
 VAR_24 = (PFNGLGETHISTOGRAMPARAMETERFVPROC)VAR_35("glGetHistogramParameterfv");
 VAR_25 = (PFNGLGETHISTOGRAMPARAMETERIVPROC)VAR_35("glGetHistogramParameteriv");
 VAR_26 = (PFNGLGETMINMAXPROC)VAR_35("glGetMinmax");
 VAR_27 = (PFNGLGETMINMAXPARAMETERFVPROC)VAR_35("glGetMinmaxParameterfv");
 VAR_28 = (PFNGLGETMINMAXPARAMETERIVPROC)VAR_35("glGetMinmaxParameteriv");
 VAR_30 = (PFNGLHISTOGRAMPROC)VAR_35("glHistogram");
 VAR_31 = (PFNGLMINMAXPROC)VAR_35("glMinmax");
 VAR_32 = (PFNGLRESETHISTOGRAMPROC)VAR_35("glResetHistogram");
 VAR_33 = (PFNGLRESETMINMAXPROC)VAR_35("glResetMinmax");
}
