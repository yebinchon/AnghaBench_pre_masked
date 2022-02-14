
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;


 char* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char const*,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,char*,int *,int *,int*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,char*) ;

mrb_value
FUNC_9(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_value VAR_2 = FUNC_7();
  mrb_value VAR_3 = FUNC_7();
  mrb_int VAR_4, VAR_5 = -1;
  const char *VAR_6;
  int VAR_7, VAR_8;

  FUNC_3(VAR_0, "S|Si", &VAR_2, &VAR_3, &VAR_5);
  if (FUNC_6(VAR_3)) {
    VAR_3 = FUNC_8(VAR_0, "r");
  }
  if (VAR_5 < 0) {
    VAR_5 = 0666;
  }

  VAR_6 = FUNC_0(VAR_0, VAR_2);
  VAR_7 = FUNC_5(VAR_0, FUNC_0(VAR_0, VAR_3));
  VAR_8 = FUNC_4(VAR_0, VAR_7);
  VAR_4 = FUNC_1(VAR_0, VAR_6, VAR_8, VAR_5);
  return FUNC_2(VAR_4);
}
