
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct RProc {int const tt; struct RProc* c; struct RProc* super; } ;
struct RObject {int const tt; struct RObject* c; struct RObject* super; } ;
struct RClass {int const tt; struct RClass* c; struct RClass* super; } ;
typedef int mrb_value ;
typedef int mrb_state ;
struct TYPE_2__ {struct RProc* super; } ;




 struct RProc* FUNC_0 (int *,int ) ;
 struct RProc* FUNC_1 (int *,struct RProc**,int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,struct RProc*,int ,int ) ;
 int FUNC_8 (struct RProc*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static mrb_value
FUNC_11(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_value VAR_2 = FUNC_4(VAR_0, VAR_1, FUNC_3(VAR_0, "_recv"));
  mrb_value VAR_3 = FUNC_4(VAR_0, VAR_1, FUNC_3(VAR_0, "_klass"));
  mrb_value VAR_4 = FUNC_4(VAR_0, VAR_1, FUNC_3(VAR_0, "_owner"));
  mrb_value VAR_5 = FUNC_4(VAR_0, VAR_1, FUNC_3(VAR_0, "_name"));
  struct RClass *VAR_6, *VAR_7;
  struct RProc *VAR_8;
  struct RObject *VAR_9;

  switch (FUNC_10(VAR_3)) {
    case 128:
      VAR_6 = FUNC_2(VAR_3)->super->super;
      break;
    case 129:
      VAR_6 = FUNC_2(VAR_3)->super;
      break;
    default:
      VAR_6 = FUNC_2(VAR_4)->super;
      break;
  }

  VAR_8 = FUNC_1(VAR_0, &VAR_6, FUNC_9(VAR_5));
  if (!VAR_8)
    return FUNC_5();

  VAR_7 = VAR_6;
  while (VAR_6->tt == 129)
    VAR_6 = VAR_6->c;

  VAR_9 = FUNC_0(VAR_0, FUNC_6(VAR_0, VAR_1));
  FUNC_7(VAR_0, VAR_9, FUNC_3(VAR_0, "_owner"), FUNC_8(VAR_6));
  FUNC_7(VAR_0, VAR_9, FUNC_3(VAR_0, "_recv"), VAR_2);
  FUNC_7(VAR_0, VAR_9, FUNC_3(VAR_0, "_name"), VAR_5);
  FUNC_7(VAR_0, VAR_9, FUNC_3(VAR_0, "_proc"), FUNC_8(VAR_8));
  FUNC_7(VAR_0, VAR_9, FUNC_3(VAR_0, "_klass"), FUNC_8(VAR_7));

  return FUNC_8(VAR_9);
}
