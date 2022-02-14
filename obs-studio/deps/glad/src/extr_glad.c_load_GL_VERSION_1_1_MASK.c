
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLTEXSUBIMAGE2DPROC ;
typedef scalar_t__ PFNGLTEXSUBIMAGE1DPROC ;
typedef scalar_t__ PFNGLPOLYGONOFFSETPROC ;
typedef scalar_t__ PFNGLISTEXTUREPROC ;
typedef scalar_t__ PFNGLGENTEXTURESPROC ;
typedef scalar_t__ PFNGLDRAWELEMENTSPROC ;
typedef scalar_t__ PFNGLDRAWARRAYSPROC ;
typedef scalar_t__ PFNGLDELETETEXTURESPROC ;
typedef scalar_t__ PFNGLCOPYTEXSUBIMAGE2DPROC ;
typedef scalar_t__ PFNGLCOPYTEXSUBIMAGE1DPROC ;
typedef scalar_t__ PFNGLCOPYTEXIMAGE2DPROC ;
typedef scalar_t__ PFNGLCOPYTEXIMAGE1DPROC ;
typedef scalar_t__ PFNGLBINDTEXTUREPROC ;
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
 VAR_7 = (PFNGLDRAWARRAYSPROC)VAR_14("glDrawArrays");
 VAR_8 = (PFNGLDRAWELEMENTSPROC)VAR_14("glDrawElements");
 VAR_11 = (PFNGLPOLYGONOFFSETPROC)VAR_14("glPolygonOffset");
 VAR_2 = (PFNGLCOPYTEXIMAGE1DPROC)VAR_14("glCopyTexImage1D");
 VAR_3 = (PFNGLCOPYTEXIMAGE2DPROC)VAR_14("glCopyTexImage2D");
 VAR_4 = (PFNGLCOPYTEXSUBIMAGE1DPROC)VAR_14("glCopyTexSubImage1D");
 VAR_5 = (PFNGLCOPYTEXSUBIMAGE2DPROC)VAR_14("glCopyTexSubImage2D");
 VAR_12 = (PFNGLTEXSUBIMAGE1DPROC)VAR_14("glTexSubImage1D");
 VAR_13 = (PFNGLTEXSUBIMAGE2DPROC)VAR_14("glTexSubImage2D");
 VAR_1 = (PFNGLBINDTEXTUREPROC)VAR_14("glBindTexture");
 VAR_6 = (PFNGLDELETETEXTURESPROC)VAR_14("glDeleteTextures");
 VAR_9 = (PFNGLGENTEXTURESPROC)VAR_14("glGenTextures");
 VAR_10 = (PFNGLISTEXTUREPROC)VAR_14("glIsTexture");
}
