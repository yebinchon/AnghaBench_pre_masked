
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,char*,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int *,int ,int ) ;

__attribute__((used)) static mrb_value
FUNC_11(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_value VAR_2;

  FUNC_1(VAR_0, "o", &VAR_2);
  if (FUNC_6(VAR_2)) {
    mrb_value VAR_3 = FUNC_0(VAR_0, VAR_2);

    if (FUNC_5(VAR_3)) {
      FUNC_4(VAR_0, FUNC_3(VAR_0, VAR_2), "no member '%v' in struct", VAR_2);
    }
    VAR_2 = VAR_3;
  }
  if (FUNC_8(VAR_2)) {
    return FUNC_10(VAR_0, VAR_1, FUNC_7(VAR_2));
  }
  return FUNC_9(VAR_0, VAR_1, FUNC_2(VAR_0, VAR_2));
}
