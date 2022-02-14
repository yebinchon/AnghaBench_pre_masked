
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {long pos; } ;
struct TYPE_5__ {scalar_t__ type; int file; int string; TYPE_1__ state; } ;
typedef TYPE_2__ mpc_input_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(mpc_input_t *VAR_3) {
  if (VAR_3->type == VAR_2 && VAR_3->state.pos == (long)FUNC_1(VAR_3->string)) { return 1; }
  if (VAR_3->type == VAR_0 && FUNC_0(VAR_3->file)) { return 1; }
  if (VAR_3->type == VAR_1 && FUNC_0(VAR_3->file)) { return 1; }
  return 0;
}
