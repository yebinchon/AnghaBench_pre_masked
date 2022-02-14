
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ func; scalar_t__ irep; } ;
struct RProc {TYPE_1__ body; } ;
struct RClass {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct RProc*) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 struct RClass* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,char*,int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *,int ,scalar_t__) ;
 struct RProc* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 () ;

__attribute__((used)) static mrb_value
FUNC_12(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_value VAR_2, VAR_3, VAR_4, VAR_5;
  struct RClass *VAR_6, *VAR_7;
  struct RProc *VAR_8, *VAR_9;

  FUNC_5(VAR_0, "o", &VAR_2);
  if (!FUNC_8(VAR_0, VAR_2, FUNC_2(VAR_0, VAR_1)))
    return FUNC_4();

  if (FUNC_2(VAR_0, VAR_1) != FUNC_2(VAR_0, VAR_2))
    return FUNC_4();

  VAR_7 = FUNC_3(FUNC_0(VAR_1, "_klass"));
  if (VAR_7 != FUNC_3(FUNC_0(VAR_2, "_klass")))
    return FUNC_4();

  VAR_6 = FUNC_3(FUNC_0(VAR_1, "_owner"));
  if (VAR_6 != FUNC_3(FUNC_0(VAR_2, "_owner")))
    return FUNC_4();

  VAR_3 = FUNC_0(VAR_1, "_recv");
  if (!FUNC_7(VAR_0, VAR_3, FUNC_0(VAR_2, "_recv")))
    return FUNC_4();

  VAR_4 = FUNC_0(VAR_1, "_proc");
  VAR_5 = FUNC_0(VAR_2, "_proc");
  if (FUNC_6(VAR_4) && FUNC_6(VAR_5)) {
    if (FUNC_10(FUNC_0(VAR_1, "_name")) == FUNC_10(FUNC_0(VAR_2, "_name")))
      return FUNC_11();
    else
      return FUNC_4();
  }

  if (FUNC_6(VAR_4))
    return FUNC_4();
  if (FUNC_6(VAR_5))
    return FUNC_4();

  VAR_8 = FUNC_9(VAR_4);
  VAR_9 = FUNC_9(VAR_5);
  if (FUNC_1(VAR_8)) {
    if (!FUNC_1(VAR_9))
      return FUNC_4();
    if (VAR_8->body.func != VAR_9->body.func)
      return FUNC_4();
  }
  else {
    if (FUNC_1(VAR_9))
      return FUNC_4();
    if (VAR_8->body.irep != VAR_9->body.irep)
      return FUNC_4();
  }

  return FUNC_11();
}
