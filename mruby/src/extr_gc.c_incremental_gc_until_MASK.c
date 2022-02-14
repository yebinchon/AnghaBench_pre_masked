
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mrb_state ;
typedef scalar_t__ mrb_gc_state ;
struct TYPE_4__ {scalar_t__ state; } ;
typedef TYPE_1__ mrb_gc ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_1(mrb_state *VAR_1, mrb_gc *VAR_2, mrb_gc_state VAR_3)
{
  do {
    FUNC_0(VAR_1, VAR_2, VAR_0);
  } while (VAR_2->state != VAR_3);
}
