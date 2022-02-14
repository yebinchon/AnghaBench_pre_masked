
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;


 int FUNC_0 (int *,char*,char const**) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static mrb_value
FUNC_4(mrb_state *VAR_0, mrb_value VAR_1)
{
  const char *VAR_2;

  FUNC_0(VAR_0, "z", &VAR_2);
  if (FUNC_3(VAR_2) == -1) {
    FUNC_1(VAR_0, "rmdir");
  }
  return FUNC_2();
}
