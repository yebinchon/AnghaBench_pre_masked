
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rand_state ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef size_t mrb_int ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,char*,int *) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int *,int ) ;
 int * FUNC_10 (int *) ;
 int * FUNC_11 (int ) ;
 int FUNC_12 (int *,int *,int ) ;

__attribute__((used)) static mrb_value
FUNC_13(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_int VAR_2;
  mrb_value VAR_3;
  mrb_value VAR_4 = FUNC_8();
  rand_state *VAR_5;

  if (FUNC_0(VAR_1) > 1) {
    FUNC_6(VAR_0, "|o", &VAR_4);

    if (FUNC_7(VAR_4)) {
      VAR_5 = FUNC_10(VAR_0);
    }
    else {
      FUNC_9(VAR_0, VAR_4);
      VAR_5 = FUNC_11(VAR_4);
    }
    FUNC_2(VAR_0, FUNC_3(VAR_1));
    VAR_3 = FUNC_5(FUNC_0(VAR_1));
    for (VAR_2 = FUNC_0(VAR_1) - 1; VAR_2 > 0; VAR_2--) {
      mrb_int VAR_6;
      mrb_value *VAR_7 = FUNC_1(VAR_1);
      mrb_value VAR_8;

      VAR_6 = FUNC_4(FUNC_12(VAR_0, VAR_5, VAR_3));

      VAR_8 = VAR_7[VAR_2];
      VAR_7[VAR_2] = VAR_7[VAR_6];
      VAR_7[VAR_6] = VAR_8;
    }
  }

  return VAR_1;
}
