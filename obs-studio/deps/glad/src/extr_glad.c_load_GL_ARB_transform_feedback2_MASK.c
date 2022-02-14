
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLRESUMETRANSFORMFEEDBACKPROC ;
typedef scalar_t__ PFNGLPAUSETRANSFORMFEEDBACKPROC ;
typedef scalar_t__ PFNGLISTRANSFORMFEEDBACKPROC ;
typedef scalar_t__ PFNGLGENTRANSFORMFEEDBACKSPROC ;
typedef scalar_t__ PFNGLDRAWTRANSFORMFEEDBACKPROC ;
typedef scalar_t__ PFNGLDELETETRANSFORMFEEDBACKSPROC ;
typedef scalar_t__ PFNGLBINDTRANSFORMFEEDBACKPROC ;
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
 VAR_1 = (PFNGLBINDTRANSFORMFEEDBACKPROC)VAR_8("glBindTransformFeedback");
 VAR_2 = (PFNGLDELETETRANSFORMFEEDBACKSPROC)VAR_8("glDeleteTransformFeedbacks");
 VAR_4 = (PFNGLGENTRANSFORMFEEDBACKSPROC)VAR_8("glGenTransformFeedbacks");
 VAR_5 = (PFNGLISTRANSFORMFEEDBACKPROC)VAR_8("glIsTransformFeedback");
 VAR_6 = (PFNGLPAUSETRANSFORMFEEDBACKPROC)VAR_8("glPauseTransformFeedback");
 VAR_7 = (PFNGLRESUMETRANSFORMFEEDBACKPROC)VAR_8("glResumeTransformFeedback");
 VAR_3 = (PFNGLDRAWTRANSFORMFEEDBACKPROC)VAR_8("glDrawTransformFeedback");
}
