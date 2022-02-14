
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLUNMAPTEXTURE2DINTELPROC ;
typedef scalar_t__ PFNGLSYNCTEXTUREINTELPROC ;
typedef scalar_t__ PFNGLMAPTEXTURE2DINTELPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_4) {
 if(!VAR_0) return;
 VAR_2 = (PFNGLSYNCTEXTUREINTELPROC)VAR_4("glSyncTextureINTEL");
 VAR_3 = (PFNGLUNMAPTEXTURE2DINTELPROC)VAR_4("glUnmapTexture2DINTEL");
 VAR_1 = (PFNGLMAPTEXTURE2DINTELPROC)VAR_4("glMapTexture2DINTEL");
}
