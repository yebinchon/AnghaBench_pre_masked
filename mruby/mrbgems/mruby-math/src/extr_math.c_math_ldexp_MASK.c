
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef scalar_t__ mrb_int ;
typedef int mrb_float ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*,int *,scalar_t__*) ;

__attribute__((used)) static mrb_value
FUNC_3(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_float VAR_2;
  mrb_int VAR_3;

  FUNC_2(VAR_0, "fi", &VAR_2, &VAR_3);
  VAR_2 = FUNC_0(VAR_2, (int)VAR_3);

  return FUNC_1(VAR_0, VAR_2);
}
