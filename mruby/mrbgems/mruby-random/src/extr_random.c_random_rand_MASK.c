
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rand_state ;
typedef int mrb_value ;
typedef int mrb_state ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static mrb_value
FUNC_6(mrb_state *VAR_1, rand_state *VAR_2, mrb_value VAR_3)
{
  mrb_value VAR_4;

  if (FUNC_0(VAR_3) == 0) {

    VAR_4 = FUNC_2(VAR_1, FUNC_4(VAR_2));



  }
  else {
    VAR_4 = FUNC_1(FUNC_5(VAR_2) % FUNC_0(VAR_3));
  }

  return VAR_4;
}
