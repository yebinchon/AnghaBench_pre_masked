
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_method_flag_t ;
typedef int mrb_bool ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int *) ;
 int FUNC_1 (int *,int ,int ,int ) ;

__attribute__((used)) static mrb_value
FUNC_2(mrb_state *VAR_1, mrb_value VAR_2)
{
  mrb_bool VAR_3 = VAR_0;
  FUNC_0(VAR_1, "|b", &VAR_3);
  return FUNC_1(VAR_1, VAR_3, VAR_2, (mrb_method_flag_t)0);
}
