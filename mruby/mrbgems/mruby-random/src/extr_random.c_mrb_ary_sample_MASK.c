
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rand_state ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;
typedef int mrb_bool ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ,int,int ) ;
 size_t FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,char*,int*,int *,int *) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int *,int ,char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;
 int * FUNC_13 (int *) ;
 int * FUNC_14 (int ) ;

__attribute__((used)) static mrb_value
FUNC_15(mrb_state *VAR_1, mrb_value VAR_2)
{
  mrb_int VAR_3 = 0;
  mrb_bool VAR_4;
  mrb_value VAR_5 = FUNC_9();
  rand_state *VAR_6;
  mrb_int VAR_7;

  FUNC_7(VAR_1, "|i?o", &VAR_3, &VAR_4, &VAR_5);
  if (FUNC_8(VAR_5)) {
    VAR_6 = FUNC_13(VAR_1);
  }
  else {
    FUNC_12(VAR_1, VAR_5);
    VAR_6 = FUNC_14(VAR_5);
  }
  VAR_7 = FUNC_0(VAR_2);
  if (!VAR_4) {
    switch (VAR_7) {
    case 0:
      return FUNC_9();
    case 1:
      return FUNC_1(VAR_2)[0];
    default:
      return FUNC_1(VAR_2)[FUNC_11(VAR_6) % VAR_7];
    }
  }
  else {
    mrb_value VAR_8;
    mrb_int VAR_9, VAR_10;

    if (VAR_3 < 0) FUNC_10(VAR_1, VAR_0, "negative sample number");
    if (VAR_3 > VAR_7) VAR_3 = VAR_7;
    VAR_8 = FUNC_2(VAR_1, VAR_3);
    for (VAR_9=0; VAR_9<VAR_3; VAR_9++) {
      mrb_int VAR_11;

      for (;;) {
      retry:
        VAR_11 = (mrb_int)(FUNC_11(VAR_6) % VAR_7);

        for (VAR_10=0; VAR_10<VAR_9; VAR_10++) {
          if (FUNC_5(FUNC_1(VAR_8)[VAR_10]) == VAR_11) {
            goto retry;
          }
        }
        break;
      }
      FUNC_3(VAR_1, VAR_8, FUNC_6(VAR_11));
    }
    for (VAR_9=0; VAR_9<VAR_3; VAR_9++) {
      FUNC_4(VAR_1, VAR_8, VAR_9, FUNC_1(VAR_2)[FUNC_5(FUNC_1(VAR_8)[VAR_9])]);
    }
    return VAR_8;
  }
}
