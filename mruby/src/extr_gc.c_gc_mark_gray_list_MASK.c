
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int mrb_state ;
struct TYPE_6__ {TYPE_2__* gray_list; } ;
typedef TYPE_1__ mrb_gc ;
struct TYPE_7__ {struct TYPE_7__* gcnext; } ;


 int FUNC_0 (int *,TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_2(mrb_state *VAR_0, mrb_gc *VAR_1) {
  while (VAR_1->gray_list) {
    if (FUNC_1(VAR_1->gray_list))
      FUNC_0(VAR_0, VAR_1, VAR_1->gray_list);
    else
      VAR_1->gray_list = VAR_1->gray_list->gcnext;
  }
}
