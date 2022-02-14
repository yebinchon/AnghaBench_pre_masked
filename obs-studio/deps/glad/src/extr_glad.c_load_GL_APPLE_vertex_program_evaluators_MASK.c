
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLMAPVERTEXATTRIB2FAPPLEPROC ;
typedef scalar_t__ PFNGLMAPVERTEXATTRIB2DAPPLEPROC ;
typedef scalar_t__ PFNGLMAPVERTEXATTRIB1FAPPLEPROC ;
typedef scalar_t__ PFNGLMAPVERTEXATTRIB1DAPPLEPROC ;
typedef scalar_t__ PFNGLISVERTEXATTRIBENABLEDAPPLEPROC ;
typedef scalar_t__ PFNGLENABLEVERTEXATTRIBAPPLEPROC ;
typedef scalar_t__ PFNGLDISABLEVERTEXATTRIBAPPLEPROC ;
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
 VAR_2 = (PFNGLENABLEVERTEXATTRIBAPPLEPROC)VAR_8("glEnableVertexAttribAPPLE");
 VAR_1 = (PFNGLDISABLEVERTEXATTRIBAPPLEPROC)VAR_8("glDisableVertexAttribAPPLE");
 VAR_3 = (PFNGLISVERTEXATTRIBENABLEDAPPLEPROC)VAR_8("glIsVertexAttribEnabledAPPLE");
 VAR_4 = (PFNGLMAPVERTEXATTRIB1DAPPLEPROC)VAR_8("glMapVertexAttrib1dAPPLE");
 VAR_5 = (PFNGLMAPVERTEXATTRIB1FAPPLEPROC)VAR_8("glMapVertexAttrib1fAPPLE");
 VAR_6 = (PFNGLMAPVERTEXATTRIB2DAPPLEPROC)VAR_8("glMapVertexAttrib2dAPPLE");
 VAR_7 = (PFNGLMAPVERTEXATTRIB2FAPPLEPROC)VAR_8("glMapVertexAttrib2fAPPLE");
}
