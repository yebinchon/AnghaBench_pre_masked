
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct RProc {int flags; } ;
typedef int mrb_value ;
typedef int mrb_sym ;
struct TYPE_7__ {int proc_class; } ;
typedef TYPE_1__ mrb_state ;
typedef int mrb_method_t ;


 int FUNC_0 (int ,struct RProc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*,char*,int *,int *) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ,int ) ;
 int FUNC_6 (struct RProc*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static mrb_value
FUNC_10(mrb_state *VAR_2, mrb_value VAR_3)
{
  struct RProc *VAR_4;
  mrb_method_t VAR_5;
  mrb_sym VAR_6;
  mrb_value VAR_7 = FUNC_4();

  FUNC_3(VAR_2, "n&!", &VAR_6, &VAR_7);
  VAR_4 = (struct RProc*)FUNC_5(VAR_2, VAR_1, VAR_2->proc_class);
  FUNC_6(VAR_4, FUNC_7(VAR_7));
  VAR_4->flags |= VAR_0;
  FUNC_0(VAR_5, VAR_4);
  FUNC_2(VAR_2, FUNC_1(FUNC_8(VAR_2, VAR_3)), VAR_6, VAR_5);
  return FUNC_9(VAR_6);
}
