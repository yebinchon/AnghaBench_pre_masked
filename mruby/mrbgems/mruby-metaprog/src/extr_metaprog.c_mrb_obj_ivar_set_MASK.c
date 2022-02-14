
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_sym ;
typedef int mrb_state ;


 int FUNC_0 (int *,char*,int *,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int ,int ) ;

__attribute__((used)) static mrb_value
FUNC_3(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_sym VAR_2;
  mrb_value VAR_3;

  FUNC_0(VAR_0, "no", &VAR_2, &VAR_3);
  FUNC_1(VAR_0, VAR_2);
  FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
  return VAR_3;
}
