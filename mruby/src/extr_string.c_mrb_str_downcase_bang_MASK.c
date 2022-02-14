
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RString {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef scalar_t__ mrb_bool ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (struct RString*) ;
 char* FUNC_2 (struct RString*) ;
 char FUNC_3 (char) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 () ;
 int FUNC_5 (int *,struct RString*) ;
 struct RString* FUNC_6 (int ) ;

__attribute__((used)) static mrb_value
FUNC_7(mrb_state *VAR_2, mrb_value VAR_3)
{
  char *VAR_4, *VAR_5;
  mrb_bool VAR_6 = VAR_0;
  struct RString *VAR_7 = FUNC_6(VAR_3);

  FUNC_5(VAR_2, VAR_7);
  VAR_4 = FUNC_2(VAR_7);
  VAR_5 = FUNC_2(VAR_7) + FUNC_1(VAR_7);
  while (VAR_4 < VAR_5) {
    if (FUNC_0(*VAR_4)) {
      *VAR_4 = FUNC_3(*VAR_4);
      VAR_6 = VAR_1;
    }
    VAR_4++;
  }

  if (VAR_6) return VAR_3;
  return FUNC_4();
}
