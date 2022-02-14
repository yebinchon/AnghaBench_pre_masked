
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;


 int * FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,int *) ;
 int FUNC_2 (int *,char*) ;
 char* FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char*) ;

__attribute__((used)) static mrb_value
FUNC_5(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_value VAR_2;
  char *VAR_3;

  FUNC_1(VAR_0, "S", &VAR_2);
  VAR_3 = FUNC_3(VAR_0, VAR_2);
  if (FUNC_0(VAR_3) == ((void*)0)) {
    FUNC_4(VAR_0, "mkdtemp");
  }
  return FUNC_2(VAR_0, VAR_3);
}
