
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLPRESENTFRAMEKEYEDNVPROC ;
typedef scalar_t__ PFNGLPRESENTFRAMEDUALFILLNVPROC ;
typedef scalar_t__ PFNGLGETVIDEOUIVNVPROC ;
typedef scalar_t__ PFNGLGETVIDEOUI64VNVPROC ;
typedef scalar_t__ PFNGLGETVIDEOIVNVPROC ;
typedef scalar_t__ PFNGLGETVIDEOI64VNVPROC ;
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
 VAR_6 = (PFNGLPRESENTFRAMEKEYEDNVPROC)VAR_7("glPresentFrameKeyedNV");
 VAR_5 = (PFNGLPRESENTFRAMEDUALFILLNVPROC)VAR_7("glPresentFrameDualFillNV");
 VAR_2 = (PFNGLGETVIDEOIVNVPROC)VAR_7("glGetVideoivNV");
 VAR_4 = (PFNGLGETVIDEOUIVNVPROC)VAR_7("glGetVideouivNV");
 VAR_1 = (PFNGLGETVIDEOI64VNVPROC)VAR_7("glGetVideoi64vNV");
 VAR_3 = (PFNGLGETVIDEOUI64VNVPROC)VAR_7("glGetVideoui64vNV");
}
