
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct RProc {struct RClass* c; } ;
struct RClass {int dummy; } ;
typedef int mrb_value ;
struct TYPE_7__ {struct RClass* proc_class; } ;
typedef TYPE_1__ mrb_state ;


 int FUNC_0 (TYPE_1__*,int,int *) ;
 int FUNC_1 (TYPE_1__*,int ,char*,int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 struct RProc* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static mrb_value
FUNC_7(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_value VAR_2 = FUNC_3(VAR_0, VAR_1, FUNC_2(VAR_0, "_proc"));
  struct RProc *VAR_3;
  struct RClass *VAR_4;
  mrb_value VAR_5;

  if (FUNC_4(VAR_2)) {
    mrb_value VAR_6 = FUNC_6(FUNC_2(VAR_0, "rest"));
    mrb_value VAR_7 = FUNC_0(VAR_0, 1, &VAR_6);
    return FUNC_0(VAR_0, 1, &VAR_7);
  }

  VAR_3 = FUNC_5(VAR_2);
  VAR_4 = VAR_3->c;
  VAR_3->c = VAR_0->proc_class;
  VAR_5 = FUNC_1(VAR_0, VAR_2, "parameters", 0);
  VAR_3->c = VAR_4;
  return VAR_5;
}
