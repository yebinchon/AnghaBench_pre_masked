
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RString {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 char FUNC_4 (char) ;
 char FUNC_5 (char) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,struct RString*) ;
 struct RString* FUNC_8 (int ) ;

__attribute__((used)) static mrb_value
FUNC_9(mrb_state *VAR_0, mrb_value VAR_1)
{
  char *VAR_2, *VAR_3;
  int VAR_4 = 0;
  struct RString *VAR_5 = FUNC_8(VAR_1);

  FUNC_7(VAR_0, VAR_5);
  VAR_2 = FUNC_3(VAR_1);
  VAR_3 = VAR_2 + FUNC_2(VAR_1);
  while (VAR_2 < VAR_3) {
    if (FUNC_1(*VAR_2)) {
      *VAR_2 = FUNC_4(*VAR_2);
      VAR_4 = 1;
    }
    else if (FUNC_0(*VAR_2)) {
      *VAR_2 = FUNC_5(*VAR_2);
      VAR_4 = 1;
    }
    VAR_2++;
  }

  if (VAR_4) return VAR_1;
  return FUNC_6();
}
