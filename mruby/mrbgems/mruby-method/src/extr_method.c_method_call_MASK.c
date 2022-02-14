
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RClass {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;


 int FUNC_0 (int *,int ,int ,int ,struct RClass*,int ,int *,int ) ;
 struct RClass* FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int **,int *,int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static mrb_value
FUNC_5(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_value VAR_2 = FUNC_4(VAR_0, VAR_1, FUNC_3(VAR_0, "_proc"));
  mrb_value VAR_3 = FUNC_4(VAR_0, VAR_1, FUNC_3(VAR_0, "_name"));
  mrb_value VAR_4 = FUNC_4(VAR_0, VAR_1, FUNC_3(VAR_0, "_recv"));
  struct RClass *VAR_5 = FUNC_1(FUNC_4(VAR_0, VAR_1, FUNC_3(VAR_0, "_owner")));
  mrb_int VAR_6;
  mrb_value *VAR_7, VAR_8;

  FUNC_2(VAR_0, "*&", &VAR_7, &VAR_6, &VAR_8);
  return FUNC_0(VAR_0, VAR_4, VAR_2, VAR_3, VAR_5, VAR_6, VAR_7, VAR_8);
}
