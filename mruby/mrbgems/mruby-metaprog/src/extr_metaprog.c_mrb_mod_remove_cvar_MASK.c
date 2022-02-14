
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_sym ;
typedef int mrb_state ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,char*,int *) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ,char*,int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;

__attribute__((used)) static mrb_value
FUNC_7(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_value VAR_2;
  mrb_sym VAR_3;

  FUNC_2(VAR_0, "n", &VAR_3);
  FUNC_0(VAR_0, VAR_3);

  VAR_2 = FUNC_3(VAR_0, VAR_1, VAR_3);
  if (!FUNC_6(VAR_2)) return VAR_2;

  if (FUNC_1(VAR_0, VAR_1, VAR_3)) {
    FUNC_4(VAR_0, VAR_3, "cannot remove %n for %v", VAR_3, VAR_1);
  }

  FUNC_4(VAR_0, VAR_3, "class variable %n not defined for %v", VAR_3, VAR_1);


 return FUNC_5();
}
