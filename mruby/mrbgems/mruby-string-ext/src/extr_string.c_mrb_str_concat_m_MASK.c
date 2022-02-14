
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,char*,int *) ;
 int FUNC_6 (int *,int ,int ) ;

__attribute__((used)) static mrb_value
FUNC_7(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_value VAR_2;

  FUNC_5(VAR_0, "o", &VAR_2);
  if (FUNC_3(VAR_2) || FUNC_4(VAR_2))



    VAR_2 = FUNC_0(VAR_0, VAR_2);

  else
    FUNC_2(VAR_0, VAR_2);
  FUNC_6(VAR_0, VAR_1, VAR_2);
  return VAR_1;
}
