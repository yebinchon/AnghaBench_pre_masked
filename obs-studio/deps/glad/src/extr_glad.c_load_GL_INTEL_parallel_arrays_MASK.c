
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLVERTEXPOINTERVINTELPROC ;
typedef scalar_t__ PFNGLTEXCOORDPOINTERVINTELPROC ;
typedef scalar_t__ PFNGLNORMALPOINTERVINTELPROC ;
typedef scalar_t__ PFNGLCOLORPOINTERVINTELPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_5) {
 if(!VAR_0) return;
 VAR_4 = (PFNGLVERTEXPOINTERVINTELPROC)VAR_5("glVertexPointervINTEL");
 VAR_2 = (PFNGLNORMALPOINTERVINTELPROC)VAR_5("glNormalPointervINTEL");
 VAR_1 = (PFNGLCOLORPOINTERVINTELPROC)VAR_5("glColorPointervINTEL");
 VAR_3 = (PFNGLTEXCOORDPOINTERVINTELPROC)VAR_5("glTexCoordPointervINTEL");
}
