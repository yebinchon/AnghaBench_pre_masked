
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLVERTEXATTRIBLPOINTEREXTPROC ;
typedef scalar_t__ PFNGLVERTEXATTRIBL4DVEXTPROC ;
typedef scalar_t__ PFNGLVERTEXATTRIBL4DEXTPROC ;
typedef scalar_t__ PFNGLVERTEXATTRIBL3DVEXTPROC ;
typedef scalar_t__ PFNGLVERTEXATTRIBL3DEXTPROC ;
typedef scalar_t__ PFNGLVERTEXATTRIBL2DVEXTPROC ;
typedef scalar_t__ PFNGLVERTEXATTRIBL2DEXTPROC ;
typedef scalar_t__ PFNGLVERTEXATTRIBL1DVEXTPROC ;
typedef scalar_t__ PFNGLVERTEXATTRIBL1DEXTPROC ;
typedef scalar_t__ PFNGLGETVERTEXATTRIBLDVEXTPROC ;
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

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_11) {
 if(!VAR_0) return;
 VAR_2 = (PFNGLVERTEXATTRIBL1DEXTPROC)VAR_11("glVertexAttribL1dEXT");
 VAR_4 = (PFNGLVERTEXATTRIBL2DEXTPROC)VAR_11("glVertexAttribL2dEXT");
 VAR_6 = (PFNGLVERTEXATTRIBL3DEXTPROC)VAR_11("glVertexAttribL3dEXT");
 VAR_8 = (PFNGLVERTEXATTRIBL4DEXTPROC)VAR_11("glVertexAttribL4dEXT");
 VAR_3 = (PFNGLVERTEXATTRIBL1DVEXTPROC)VAR_11("glVertexAttribL1dvEXT");
 VAR_5 = (PFNGLVERTEXATTRIBL2DVEXTPROC)VAR_11("glVertexAttribL2dvEXT");
 VAR_7 = (PFNGLVERTEXATTRIBL3DVEXTPROC)VAR_11("glVertexAttribL3dvEXT");
 VAR_9 = (PFNGLVERTEXATTRIBL4DVEXTPROC)VAR_11("glVertexAttribL4dvEXT");
 VAR_10 = (PFNGLVERTEXATTRIBLPOINTEREXTPROC)VAR_11("glVertexAttribLPointerEXT");
 VAR_1 = (PFNGLGETVERTEXATTRIBLDVEXTPROC)VAR_11("glGetVertexAttribLdvEXT");
}
