
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gs_shader {int type; int * device; } ;
struct gl_shader_parser {int dummy; } ;
typedef int gs_device_t ;
typedef enum gs_shader_type { ____Placeholder_gs_shader_type } gs_shader_type ;


 struct gs_shader* FUNC_0 (int) ;
 int FUNC_1 (struct gs_shader*,struct gl_shader_parser*,char const*,char**) ;
 int FUNC_2 (struct gl_shader_parser*,char const*,char const*) ;
 int FUNC_3 (struct gl_shader_parser*) ;
 int FUNC_4 (struct gl_shader_parser*,int) ;
 int FUNC_5 (struct gs_shader*) ;

__attribute__((used)) static struct gs_shader *FUNC_6(gs_device_t *VAR_0,
           enum gs_shader_type VAR_1,
           const char *VAR_2, const char *VAR_3,
           char **VAR_4)
{
 struct gs_shader *VAR_5 = FUNC_0(sizeof(struct gs_shader));
 struct gl_shader_parser VAR_6;
 bool VAR_7 = 1;

 VAR_5->device = VAR_0;
 VAR_5->type = VAR_1;

 FUNC_4(&VAR_6, VAR_1);
 if (!FUNC_2(&VAR_6, VAR_2, VAR_3))
  VAR_7 = 0;
 else
  VAR_7 = FUNC_1(VAR_5, &VAR_6, VAR_3, VAR_4);

 if (!VAR_7) {
  FUNC_5(VAR_5);
  VAR_5 = ((void*)0);
 }

 FUNC_3(&VAR_6);
 return VAR_5;
}
