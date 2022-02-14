
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLMATRIXINDEXUSVARBPROC ;
typedef scalar_t__ PFNGLMATRIXINDEXUIVARBPROC ;
typedef scalar_t__ PFNGLMATRIXINDEXUBVARBPROC ;
typedef scalar_t__ PFNGLMATRIXINDEXPOINTERARBPROC ;
typedef scalar_t__ PFNGLCURRENTPALETTEMATRIXARBPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_6) {
 if(!VAR_0) return;
 VAR_1 = (PFNGLCURRENTPALETTEMATRIXARBPROC)VAR_6("glCurrentPaletteMatrixARB");
 VAR_3 = (PFNGLMATRIXINDEXUBVARBPROC)VAR_6("glMatrixIndexubvARB");
 VAR_5 = (PFNGLMATRIXINDEXUSVARBPROC)VAR_6("glMatrixIndexusvARB");
 VAR_4 = (PFNGLMATRIXINDEXUIVARBPROC)VAR_6("glMatrixIndexuivARB");
 VAR_2 = (PFNGLMATRIXINDEXPOINTERARBPROC)VAR_6("glMatrixIndexPointerARB");
}
