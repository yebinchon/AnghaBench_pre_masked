
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_bool ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int *,int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,int ,int ) ;

__attribute__((used)) static mrb_value
FUNC_3(mrb_state *VAR_1, mrb_value VAR_2)
{
  mrb_value VAR_3, VAR_4;
  mrb_bool VAR_5 = VAR_0;

  FUNC_0(VAR_1, "oo|b", &VAR_3, &VAR_4, &VAR_5);
  FUNC_2(VAR_1, FUNC_1(VAR_2), VAR_3, VAR_4, VAR_5);
  return VAR_2;
}
