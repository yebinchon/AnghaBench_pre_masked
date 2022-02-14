
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char*,char*,int) ;

__attribute__((used)) static mrb_value
FUNC_7(mrb_state *VAR_0, mrb_value VAR_1)
{
  char *VAR_2 = (char*)FUNC_3(VAR_1);
  mrb_int VAR_3 = FUNC_4();
  mrb_value VAR_4;
  FUNC_2(VAR_0, "o", &VAR_4);

  if (FUNC_0(VAR_4)) {
    FUNC_6(VAR_2, "fixnum", VAR_3-1);
  }

  else if (FUNC_1(VAR_4)) {
    FUNC_6(VAR_2, "float", VAR_3-1);
  }

  else if (FUNC_5(VAR_4)) {
    FUNC_6(VAR_2, "string", VAR_3-1);
  }
  else {
    FUNC_6(VAR_2, "anything", VAR_3-1);
  }

  VAR_2[VAR_3 - 1] = 0;
  return VAR_1;
}
