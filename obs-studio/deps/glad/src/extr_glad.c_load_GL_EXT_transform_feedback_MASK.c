
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLTRANSFORMFEEDBACKVARYINGSEXTPROC ;
typedef scalar_t__ PFNGLGETTRANSFORMFEEDBACKVARYINGEXTPROC ;
typedef scalar_t__ PFNGLENDTRANSFORMFEEDBACKEXTPROC ;
typedef scalar_t__ PFNGLBINDBUFFERRANGEEXTPROC ;
typedef scalar_t__ PFNGLBINDBUFFEROFFSETEXTPROC ;
typedef scalar_t__ PFNGLBINDBUFFERBASEEXTPROC ;
typedef scalar_t__ PFNGLBEGINTRANSFORMFEEDBACKEXTPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_8) {
 if(!VAR_0) return;
 VAR_1 = (PFNGLBEGINTRANSFORMFEEDBACKEXTPROC)VAR_8("glBeginTransformFeedbackEXT");
 VAR_5 = (PFNGLENDTRANSFORMFEEDBACKEXTPROC)VAR_8("glEndTransformFeedbackEXT");
 VAR_4 = (PFNGLBINDBUFFERRANGEEXTPROC)VAR_8("glBindBufferRangeEXT");
 VAR_3 = (PFNGLBINDBUFFEROFFSETEXTPROC)VAR_8("glBindBufferOffsetEXT");
 VAR_2 = (PFNGLBINDBUFFERBASEEXTPROC)VAR_8("glBindBufferBaseEXT");
 VAR_7 = (PFNGLTRANSFORMFEEDBACKVARYINGSEXTPROC)VAR_8("glTransformFeedbackVaryingsEXT");
 VAR_6 = (PFNGLGETTRANSFORMFEEDBACKVARYINGEXTPROC)VAR_8("glGetTransformFeedbackVaryingEXT");
}
