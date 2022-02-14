
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gs_device_t ;
typedef enum gs_stencil_side { ____Placeholder_gs_stencil_side } gs_stencil_side ;
typedef enum gs_stencil_op_type { ____Placeholder_gs_stencil_op_type } gs_stencil_op_type ;
typedef int GLenum ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (char*) ;

void FUNC_6(gs_device_t *VAR_1, enum gs_stencil_side VAR_2,
         enum gs_stencil_op_type VAR_3,
         enum gs_stencil_op_type VAR_4,
         enum gs_stencil_op_type VAR_5)
{
 GLenum VAR_6 = FUNC_3(VAR_2);
 GLenum VAR_7 = FUNC_2(VAR_3);
 GLenum VAR_8 = FUNC_2(VAR_4);
 GLenum VAR_9 = FUNC_2(VAR_5);

 FUNC_4(VAR_6, VAR_7, VAR_8, VAR_9);
 if (!FUNC_5("glStencilOpSeparate"))
  FUNC_1(VAR_0, "device_stencil_op (GL) failed");

 FUNC_0(VAR_1);
}
