
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;


 char* FUNC_0 (int *,int ) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,int *) ;
 int FUNC_3 (char const*,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char*,int *,int *,int *) ;
 int FUNC_6 () ;

__attribute__((used)) static mrb_value
FUNC_7(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_value VAR_2, VAR_3[2];
  mrb_int VAR_4 = FUNC_5(VAR_0, "S|oo", &VAR_2, VAR_3, VAR_3+1);
  const char *VAR_5 = FUNC_0(VAR_0, VAR_2);

  FUNC_4(VAR_1);

  switch (VAR_4) {
    case 1: return FUNC_1(VAR_5);
    case 2: return FUNC_2(VAR_5, VAR_3);
    case 3: return FUNC_3(VAR_5, VAR_3);
    default: return FUNC_6();
  }
}
