
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_state ;


 int FUNC_0 (char*,char const*,size_t) ;
 scalar_t__ FUNC_1 (int *,size_t) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static char *
FUNC_3(mrb_state *VAR_0, const char *VAR_1)
{
  size_t VAR_2 = FUNC_2(VAR_1) + 1;
  char *VAR_3 = (char*)FUNC_1(VAR_0, VAR_2);
  FUNC_0(VAR_3, VAR_1, VAR_2);
  return VAR_3;
}
