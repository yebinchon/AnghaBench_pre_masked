
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
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *,char) ;
 int FUNC_7 (struct tr_pattern*,int ,int *) ;
 int FUNC_8 (int *,struct tr_pattern*) ;
 int FUNC_9 (int *,struct tr_pattern*,int ,scalar_t__) ;

__attribute__((used)) static mrb_bool
FUNC_10(mrb_state *VAR_3, mrb_value VAR_4, mrb_value VAR_5)
{
  struct tr_pattern VAR_6 = VAR_1;
  mrb_int VAR_7, VAR_8;
  char *VAR_9;
  mrb_int VAR_10;
  mrb_bool VAR_11 = VAR_0;
  uint8_t VAR_12[32];

  FUNC_4(VAR_3, FUNC_5(VAR_4));
  FUNC_9(VAR_3, &VAR_6, VAR_5, VAR_2);
  FUNC_7(&VAR_6, VAR_5, VAR_12);
  FUNC_8(VAR_3, &VAR_6);

  VAR_9 = FUNC_2(VAR_4);
  VAR_10 = FUNC_1(VAR_4);

  for (VAR_7=VAR_8=0; VAR_7<VAR_10; VAR_7++,VAR_8++) {
    if (VAR_7>VAR_8) VAR_9[VAR_8] = VAR_9[VAR_7];
    if (FUNC_6(VAR_12, VAR_9[VAR_7])) {
      VAR_11 = VAR_2;
      VAR_8--;
    }
  }
  if (VAR_11) {
    FUNC_3(FUNC_0(VAR_4), VAR_8);
    FUNC_2(VAR_4)[VAR_8] = 0;
  }
  return VAR_11;
}
