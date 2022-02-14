
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef scalar_t__ mrb_int ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,scalar_t__*) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static mrb_value
FUNC_5(mrb_state *VAR_1, mrb_value VAR_2)
{
  mrb_int VAR_3 = VAR_0;

  FUNC_1(VAR_1, "|i", &VAR_3);
  if (FUNC_3(FUNC_4(VAR_1, VAR_2), (int)VAR_3) != 0)
    FUNC_2(VAR_1, "shutdown");
  return FUNC_0(0);
}
