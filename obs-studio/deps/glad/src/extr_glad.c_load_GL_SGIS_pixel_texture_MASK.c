
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLPIXELTEXGENPARAMETERIVSGISPROC ;
typedef scalar_t__ PFNGLPIXELTEXGENPARAMETERISGISPROC ;
typedef scalar_t__ PFNGLPIXELTEXGENPARAMETERFVSGISPROC ;
typedef scalar_t__ PFNGLPIXELTEXGENPARAMETERFSGISPROC ;
typedef scalar_t__ PFNGLGETPIXELTEXGENPARAMETERIVSGISPROC ;
typedef scalar_t__ PFNGLGETPIXELTEXGENPARAMETERFVSGISPROC ;
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
 VAR_5 = (PFNGLPIXELTEXGENPARAMETERISGISPROC)VAR_7("glPixelTexGenParameteriSGIS");
 VAR_6 = (PFNGLPIXELTEXGENPARAMETERIVSGISPROC)VAR_7("glPixelTexGenParameterivSGIS");
 VAR_3 = (PFNGLPIXELTEXGENPARAMETERFSGISPROC)VAR_7("glPixelTexGenParameterfSGIS");
 VAR_4 = (PFNGLPIXELTEXGENPARAMETERFVSGISPROC)VAR_7("glPixelTexGenParameterfvSGIS");
 VAR_2 = (PFNGLGETPIXELTEXGENPARAMETERIVSGISPROC)VAR_7("glGetPixelTexGenParameterivSGIS");
 VAR_1 = (PFNGLGETPIXELTEXGENPARAMETERFVSGISPROC)VAR_7("glGetPixelTexGenParameterfvSGIS");
}
