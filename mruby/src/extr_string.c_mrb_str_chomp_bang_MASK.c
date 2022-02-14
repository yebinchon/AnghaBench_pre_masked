
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RString {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef scalar_t__ mrb_int ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__* FUNC_1 (int ) ;
 size_t FUNC_2 (struct RString*) ;
 char* FUNC_3 (struct RString*) ;
 int FUNC_4 (struct RString*,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__*,char*,scalar_t__) ;
 scalar_t__ FUNC_6 (int *,char*,int *) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int *,struct RString*) ;
 struct RString* FUNC_10 (int ) ;

__attribute__((used)) static mrb_value
FUNC_11(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_value VAR_2;
  mrb_int VAR_3;
  char *VAR_4, *VAR_5;
  mrb_int VAR_6;
  mrb_int VAR_7;
  mrb_int VAR_8;
  struct RString *VAR_9 = FUNC_10(VAR_1);

  VAR_8 = FUNC_6(VAR_0, "|S", &VAR_2);
  FUNC_9(VAR_0, VAR_9);
  VAR_7 = FUNC_2(VAR_9);
  if (VAR_8 == 0) {
    if (VAR_7 == 0) return FUNC_8();
  smart_chomp:
    if (FUNC_3(VAR_9)[VAR_7-1] == '\n') {
      FUNC_4(VAR_9, FUNC_2(VAR_9) - 1);
      if (FUNC_2(VAR_9) > 0 &&
          FUNC_3(VAR_9)[FUNC_2(VAR_9)-1] == '\r') {
        FUNC_4(VAR_9, FUNC_2(VAR_9) - 1);
      }
    }
    else if (FUNC_3(VAR_9)[VAR_7-1] == '\r') {
      FUNC_4(VAR_9, FUNC_2(VAR_9) - 1);
    }
    else {
      return FUNC_8();
    }
    FUNC_3(VAR_9)[FUNC_2(VAR_9)] = '\0';
    return VAR_1;
  }

  if (VAR_7 == 0 || FUNC_7(VAR_2)) return FUNC_8();
  VAR_4 = FUNC_3(VAR_9);
  VAR_6 = FUNC_0(VAR_2);
  if (VAR_6 == 0) {
    while (VAR_7>0 && VAR_4[VAR_7-1] == '\n') {
      VAR_7--;
      if (VAR_7>0 && VAR_4[VAR_7-1] == '\r')
        VAR_7--;
    }
    if (VAR_7 < FUNC_2(VAR_9)) {
      FUNC_4(VAR_9, VAR_7);
      VAR_4[VAR_7] = '\0';
      return VAR_1;
    }
    return FUNC_8();
  }
  if (VAR_6 > VAR_7) return FUNC_8();
  VAR_3 = FUNC_1(VAR_2)[VAR_6-1];
  if (VAR_6 == 1 && VAR_3 == '\n')
    VAR_3 = FUNC_1(VAR_2)[VAR_6-1];
  if (VAR_6 == 1 && VAR_3 == '\n')
    goto smart_chomp;

  VAR_5 = VAR_4 + VAR_7 - VAR_6;
  if (VAR_4[VAR_7-1] == VAR_3 &&
     (VAR_6 <= 1 ||
     FUNC_5(FUNC_1(VAR_2), VAR_5, VAR_6) == 0)) {
    FUNC_4(VAR_9, VAR_7 - VAR_6);
    VAR_4[FUNC_2(VAR_9)] = '\0';
    return VAR_1;
  }
  return FUNC_8();
}
