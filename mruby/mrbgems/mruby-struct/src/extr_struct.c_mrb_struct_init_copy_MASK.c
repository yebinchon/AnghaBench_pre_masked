
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,char*,int *) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int ,char*) ;

__attribute__((used)) static mrb_value
FUNC_7(mrb_state *VAR_1, mrb_value VAR_2)
{
  mrb_value VAR_3;

  FUNC_2(VAR_1, "o", &VAR_3);

  if (FUNC_4(VAR_1, VAR_2, VAR_3)) return VAR_2;
  if (!FUNC_5(VAR_1, VAR_3, FUNC_3(VAR_1, VAR_2))) {
    FUNC_6(VAR_1, VAR_0, "wrong argument class");
  }
  if (!FUNC_0(VAR_3)) {
    FUNC_6(VAR_1, VAR_0, "corrupted struct");
  }
  FUNC_1(VAR_1, VAR_2, VAR_3);
  return VAR_2;
}
