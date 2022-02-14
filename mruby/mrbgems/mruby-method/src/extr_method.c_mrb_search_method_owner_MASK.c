
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RProc {int dummy; } ;
struct RClass {scalar_t__ tt; struct RClass* c; } ;
typedef int mrb_value ;
typedef int mrb_sym ;
typedef int mrb_state ;
typedef scalar_t__ mrb_bool ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct RProc* FUNC_0 (int *,struct RClass**,int ) ;
 int FUNC_1 (int *,int ,char*,int,int ,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ,char*,int ,struct RClass*) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;

__attribute__((used)) static void
FUNC_8(mrb_state *VAR_2, struct RClass *VAR_3, mrb_value VAR_4, mrb_sym VAR_5, struct RClass **VAR_6, struct RProc **VAR_7, mrb_bool VAR_8)
{
  mrb_value VAR_9;

  *VAR_6 = VAR_3;
  *VAR_7 = FUNC_0(VAR_2, VAR_6, VAR_5);
  if (!*VAR_7) {
    if (VAR_8) {
      goto name_error;
    }
    if (!FUNC_4(VAR_2, VAR_4, FUNC_2(VAR_2, "respond_to_missing?"))) {
      goto name_error;
    }
    VAR_9 = FUNC_1(VAR_2, VAR_4, "respond_to_missing?", 2, FUNC_5(VAR_5), FUNC_7());
    if (!FUNC_6(VAR_9)) {
      goto name_error;
    }
    *VAR_6 = VAR_3;
  }

  while ((*VAR_6)->tt == VAR_1)
    *VAR_6 = (*VAR_6)->c;

  return;

name_error:
  FUNC_3(VAR_2, VAR_0, "undefined method '%n' for class '%C'", VAR_5, VAR_3);
}
