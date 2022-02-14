
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLPIXELTRANSFORMPARAMETERIVEXTPROC ;
typedef scalar_t__ PFNGLPIXELTRANSFORMPARAMETERIEXTPROC ;
typedef scalar_t__ PFNGLPIXELTRANSFORMPARAMETERFVEXTPROC ;
typedef scalar_t__ PFNGLPIXELTRANSFORMPARAMETERFEXTPROC ;
typedef scalar_t__ PFNGLGETPIXELTRANSFORMPARAMETERIVEXTPROC ;
typedef scalar_t__ PFNGLGETPIXELTRANSFORMPARAMETERFVEXTPROC ;
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
 VAR_5 = (PFNGLPIXELTRANSFORMPARAMETERIEXTPROC)VAR_7("glPixelTransformParameteriEXT");
 VAR_3 = (PFNGLPIXELTRANSFORMPARAMETERFEXTPROC)VAR_7("glPixelTransformParameterfEXT");
 VAR_6 = (PFNGLPIXELTRANSFORMPARAMETERIVEXTPROC)VAR_7("glPixelTransformParameterivEXT");
 VAR_4 = (PFNGLPIXELTRANSFORMPARAMETERFVEXTPROC)VAR_7("glPixelTransformParameterfvEXT");
 VAR_2 = (PFNGLGETPIXELTRANSFORMPARAMETERIVEXTPROC)VAR_7("glGetPixelTransformParameterivEXT");
 VAR_1 = (PFNGLGETPIXELTRANSFORMPARAMETERFVEXTPROC)VAR_7("glGetPixelTransformParameterfvEXT");
}
