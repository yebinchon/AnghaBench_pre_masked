
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gs_device_t ;
typedef enum gs_depth_test { ____Placeholder_gs_depth_test } gs_depth_test ;
typedef int GLenum ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;

void FUNC_5(gs_device_t *VAR_1, enum gs_depth_test VAR_2)
{
 GLenum VAR_3 = FUNC_2(VAR_2);

 FUNC_3(VAR_3);
 if (!FUNC_4("glDepthFunc"))
  FUNC_1(VAR_0, "device_depth_function (GL) failed");

 FUNC_0(VAR_1);
}
