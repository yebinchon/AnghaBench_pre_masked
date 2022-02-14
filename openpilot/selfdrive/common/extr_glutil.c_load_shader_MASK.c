
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLuint ;
typedef int GLint ;
typedef int GLenum ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int *,char*) ;
 int FUNC_6 (int ,int ,int*) ;
 int FUNC_7 (int ,int,char const**,int *) ;
 scalar_t__ FUNC_8 (int) ;
 int VAR_2 ;

GLuint FUNC_9(GLenum VAR_3, const char *VAR_4) {
  GLint VAR_5 = 0, VAR_6 = 0;
  GLuint VAR_7;

  if (!(VAR_7 = FUNC_3(VAR_3)))
    return 0;

  FUNC_7(VAR_7, 1, &VAR_4, ((void*)0));
  FUNC_2(VAR_7);
  FUNC_6(VAR_7, VAR_0, &VAR_5);

  if (VAR_5)
    return VAR_7;

  FUNC_6(VAR_7, VAR_1, &VAR_6);
  if (VAR_6) {
    char *VAR_8 = (char*)FUNC_8(VAR_6);
    if (VAR_8) {
      FUNC_5(VAR_7, VAR_6, ((void*)0), VAR_8);
      VAR_8[VAR_6-1] = 0;
      FUNC_0(VAR_2, "error compiling shader:\n%s\n", VAR_8);
      FUNC_1(VAR_8);
    }
  }
  FUNC_4(VAR_7);
  return 0;
}
