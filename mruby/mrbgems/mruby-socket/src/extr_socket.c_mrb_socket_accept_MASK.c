
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;


 scalar_t__ FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,int *) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static mrb_value
FUNC_4(mrb_state *VAR_0, mrb_value VAR_1)
{
  int VAR_2;
  mrb_int VAR_3;

  FUNC_2(VAR_0, "i", &VAR_3);
  VAR_2 = (int)FUNC_0(VAR_3, ((void*)0), ((void*)0));
  if (VAR_2 == -1) {
    FUNC_3(VAR_0, "accept");
  }
  return FUNC_1(VAR_2);
}
