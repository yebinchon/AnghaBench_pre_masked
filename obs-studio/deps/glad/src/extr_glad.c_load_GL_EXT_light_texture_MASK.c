
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLTEXTUREMATERIALEXTPROC ;
typedef scalar_t__ PFNGLTEXTURELIGHTEXTPROC ;
typedef scalar_t__ PFNGLAPPLYTEXTUREEXTPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_4) {
 if(!VAR_0) return;
 VAR_1 = (PFNGLAPPLYTEXTUREEXTPROC)VAR_4("glApplyTextureEXT");
 VAR_2 = (PFNGLTEXTURELIGHTEXTPROC)VAR_4("glTextureLightEXT");
 VAR_3 = (PFNGLTEXTUREMATERIALEXTPROC)VAR_4("glTextureMaterialEXT");
}
