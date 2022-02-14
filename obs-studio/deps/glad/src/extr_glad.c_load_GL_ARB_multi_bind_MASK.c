
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLBINDVERTEXBUFFERSPROC ;
typedef scalar_t__ PFNGLBINDTEXTURESPROC ;
typedef scalar_t__ PFNGLBINDSAMPLERSPROC ;
typedef scalar_t__ PFNGLBINDIMAGETEXTURESPROC ;
typedef scalar_t__ PFNGLBINDBUFFERSRANGEPROC ;
typedef scalar_t__ PFNGLBINDBUFFERSBASEPROC ;
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
 VAR_1 = (PFNGLBINDBUFFERSBASEPROC)VAR_7("glBindBuffersBase");
 VAR_2 = (PFNGLBINDBUFFERSRANGEPROC)VAR_7("glBindBuffersRange");
 VAR_5 = (PFNGLBINDTEXTURESPROC)VAR_7("glBindTextures");
 VAR_4 = (PFNGLBINDSAMPLERSPROC)VAR_7("glBindSamplers");
 VAR_3 = (PFNGLBINDIMAGETEXTURESPROC)VAR_7("glBindImageTextures");
 VAR_6 = (PFNGLBINDVERTEXBUFFERSPROC)VAR_7("glBindVertexBuffers");
}
