
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct tr_pattern {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef size_t mrb_int ;
typedef scalar_t__ mrb_bool ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ,size_t) ;
 struct tr_pattern VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *,char) ;
 int FUNC_8 (struct tr_pattern*,int ,int *) ;
 int FUNC_9 (int *,struct tr_pattern*) ;
 struct tr_pattern* FUNC_10 (int *,struct tr_pattern*,int ,scalar_t__) ;

__attribute__((used)) static mrb_bool
FUNC_11(mrb_state *VAR_3, mrb_value VAR_4, mrb_value VAR_5)
{
  struct tr_pattern VAR_6 = VAR_1;
  struct tr_pattern *VAR_7 = ((void*)0);
  mrb_int VAR_8, VAR_9;
  char *VAR_10;
  mrb_int VAR_11;
  mrb_bool VAR_12 = VAR_0;
  mrb_int VAR_13 = -1;
  uint8_t VAR_14[32];

  FUNC_5(VAR_3, FUNC_6(VAR_4));
  if (!FUNC_4(VAR_5)) {
    VAR_7 = FUNC_10(VAR_3, &VAR_6, VAR_5, VAR_2);
    FUNC_8(VAR_7, VAR_5, VAR_14);
    FUNC_9(VAR_3, VAR_7);
  }
  VAR_10 = FUNC_2(VAR_4);
  VAR_11 = FUNC_1(VAR_4);

  if (VAR_7) {
    for (VAR_8=VAR_9=0; VAR_8<VAR_11; VAR_8++,VAR_9++) {
      if (VAR_8>VAR_9) VAR_10[VAR_9] = VAR_10[VAR_8];
      if (FUNC_7(VAR_14, VAR_10[VAR_8]) && VAR_10[VAR_8] == VAR_13) {
        VAR_12 = VAR_2;
        VAR_9--;
      }
      VAR_13 = VAR_10[VAR_8];
    }
  }
  else {
    for (VAR_8=VAR_9=0; VAR_8<VAR_11; VAR_8++,VAR_9++) {
      if (VAR_8>VAR_9) VAR_10[VAR_9] = VAR_10[VAR_8];
      if (VAR_10[VAR_8] >= 0 && VAR_10[VAR_8] == VAR_13) {
        VAR_12 = VAR_2;
        VAR_9--;
      }
      VAR_13 = VAR_10[VAR_8];
    }
  }

  if (VAR_12) {
    FUNC_3(FUNC_0(VAR_4), VAR_9);
    FUNC_2(VAR_4)[VAR_9] = 0;
  }
  return VAR_12;
}
