
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_bool ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static mrb_value
FUNC_4(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_value VAR_2;
  mrb_bool VAR_3;

  FUNC_1(VAR_0, "o", &VAR_2);
  VAR_3 = (FUNC_2(VAR_2)) && FUNC_3(VAR_0, VAR_1, VAR_2);

  return FUNC_0(VAR_3);
}
