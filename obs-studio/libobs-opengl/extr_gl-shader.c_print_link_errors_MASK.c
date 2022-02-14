
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLuint ;
typedef int GLsizei ;
typedef scalar_t__ GLint ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*) ;
 char* FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,scalar_t__,int *,char*) ;
 int FUNC_4 (int ,int ,scalar_t__*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(GLuint VAR_2)
{
 char *VAR_3 = ((void*)0);
 GLint VAR_4 = 0;
 GLsizei VAR_5 = 0;

 FUNC_4(VAR_2, VAR_0, &VAR_4);
 if (!FUNC_5("glGetProgramiv") || !VAR_4)
  return;

 VAR_3 = FUNC_1(1, VAR_4 + 1);
 FUNC_3(VAR_2, VAR_4, &VAR_5, VAR_3);
 FUNC_5("glGetShaderInfoLog");

 FUNC_0(VAR_1, "Linker warnings/errors:\n%s", VAR_3);

 FUNC_2(VAR_3);
}
