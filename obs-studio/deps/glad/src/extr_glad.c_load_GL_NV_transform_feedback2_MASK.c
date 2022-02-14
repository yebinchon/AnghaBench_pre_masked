
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLRESUMETRANSFORMFEEDBACKNVPROC ;
typedef scalar_t__ PFNGLPAUSETRANSFORMFEEDBACKNVPROC ;
typedef scalar_t__ PFNGLISTRANSFORMFEEDBACKNVPROC ;
typedef scalar_t__ PFNGLGENTRANSFORMFEEDBACKSNVPROC ;
typedef scalar_t__ PFNGLDRAWTRANSFORMFEEDBACKNVPROC ;
typedef scalar_t__ PFNGLDELETETRANSFORMFEEDBACKSNVPROC ;
typedef scalar_t__ PFNGLBINDTRANSFORMFEEDBACKNVPROC ;
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
 VAR_1 = (PFNGLBINDTRANSFORMFEEDBACKNVPROC)VAR_8("glBindTransformFeedbackNV");
 VAR_2 = (PFNGLDELETETRANSFORMFEEDBACKSNVPROC)VAR_8("glDeleteTransformFeedbacksNV");
 VAR_4 = (PFNGLGENTRANSFORMFEEDBACKSNVPROC)VAR_8("glGenTransformFeedbacksNV");
 VAR_5 = (PFNGLISTRANSFORMFEEDBACKNVPROC)VAR_8("glIsTransformFeedbackNV");
 VAR_6 = (PFNGLPAUSETRANSFORMFEEDBACKNVPROC)VAR_8("glPauseTransformFeedbackNV");
 VAR_7 = (PFNGLRESUMETRANSFORMFEEDBACKNVPROC)VAR_8("glResumeTransformFeedbackNV");
 VAR_3 = (PFNGLDRAWTRANSFORMFEEDBACKNVPROC)VAR_8("glDrawTransformFeedbackNV");
}
