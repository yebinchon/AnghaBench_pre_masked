
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct RClass {int flags; } ;
typedef int mrb_value ;
typedef int mrb_sym ;
struct TYPE_7__ {struct RClass* object_class; } ;
typedef TYPE_1__ mrb_state ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,struct RClass*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int,int *) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (struct RClass*) ;

__attribute__((used)) static void
FUNC_5(mrb_state *VAR_2, struct RClass *VAR_3, struct RClass *VAR_4)
{
  mrb_value VAR_5;
  mrb_sym VAR_6;

  if (!VAR_3)
    VAR_3 = VAR_2->object_class;
  VAR_3->flags |= VAR_0;
  VAR_5 = FUNC_4(VAR_3);
  FUNC_0(VAR_2, VAR_4);
  VAR_6 = FUNC_3(VAR_2, "inherited");
  if (!FUNC_1(VAR_2, VAR_5, VAR_6, VAR_1)) {
    mrb_value VAR_7 = FUNC_4(VAR_4);
    FUNC_2(VAR_2, VAR_5, VAR_6, 1, &VAR_7);
  }
}
