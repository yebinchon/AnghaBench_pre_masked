
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef size_t mrb_int ;


 size_t FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,size_t,int ) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static mrb_value
FUNC_7(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_int VAR_2 = FUNC_3(FUNC_5(VAR_0, 0));
  mrb_value *VAR_3;
  mrb_value VAR_4;

  FUNC_4(VAR_0, "o", &VAR_4);
  FUNC_6(VAR_0, VAR_1);
  VAR_3 = FUNC_1(VAR_1);
  if (VAR_3 == ((void*)0) || VAR_2 >= FUNC_0(VAR_1)) {
    FUNC_2(VAR_0, VAR_1, VAR_2, VAR_4);
  }
  else {
    VAR_3[VAR_2] = VAR_4;
  }
  return VAR_4;
}
