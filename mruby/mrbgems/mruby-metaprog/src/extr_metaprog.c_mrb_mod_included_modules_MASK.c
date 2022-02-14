
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct RClass {scalar_t__ tt; struct RClass* super; TYPE_1__* c; } ;
typedef int mrb_value ;
typedef int mrb_state ;
struct TYPE_2__ {scalar_t__ tt; } ;


 int FUNC_0 (struct RClass*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 struct RClass* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static mrb_value
FUNC_5(mrb_state *VAR_2, mrb_value VAR_3)
{
  mrb_value VAR_4;
  struct RClass *VAR_5 = FUNC_3(VAR_3);
  struct RClass *VAR_6 = VAR_5;

  FUNC_0(VAR_6);
  VAR_4 = FUNC_1(VAR_2);
  while (VAR_5) {
    if (VAR_5 != VAR_6 && VAR_5->tt == VAR_0) {
      if (VAR_5->c->tt == VAR_1) {
        FUNC_2(VAR_2, VAR_4, FUNC_4(VAR_5->c));
      }
    }
    VAR_5 = VAR_5->super;
  }

  return VAR_4;
}
