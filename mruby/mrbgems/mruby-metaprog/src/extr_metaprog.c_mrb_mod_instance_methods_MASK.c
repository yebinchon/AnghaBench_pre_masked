
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RClass {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_bool ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,struct RClass*,int ) ;
 struct RClass* FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int *) ;

__attribute__((used)) static mrb_value
FUNC_3(mrb_state *VAR_1, mrb_value VAR_2)
{
  struct RClass *VAR_3 = FUNC_1(VAR_2);
  mrb_bool VAR_4 = VAR_0;
  FUNC_2(VAR_1, "|b", &VAR_4);
  return FUNC_0(VAR_1, VAR_4, VAR_3, 0);
}
