
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef size_t mrb_int ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,char*,int *) ;
 int FUNC_5 () ;

__attribute__((used)) static mrb_value
FUNC_6(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_int VAR_2;
  mrb_value VAR_3, VAR_4;

  FUNC_4(VAR_0, "o", &VAR_4);

  for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); ++VAR_2) {
    VAR_3 = FUNC_1(VAR_1)[VAR_2];
    if (FUNC_2(VAR_3) &&
        FUNC_0(VAR_3) > 1 &&
        FUNC_3(VAR_0, FUNC_1(VAR_3)[1], VAR_4))
      return VAR_3;
  }
  return FUNC_5();
}
