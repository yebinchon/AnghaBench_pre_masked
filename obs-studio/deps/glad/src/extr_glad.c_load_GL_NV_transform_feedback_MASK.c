
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLTRANSFORMFEEDBACKVARYINGSNVPROC ;
typedef scalar_t__ PFNGLTRANSFORMFEEDBACKSTREAMATTRIBSNVPROC ;
typedef scalar_t__ PFNGLTRANSFORMFEEDBACKATTRIBSNVPROC ;
typedef scalar_t__ PFNGLGETVARYINGLOCATIONNVPROC ;
typedef scalar_t__ PFNGLGETTRANSFORMFEEDBACKVARYINGNVPROC ;
typedef scalar_t__ PFNGLGETACTIVEVARYINGNVPROC ;
typedef scalar_t__ PFNGLENDTRANSFORMFEEDBACKNVPROC ;
typedef scalar_t__ PFNGLBINDBUFFERRANGENVPROC ;
typedef scalar_t__ PFNGLBINDBUFFEROFFSETNVPROC ;
typedef scalar_t__ PFNGLBINDBUFFERBASENVPROC ;
typedef scalar_t__ PFNGLBEGINTRANSFORMFEEDBACKNVPROC ;
typedef scalar_t__ PFNGLACTIVEVARYINGNVPROC ;
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

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_13) {
 if(!VAR_0) return;
 VAR_2 = (PFNGLBEGINTRANSFORMFEEDBACKNVPROC)VAR_13("glBeginTransformFeedbackNV");
 VAR_6 = (PFNGLENDTRANSFORMFEEDBACKNVPROC)VAR_13("glEndTransformFeedbackNV");
 VAR_10 = (PFNGLTRANSFORMFEEDBACKATTRIBSNVPROC)VAR_13("glTransformFeedbackAttribsNV");
 VAR_5 = (PFNGLBINDBUFFERRANGENVPROC)VAR_13("glBindBufferRangeNV");
 VAR_4 = (PFNGLBINDBUFFEROFFSETNVPROC)VAR_13("glBindBufferOffsetNV");
 VAR_3 = (PFNGLBINDBUFFERBASENVPROC)VAR_13("glBindBufferBaseNV");
 VAR_12 = (PFNGLTRANSFORMFEEDBACKVARYINGSNVPROC)VAR_13("glTransformFeedbackVaryingsNV");
 VAR_1 = (PFNGLACTIVEVARYINGNVPROC)VAR_13("glActiveVaryingNV");
 VAR_9 = (PFNGLGETVARYINGLOCATIONNVPROC)VAR_13("glGetVaryingLocationNV");
 VAR_7 = (PFNGLGETACTIVEVARYINGNVPROC)VAR_13("glGetActiveVaryingNV");
 VAR_8 = (PFNGLGETTRANSFORMFEEDBACKVARYINGNVPROC)VAR_13("glGetTransformFeedbackVaryingNV");
 VAR_11 = (PFNGLTRANSFORMFEEDBACKSTREAMATTRIBSNVPROC)VAR_13("glTransformFeedbackStreamAttribsNV");
}
