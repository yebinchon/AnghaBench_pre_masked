
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLVERTEXPOINTEREXTPROC ;
typedef scalar_t__ PFNGLTEXCOORDPOINTEREXTPROC ;
typedef scalar_t__ PFNGLNORMALPOINTEREXTPROC ;
typedef scalar_t__ PFNGLINDEXPOINTEREXTPROC ;
typedef scalar_t__ PFNGLGETPOINTERVEXTPROC ;
typedef scalar_t__ PFNGLEDGEFLAGPOINTEREXTPROC ;
typedef scalar_t__ PFNGLDRAWARRAYSEXTPROC ;
typedef scalar_t__ PFNGLCOLORPOINTEREXTPROC ;
typedef scalar_t__ PFNGLARRAYELEMENTEXTPROC ;
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
 VAR_1 = (PFNGLARRAYELEMENTEXTPROC)VAR_10("glArrayElementEXT");
 VAR_2 = (PFNGLCOLORPOINTEREXTPROC)VAR_10("glColorPointerEXT");
 VAR_3 = (PFNGLDRAWARRAYSEXTPROC)VAR_10("glDrawArraysEXT");
 VAR_4 = (PFNGLEDGEFLAGPOINTEREXTPROC)VAR_10("glEdgeFlagPointerEXT");
 VAR_5 = (PFNGLGETPOINTERVEXTPROC)VAR_10("glGetPointervEXT");
 VAR_6 = (PFNGLINDEXPOINTEREXTPROC)VAR_10("glIndexPointerEXT");
 VAR_7 = (PFNGLNORMALPOINTEREXTPROC)VAR_10("glNormalPointerEXT");
 VAR_8 = (PFNGLTEXCOORDPOINTEREXTPROC)VAR_10("glTexCoordPointerEXT");
 VAR_9 = (PFNGLVERTEXPOINTEREXTPROC)VAR_10("glVertexPointerEXT");
}
