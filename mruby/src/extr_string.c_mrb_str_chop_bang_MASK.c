
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RString {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;


 int FUNC_0 (struct RString*) ;
 char* FUNC_1 (struct RString*) ;
 int FUNC_2 (struct RString*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,struct RString*) ;
 struct RString* FUNC_5 (int ) ;
 int FUNC_6 (char const*,char const*) ;

__attribute__((used)) static mrb_value
FUNC_7(mrb_state *VAR_0, mrb_value VAR_1)
{
  struct RString *VAR_2 = FUNC_5(VAR_1);

  FUNC_4(VAR_0, VAR_2);
  if (FUNC_0(VAR_2) > 0) {
    mrb_int VAR_3;
    VAR_3 = FUNC_0(VAR_2) - 1;

    if (FUNC_1(VAR_2)[VAR_3] == '\n') {
      if (VAR_3 > 0 &&
          FUNC_1(VAR_2)[VAR_3-1] == '\r') {
        VAR_3--;
      }
    }
    FUNC_2(VAR_2, VAR_3);
    FUNC_1(VAR_2)[VAR_3] = '\0';
    return VAR_1;
  }
  return FUNC_3();
}
