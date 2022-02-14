
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gs_shader {scalar_t__ type; int obj; } ;
struct TYPE_2__ {char* array; } ;
struct gl_shader_parser {TYPE_1__ gl_string; } ;
typedef int GLsizei ;
typedef int GLint ;
typedef int GLenum ;
typedef int GLchar ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int *,char*) ;
 int FUNC_6 (int ,int ,int*) ;
 int FUNC_7 (int ,int,int const**,int ) ;
 int FUNC_8 (struct gs_shader*,struct gl_shader_parser*) ;
 int FUNC_9 (struct gs_shader*,struct gl_shader_parser*) ;
 int FUNC_10 (int ,char const*,char**) ;
 int FUNC_11 (struct gs_shader*,struct gl_shader_parser*) ;
 int FUNC_12 (char*) ;
 char* FUNC_13 (int) ;

__attribute__((used)) static bool FUNC_14(struct gs_shader *VAR_5,
      struct gl_shader_parser *VAR_6, const char *VAR_7,
      char **VAR_8)
{
 GLenum VAR_9 = FUNC_1(VAR_5->type);
 int VAR_10 = 0;
 bool VAR_11 = 1;

 VAR_5->obj = FUNC_4(VAR_9);
 if (!FUNC_12("glCreateShader") || !VAR_5->obj)
  return 0;

 FUNC_7(VAR_5->obj, 1, (const GLchar **)&VAR_6->gl_string.array,
         0);
 if (!FUNC_12("glShaderSource"))
  return 0;

 FUNC_3(VAR_5->obj);
 if (!FUNC_12("glCompileShader"))
  return 0;
 FUNC_6(VAR_5->obj, VAR_0, &VAR_10);
 if (!FUNC_12("glGetShaderiv"))
  return 0;

 if (!VAR_10) {
  GLint VAR_12 = 0;
  FUNC_6(VAR_5->obj, VAR_1, &VAR_12);

  char *VAR_13 = FUNC_13(sizeof(char) * VAR_12);

  GLsizei VAR_14 = 0;
  FUNC_5(VAR_5->obj, VAR_12, &VAR_14,
       VAR_13);
  FUNC_0(VAR_4, "Error compiling shader:\n%s\n", VAR_13);

  FUNC_2(VAR_13);

  VAR_11 = 0;
 }

 FUNC_10(VAR_5->obj, VAR_7, VAR_8);

 if (VAR_11)
  VAR_11 = FUNC_8(VAR_5, VAR_6);

 if (VAR_11 && VAR_5->type == VAR_2)
  VAR_11 = FUNC_11(VAR_5, VAR_6);
 if (VAR_11)
  FUNC_9(VAR_5, VAR_6);

 return VAR_11;
}
