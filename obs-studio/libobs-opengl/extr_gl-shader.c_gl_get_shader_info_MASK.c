
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLuint ;
typedef int GLsizei ;
typedef scalar_t__ GLint ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,char const*,char*) ;
 char* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__,int *,char*) ;
 int FUNC_4 (int ,int ,scalar_t__*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(GLuint VAR_2, const char *VAR_3,
          char **VAR_4)
{
 char *VAR_5;
 GLint VAR_6 = 0;
 GLsizei VAR_7 = 0;

 FUNC_4(VAR_2, VAR_0, &VAR_6);
 if (!FUNC_5("glGetProgramiv") || !VAR_6)
  return;

 VAR_5 = FUNC_2(VAR_6 + 1);
 FUNC_3(VAR_2, VAR_6, &VAR_7, VAR_5);
 FUNC_5("glGetShaderInfoLog");

 FUNC_1(VAR_1, "Compiler warnings/errors for %s:\n%s", VAR_3, VAR_5);

 if (VAR_4)
  *VAR_4 = VAR_5;
 else
  FUNC_0(VAR_5);
}
