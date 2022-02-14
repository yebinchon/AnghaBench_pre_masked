
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLCLEARTEXSUBIMAGEPROC ;
typedef scalar_t__ PFNGLCLEARTEXIMAGEPROC ;
typedef scalar_t__ PFNGLBUFFERSTORAGEPROC ;
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
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_10) {
 if(!VAR_0) return;
 VAR_7 = (PFNGLBUFFERSTORAGEPROC)VAR_10("glBufferStorage");
 VAR_8 = (PFNGLCLEARTEXIMAGEPROC)VAR_10("glClearTexImage");
 VAR_9 = (PFNGLCLEARTEXSUBIMAGEPROC)VAR_10("glClearTexSubImage");
 VAR_1 = (PFNGLBINDBUFFERSBASEPROC)VAR_10("glBindBuffersBase");
 VAR_2 = (PFNGLBINDBUFFERSRANGEPROC)VAR_10("glBindBuffersRange");
 VAR_5 = (PFNGLBINDTEXTURESPROC)VAR_10("glBindTextures");
 VAR_4 = (PFNGLBINDSAMPLERSPROC)VAR_10("glBindSamplers");
 VAR_3 = (PFNGLBINDIMAGETEXTURESPROC)VAR_10("glBindImageTextures");
 VAR_6 = (PFNGLBINDVERTEXBUFFERSPROC)VAR_10("glBindVertexBuffers");
}
