
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct RRange {int dummy; } ;
typedef int mrb_value ;
struct TYPE_8__ {int range_class; } ;
typedef TYPE_1__ mrb_state ;


 int FUNC_0 (struct RRange*) ;
 int FUNC_1 (struct RRange*) ;
 scalar_t__ FUNC_2 (struct RRange*) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*,char*,int *) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ,int ) ;
 int FUNC_7 (TYPE_1__*,int ,int ) ;
 int FUNC_8 (int ) ;
 struct RRange* FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 () ;

__attribute__((used)) static mrb_value
FUNC_11(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_value VAR_2;
  struct RRange *VAR_3, *VAR_4;

  FUNC_5(VAR_0, "o", &VAR_2);

  if (FUNC_6(VAR_0, VAR_1, VAR_2)) return FUNC_10();
  if (!FUNC_7(VAR_0, VAR_2, VAR_0->range_class)) return FUNC_4();
  if (!FUNC_8(VAR_2)) return FUNC_4();

  VAR_3 = FUNC_9(VAR_0, VAR_1);
  VAR_4 = FUNC_9(VAR_0, VAR_2);
  if (!FUNC_3(VAR_0, FUNC_0(VAR_3), FUNC_0(VAR_4)) ||
      !FUNC_3(VAR_0, FUNC_1(VAR_3), FUNC_1(VAR_4)) ||
      (FUNC_2(VAR_3) != FUNC_2(VAR_4))) {
    return FUNC_4();
  }
  return FUNC_10();
}
