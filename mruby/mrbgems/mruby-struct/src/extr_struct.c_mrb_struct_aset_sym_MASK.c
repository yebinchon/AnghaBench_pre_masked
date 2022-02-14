
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef scalar_t__ mrb_sym ;
typedef int mrb_state ;
typedef size_t mrb_int ;


 size_t FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,scalar_t__,char*,scalar_t__) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int const) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static mrb_value
FUNC_7(mrb_state *VAR_0, mrb_value VAR_1, mrb_sym VAR_2, mrb_value VAR_3)
{
  mrb_value VAR_4, *VAR_5;
  const mrb_value *VAR_6;
  mrb_int VAR_7, VAR_8;

  VAR_4 = FUNC_6(VAR_0, VAR_1);
  VAR_8 = FUNC_0(VAR_4);
  VAR_5 = FUNC_2(VAR_1);
  VAR_6 = FUNC_1(VAR_4);
  for (VAR_7=0; VAR_7<VAR_8; VAR_7++) {
    if (FUNC_5(VAR_6[VAR_7]) == VAR_2) {
      FUNC_4(VAR_0, VAR_1);
      VAR_5[VAR_7] = VAR_3;
      return VAR_3;
    }
  }
  FUNC_3(VAR_0, VAR_2, "no member '%n' in struct", VAR_2);
  return VAR_3;
}
