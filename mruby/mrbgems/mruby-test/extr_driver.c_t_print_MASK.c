
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef size_t mrb_int ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (int *,char*,int **,size_t*) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static mrb_value
FUNC_7(mrb_state *VAR_1, mrb_value VAR_2)
{
  mrb_value *VAR_3;
  mrb_int VAR_4;
  mrb_int VAR_5;

  FUNC_4(VAR_1, "*!", &VAR_3, &VAR_4);
  for (VAR_5 = 0; VAR_5 < VAR_4; ++VAR_5) {
    mrb_value VAR_6 = FUNC_6(VAR_1, VAR_3[VAR_5]);
    FUNC_3(FUNC_1(VAR_6), FUNC_0(VAR_6), 1, VAR_0);
  }
  FUNC_2(VAR_0);

  return FUNC_5();
}
