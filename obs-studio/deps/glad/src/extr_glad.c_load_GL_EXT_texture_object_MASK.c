
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLPRIORITIZETEXTURESEXTPROC ;
typedef scalar_t__ PFNGLISTEXTUREEXTPROC ;
typedef scalar_t__ PFNGLGENTEXTURESEXTPROC ;
typedef scalar_t__ PFNGLDELETETEXTURESEXTPROC ;
typedef scalar_t__ PFNGLBINDTEXTUREEXTPROC ;
typedef scalar_t__ PFNGLARETEXTURESRESIDENTEXTPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_7) {
 if(!VAR_0) return;
 VAR_1 = (PFNGLARETEXTURESRESIDENTEXTPROC)VAR_7("glAreTexturesResidentEXT");
 VAR_2 = (PFNGLBINDTEXTUREEXTPROC)VAR_7("glBindTextureEXT");
 VAR_3 = (PFNGLDELETETEXTURESEXTPROC)VAR_7("glDeleteTexturesEXT");
 VAR_4 = (PFNGLGENTEXTURESEXTPROC)VAR_7("glGenTexturesEXT");
 VAR_5 = (PFNGLISTEXTUREEXTPROC)VAR_7("glIsTextureEXT");
 VAR_6 = (PFNGLPRIORITIZETEXTURESEXTPROC)VAR_7("glPrioritizeTexturesEXT");
}
