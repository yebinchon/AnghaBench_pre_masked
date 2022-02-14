
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLuint ;
typedef int GLint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int,int *,char*) ;
 int FUNC_7 (int ,int ,int*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char const*) ;
 scalar_t__ FUNC_10 (int) ;
 int VAR_4 ;

GLuint FUNC_11(const char *VAR_5, const char *VAR_6) {
  GLuint VAR_7, VAR_8, VAR_9;
  GLint VAR_10 = 0, VAR_11 = 0;

  if (!(VAR_7 = FUNC_9(VAR_3, VAR_5)))
    return 0;
  if (!(VAR_8 = FUNC_9(VAR_0, VAR_6)))
    goto fail_frag;
  if (!(VAR_9 = FUNC_3()))
    goto fail_prog;

  FUNC_2(VAR_9, VAR_7);
  FUNC_2(VAR_9, VAR_8);
  FUNC_8(VAR_9);

  FUNC_7(VAR_9, VAR_2, &VAR_10);
  if (VAR_10)
    return VAR_9;

  FUNC_7(VAR_9, VAR_1, &VAR_11);
  if (VAR_11) {
    char *VAR_12 = (char*) FUNC_10(VAR_11);
    if (VAR_12) {
      FUNC_6(VAR_9, VAR_11, ((void*)0), VAR_12);
      VAR_12[VAR_11-1] = 0;
      FUNC_0(VAR_4, "error linking program:\n%s\n", VAR_12);
      FUNC_1(VAR_12);
    }
  }
  FUNC_4(VAR_9);
fail_prog:
  FUNC_5(VAR_8);
fail_frag:
  FUNC_5(VAR_7);
  return 0;
}
