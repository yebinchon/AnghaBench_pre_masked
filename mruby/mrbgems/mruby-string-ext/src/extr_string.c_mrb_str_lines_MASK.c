
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef scalar_t__ mrb_int ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,scalar_t__) ;

__attribute__((used)) static mrb_value
FUNC_7(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_value VAR_2;
  int VAR_3;
  mrb_int VAR_4;
  char *VAR_5 = FUNC_1(VAR_1);
  char *VAR_6 = VAR_5, *VAR_7;
  char *VAR_8 = VAR_5 + FUNC_0(VAR_1);

  VAR_2 = FUNC_2(VAR_0);
  VAR_3 = FUNC_5(VAR_0);
  while (VAR_6 < VAR_8) {
    VAR_7 = VAR_6;
    while (VAR_6 < VAR_8 && *VAR_6 != '\n') VAR_6++;
    if (*VAR_6 == '\n') VAR_6++;
    VAR_4 = (mrb_int) (VAR_6 - VAR_7);
    FUNC_3(VAR_0, VAR_2, FUNC_6(VAR_0, VAR_7, VAR_4));
    FUNC_4(VAR_0, VAR_3);
  }
  return VAR_2;
}
