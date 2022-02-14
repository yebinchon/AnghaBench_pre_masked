
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef scalar_t__ mrb_int ;


 int FUNC_0 (int *,char*,int **,scalar_t__*) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;

__attribute__((used)) static mrb_value
FUNC_6(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_value *VAR_2, VAR_3;
  mrb_int VAR_4, VAR_5;

  FUNC_0(VAR_0, "*", &VAR_2, &VAR_4);
  if (VAR_4 == 0) {
    return FUNC_2(VAR_0, VAR_4);
  }
  VAR_3 = FUNC_2(VAR_0, VAR_4);
  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
    mrb_value VAR_6 = VAR_2[VAR_5];
    mrb_value VAR_7;

    VAR_7 = FUNC_1(VAR_0, VAR_1, VAR_6, FUNC_5());
    if (!FUNC_4(VAR_7)) {
      FUNC_3(VAR_0, VAR_3, VAR_6, VAR_7);
    }
  }
  return VAR_3;
}
