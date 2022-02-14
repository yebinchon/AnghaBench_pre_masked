
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ mrb_value ;
typedef int mrb_state ;
typedef scalar_t__ mrb_int ;
typedef scalar_t__ mrb_float ;


 int FUNC_0 (int,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,char*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int *,scalar_t__,scalar_t__) ;

__attribute__((used)) static mrb_value
FUNC_6(mrb_state *VAR_2, mrb_value VAR_3)
{
  mrb_int VAR_4, VAR_5;
  mrb_value VAR_6, VAR_7;

  FUNC_3(VAR_2, "oo", &VAR_6, &VAR_7);
  if (FUNC_2(VAR_6)) {
    VAR_4 = FUNC_1(VAR_6);

    if (FUNC_2(VAR_7)) {
      VAR_5 = FUNC_1(VAR_7);
    }
    else {
      mrb_float VAR_8 = FUNC_4(VAR_2, VAR_7);

      do { while (VAR_8 < VAR_1 || VAR_8 > VAR_0) { VAR_4 /= 2; VAR_8 /= 2; } } while (0);
      VAR_5 = VAR_8;
    }
  }
  else {
    mrb_float VAR_9 = FUNC_4(VAR_2, VAR_6);

    if (FUNC_2(VAR_7)) {
      VAR_5 = FUNC_1(VAR_7);
    }
    else {
      mrb_float VAR_10 = FUNC_4(VAR_2, VAR_7);

      do { while (VAR_10 < VAR_1 || VAR_10 > VAR_0) { VAR_9 /= 2; VAR_10 /= 2; } } while (0);
      VAR_5 = VAR_10;
    }

    do { while (VAR_9 < VAR_1 || VAR_9 > VAR_0) { VAR_9 /= 2; VAR_5 /= 2; } } while (0);
    VAR_4 = VAR_9;
  }


  return FUNC_5(VAR_2, VAR_4, VAR_5);
}
