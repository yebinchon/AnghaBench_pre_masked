
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gs_shader {int dummy; } ;
typedef struct gs_shader gs_shader_t ;
typedef int gs_device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 struct gs_shader* FUNC_1 (int *,int ,char const*,char const*,char**) ;

gs_shader_t *FUNC_2(gs_device_t *VAR_2, const char *VAR_3,
     const char *VAR_4, char **VAR_5)
{
 struct gs_shader *VAR_6;
 VAR_6 = FUNC_1(VAR_2, VAR_0, VAR_3, VAR_4,
       VAR_5);
 if (!VAR_6)
  FUNC_0(VAR_1, "device_vertexshader_create (GL) failed");
 return VAR_6;
}
