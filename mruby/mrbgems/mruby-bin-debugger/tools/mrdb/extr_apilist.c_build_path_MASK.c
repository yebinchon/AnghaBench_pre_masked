
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_state ;


 int FUNC_0 (char*,int ,int) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (char*,char const*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static char*
FUNC_5(mrb_state *VAR_0, const char *VAR_1, const char *VAR_2)
{
  int VAR_3;
  char *VAR_4 = ((void*)0);

  VAR_3 = FUNC_4(VAR_2) + 1;

  if (FUNC_3(VAR_1, ".")) {
    VAR_3 += FUNC_4(VAR_1) + sizeof("/") - 1;
  }

  VAR_4 = (char*)FUNC_1(VAR_0, VAR_3);
  FUNC_0(VAR_4, 0, VAR_3);

  if (FUNC_3(VAR_1, ".")) {
    FUNC_2(VAR_4, VAR_1);
    FUNC_2(VAR_4, "/");
  }
  FUNC_2(VAR_4, VAR_2);

  return VAR_4;
}
