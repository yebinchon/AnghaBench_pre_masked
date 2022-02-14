
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLVERTEXPOINTERLISTIBMPROC ;
typedef scalar_t__ PFNGLTEXCOORDPOINTERLISTIBMPROC ;
typedef scalar_t__ PFNGLSECONDARYCOLORPOINTERLISTIBMPROC ;
typedef scalar_t__ PFNGLNORMALPOINTERLISTIBMPROC ;
typedef scalar_t__ PFNGLINDEXPOINTERLISTIBMPROC ;
typedef scalar_t__ PFNGLFOGCOORDPOINTERLISTIBMPROC ;
typedef scalar_t__ PFNGLEDGEFLAGPOINTERLISTIBMPROC ;
typedef scalar_t__ PFNGLCOLORPOINTERLISTIBMPROC ;
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

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_9) {
 if(!VAR_0) return;
 VAR_1 = (PFNGLCOLORPOINTERLISTIBMPROC)VAR_9("glColorPointerListIBM");
 VAR_6 = (PFNGLSECONDARYCOLORPOINTERLISTIBMPROC)VAR_9("glSecondaryColorPointerListIBM");
 VAR_2 = (PFNGLEDGEFLAGPOINTERLISTIBMPROC)VAR_9("glEdgeFlagPointerListIBM");
 VAR_3 = (PFNGLFOGCOORDPOINTERLISTIBMPROC)VAR_9("glFogCoordPointerListIBM");
 VAR_4 = (PFNGLINDEXPOINTERLISTIBMPROC)VAR_9("glIndexPointerListIBM");
 VAR_5 = (PFNGLNORMALPOINTERLISTIBMPROC)VAR_9("glNormalPointerListIBM");
 VAR_7 = (PFNGLTEXCOORDPOINTERLISTIBMPROC)VAR_9("glTexCoordPointerListIBM");
 VAR_8 = (PFNGLVERTEXPOINTERLISTIBMPROC)VAR_9("glVertexPointerListIBM");
}
