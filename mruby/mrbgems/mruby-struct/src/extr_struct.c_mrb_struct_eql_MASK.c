
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef size_t mrb_int ;


 scalar_t__ FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,char*,int *) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int *,int ,int ) ;
 int FUNC_8 () ;

__attribute__((used)) static mrb_value
FUNC_9(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_value VAR_2;
  mrb_value *VAR_3, *VAR_4;
  mrb_int VAR_5, VAR_6;

  FUNC_5(VAR_0, "o", &VAR_2);
  if (FUNC_7(VAR_0, VAR_1, VAR_2)) {
    return FUNC_8();
  }
  if (FUNC_6(VAR_0, VAR_1) != FUNC_6(VAR_0, VAR_2)) {
    return FUNC_4();
  }
  if (FUNC_0(VAR_1) != FUNC_0(VAR_2)) {
    FUNC_2(VAR_0, "inconsistent struct");
  }
  VAR_3 = FUNC_1(VAR_1);
  VAR_4 = FUNC_1(VAR_2);
  VAR_6 = FUNC_0(VAR_1);
  for (VAR_5=0; VAR_5<VAR_6; VAR_5++) {
    if (!FUNC_3(VAR_0, VAR_3[VAR_5], VAR_4[VAR_5])) {
      return FUNC_4();
    }
  }

  return FUNC_8();
}
