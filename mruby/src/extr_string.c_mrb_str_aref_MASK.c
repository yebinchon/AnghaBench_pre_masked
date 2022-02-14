
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;


 int FUNC_0 (int ) ;




 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int ,int ,int ,int *,int *) ;
 int FUNC_8 (int *,int ,int ,int ) ;
 int FUNC_9 (int *,int ,int ,int ) ;

__attribute__((used)) static mrb_value
FUNC_10(mrb_state *VAR_0, mrb_value VAR_1, mrb_value VAR_2, mrb_value VAR_3)
{
  mrb_int VAR_4, VAR_5;

  switch (FUNC_7(VAR_0, VAR_1, VAR_2, VAR_3, &VAR_4, &VAR_5)) {
    case 129:
      return FUNC_8(VAR_0, VAR_1, VAR_4, VAR_5);
    case 130:
      VAR_1 = FUNC_9(VAR_0, VAR_1, VAR_4, VAR_5);
      if (FUNC_6(VAR_3) && !FUNC_1(VAR_1) && FUNC_0(VAR_1) == 0) return FUNC_2();
      return VAR_1;
    case 131:
      if (FUNC_5(VAR_2)) {
        return FUNC_4(VAR_0, VAR_2);
      }
      else {
        return FUNC_3(VAR_0, VAR_1, VAR_4, VAR_5);
      }
    case 128:
    default:
      return FUNC_2();
  }
}
