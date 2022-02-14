
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct RClass {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_sym ;
struct TYPE_13__ {TYPE_2__* c; } ;
typedef TYPE_3__ mrb_state ;
struct TYPE_12__ {TYPE_1__* ci; } ;
struct TYPE_11__ {int mid; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int,int *) ;
 int FUNC_2 (TYPE_3__*,int ,int ) ;
 int FUNC_3 (TYPE_3__*,int ,int ,int,int ) ;
 int FUNC_4 (TYPE_3__*,int ,int ,int,int *,int ) ;
 int FUNC_5 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_3__*,int ,int,int *,int ,struct RClass*) ;

__attribute__((used)) static mrb_value
FUNC_9(mrb_state *VAR_0, mrb_value VAR_1, mrb_value VAR_2, mrb_value VAR_3, struct RClass *VAR_4,
      int VAR_5, mrb_value *VAR_6, mrb_value VAR_7)
{
  mrb_value VAR_8;
  mrb_sym VAR_9 = VAR_0->c->ci->mid;

  VAR_0->c->ci->mid = FUNC_7(VAR_3);
  if (FUNC_6(VAR_2)) {
    mrb_value VAR_10 = FUNC_1(VAR_0, VAR_5, VAR_6);
    FUNC_2(VAR_0, VAR_10, VAR_3);
    VAR_8 = FUNC_3(VAR_0, VAR_1, FUNC_5(VAR_0, "method_missing"), VAR_5 + 1, FUNC_0(VAR_10));
  }
  else if (!FUNC_6(VAR_7)) {




    VAR_8 = FUNC_4(VAR_0, VAR_1, FUNC_7(VAR_3), VAR_5, VAR_6, VAR_7);
  }
  else {
    VAR_8 = FUNC_8(VAR_0, VAR_2, VAR_5, VAR_6, VAR_1, VAR_4);
  }
  VAR_0->c->ci->mid = VAR_9;
  return VAR_8;
}
