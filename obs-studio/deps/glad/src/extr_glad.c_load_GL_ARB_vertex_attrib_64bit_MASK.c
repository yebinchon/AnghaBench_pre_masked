
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLVERTEXATTRIBLPOINTERPROC ;
typedef scalar_t__ PFNGLVERTEXATTRIBL4DVPROC ;
typedef scalar_t__ PFNGLVERTEXATTRIBL4DPROC ;
typedef scalar_t__ PFNGLVERTEXATTRIBL3DVPROC ;
typedef scalar_t__ PFNGLVERTEXATTRIBL3DPROC ;
typedef scalar_t__ PFNGLVERTEXATTRIBL2DVPROC ;
typedef scalar_t__ PFNGLVERTEXATTRIBL2DPROC ;
typedef scalar_t__ PFNGLVERTEXATTRIBL1DVPROC ;
typedef scalar_t__ PFNGLVERTEXATTRIBL1DPROC ;
typedef scalar_t__ PFNGLGETVERTEXATTRIBLDVPROC ;
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
 VAR_2 = (PFNGLVERTEXATTRIBL1DPROC)VAR_11("glVertexAttribL1d");
 VAR_4 = (PFNGLVERTEXATTRIBL2DPROC)VAR_11("glVertexAttribL2d");
 VAR_6 = (PFNGLVERTEXATTRIBL3DPROC)VAR_11("glVertexAttribL3d");
 VAR_8 = (PFNGLVERTEXATTRIBL4DPROC)VAR_11("glVertexAttribL4d");
 VAR_3 = (PFNGLVERTEXATTRIBL1DVPROC)VAR_11("glVertexAttribL1dv");
 VAR_5 = (PFNGLVERTEXATTRIBL2DVPROC)VAR_11("glVertexAttribL2dv");
 VAR_7 = (PFNGLVERTEXATTRIBL3DVPROC)VAR_11("glVertexAttribL3dv");
 VAR_9 = (PFNGLVERTEXATTRIBL4DVPROC)VAR_11("glVertexAttribL4dv");
 VAR_10 = (PFNGLVERTEXATTRIBLPOINTERPROC)VAR_11("glVertexAttribLPointer");
 VAR_1 = (PFNGLGETVERTEXATTRIBLDVPROC)VAR_11("glGetVertexAttribLdv");
}
