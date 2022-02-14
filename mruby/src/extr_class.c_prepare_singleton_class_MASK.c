
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct RObject {int dummy; } ;
struct RClass {scalar_t__ tt; int flags; struct RClass* super; struct RClass* c; scalar_t__ iv; int mt; } ;
struct RBasic {scalar_t__ tt; int flags; struct RClass* c; } ;
struct TYPE_9__ {struct RClass* class_class; } ;
typedef TYPE_1__ mrb_state ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,struct RClass*) ;
 int FUNC_2 (TYPE_1__*,struct RBasic*,struct RBasic*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,scalar_t__,struct RClass*) ;
 int FUNC_5 (TYPE_1__*,struct RObject*,int ,int ) ;
 int FUNC_6 (struct RBasic*) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_7(mrb_state *VAR_6, struct RBasic *VAR_7)
{
  struct RClass *VAR_8, *VAR_9;

  if (VAR_7->c->tt == VAR_4) return;
  VAR_8 = (struct RClass*)FUNC_4(VAR_6, VAR_4, VAR_6->class_class);
  VAR_8->flags |= VAR_0;
  VAR_8->mt = FUNC_0(VAR_5, VAR_6);
  VAR_8->iv = 0;
  if (VAR_7->tt == VAR_2) {
    VAR_9 = (struct RClass*)VAR_7;
    if (!VAR_9->super) {
      VAR_8->super = VAR_6->class_class;
    }
    else {
      VAR_8->super = VAR_9->super->c;
    }
  }
  else if (VAR_7->tt == VAR_4) {
    VAR_9 = (struct RClass*)VAR_7;
    while (VAR_9->super->tt == VAR_3)
      VAR_9 = VAR_9->super;
    FUNC_1(VAR_6, VAR_9->super);
    VAR_8->super = VAR_9->super->c;
  }
  else {
    VAR_8->super = VAR_7->c;
    FUNC_7(VAR_6, (struct RBasic*)VAR_8);
  }
  VAR_7->c = VAR_8;
  FUNC_2(VAR_6, (struct RBasic*)VAR_7, (struct RBasic*)VAR_8);
  FUNC_2(VAR_6, (struct RBasic*)VAR_8, (struct RBasic*)VAR_7);
  FUNC_5(VAR_6, (struct RObject*)VAR_8, FUNC_3(VAR_6, "__attached__"), FUNC_6(VAR_7));
  VAR_8->flags |= VAR_7->flags & VAR_1;
}
