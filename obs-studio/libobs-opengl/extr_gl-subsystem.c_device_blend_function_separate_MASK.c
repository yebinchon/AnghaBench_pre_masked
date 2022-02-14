
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gs_device_t ;
typedef enum gs_blend_type { ____Placeholder_gs_blend_type } gs_blend_type ;
typedef int GLenum ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (char*) ;

void FUNC_5(gs_device_t *VAR_1,
        enum gs_blend_type VAR_2,
        enum gs_blend_type VAR_3,
        enum gs_blend_type VAR_4,
        enum gs_blend_type VAR_5)
{
 GLenum VAR_6 = FUNC_2(VAR_2);
 GLenum VAR_7 = FUNC_2(VAR_3);
 GLenum VAR_8 = FUNC_2(VAR_4);
 GLenum VAR_9 = FUNC_2(VAR_5);

 FUNC_3(VAR_6, VAR_7, VAR_8, VAR_9);
 if (!FUNC_4("glBlendFuncSeparate"))
  FUNC_1(VAR_0, "device_blend_function_separate (GL) failed");

 FUNC_0(VAR_1);
}
