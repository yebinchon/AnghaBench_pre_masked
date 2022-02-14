
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef size_t mrb_int ;


 char* FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (int *,char*,int **,size_t*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char const*,int) ;
 int FUNC_7 (int *,char const*) ;

__attribute__((used)) static mrb_value
FUNC_8(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_value *VAR_2;
  mrb_value VAR_3;
  mrb_int VAR_4, VAR_5;
  char *VAR_6;

  FUNC_4(VAR_0, "*", &VAR_2, &VAR_4);
  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
    const char *VAR_7;
    VAR_3 = FUNC_2(VAR_0, VAR_2[VAR_5]);
    VAR_7 = FUNC_0(VAR_0, VAR_3);
    VAR_6 = FUNC_6(VAR_7, -1);
    if (FUNC_1(VAR_6) < 0) {
      FUNC_5(VAR_6);
      FUNC_7(VAR_0, VAR_7);
    }
    FUNC_5(VAR_6);
  }
  return FUNC_3(VAR_4);
}
