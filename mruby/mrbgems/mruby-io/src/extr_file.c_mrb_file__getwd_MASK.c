
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;


 int * FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,int) ;

mrb_value
FUNC_5(mrb_state *VAR_1, mrb_value VAR_2)
{
  mrb_value VAR_3;
  char VAR_4[VAR_0], *VAR_5;

  if (FUNC_0(VAR_4, VAR_0) == ((void*)0)) {
    FUNC_2(VAR_1, "getcwd(2)");
  }
  VAR_5 = FUNC_4(VAR_4, -1);
  VAR_3 = FUNC_1(VAR_1, VAR_5);
  FUNC_3(VAR_5);
  return VAR_3;
}
