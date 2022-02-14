
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gs_shader_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,char const*) ;
 int * FUNC_2 (char*,char const*,char**) ;
 int FUNC_3 (char*,char const*) ;
 char* FUNC_4 (char const*) ;

gs_shader_t *FUNC_5(const char *VAR_1,
          char **VAR_2)
{
 char *VAR_3;
 gs_shader_t *VAR_4 = ((void*)0);

 if (!FUNC_3("gs_pixelshader_create_from_file", VAR_1))
  return ((void*)0);

 VAR_3 = FUNC_4(VAR_1);
 if (!VAR_3) {
  FUNC_1(VAR_0, "Could not load pixel shader file '%s'", VAR_1);
  return ((void*)0);
 }

 VAR_4 = FUNC_2(VAR_3, VAR_1, VAR_2);
 FUNC_0(VAR_3);

 return VAR_4;
}
