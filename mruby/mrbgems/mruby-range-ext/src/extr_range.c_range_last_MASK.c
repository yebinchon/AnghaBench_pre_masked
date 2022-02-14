
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;


 int FUNC_0 (int *,int ,char*,int,...) ;
 scalar_t__ FUNC_1 (int *,char*,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static mrb_value
FUNC_4(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_value VAR_2;
  mrb_value VAR_3;

  if (FUNC_1(VAR_0, "|o", &VAR_2) == 0) {
    return FUNC_2(VAR_0, VAR_1);
  }

  VAR_3 = FUNC_0(VAR_0, VAR_1, "to_a", 0);
  return FUNC_0(VAR_0, VAR_3, "last", 1, FUNC_3(VAR_0, VAR_2));
}
