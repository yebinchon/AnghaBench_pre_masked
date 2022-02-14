
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLVERTEXBINDINGDIVISORPROC ;
typedef scalar_t__ PFNGLVERTEXATTRIBLFORMATPROC ;
typedef scalar_t__ PFNGLVERTEXATTRIBIFORMATPROC ;
typedef scalar_t__ PFNGLVERTEXATTRIBFORMATPROC ;
typedef scalar_t__ PFNGLVERTEXATTRIBBINDINGPROC ;
typedef scalar_t__ PFNGLBINDVERTEXBUFFERPROC ;
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
 VAR_1 = (PFNGLBINDVERTEXBUFFERPROC)VAR_7("glBindVertexBuffer");
 VAR_3 = (PFNGLVERTEXATTRIBFORMATPROC)VAR_7("glVertexAttribFormat");
 VAR_4 = (PFNGLVERTEXATTRIBIFORMATPROC)VAR_7("glVertexAttribIFormat");
 VAR_5 = (PFNGLVERTEXATTRIBLFORMATPROC)VAR_7("glVertexAttribLFormat");
 VAR_2 = (PFNGLVERTEXATTRIBBINDINGPROC)VAR_7("glVertexAttribBinding");
 VAR_6 = (PFNGLVERTEXBINDINGDIVISORPROC)VAR_7("glVertexBindingDivisor");
}
