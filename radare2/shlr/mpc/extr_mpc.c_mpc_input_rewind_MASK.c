
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pos; } ;
struct TYPE_6__ {int backtrack; int marks_num; scalar_t__ type; TYPE_1__ state; int file; int * lasts; int last; TYPE_1__* marks; } ;
typedef TYPE_2__ mpc_input_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(mpc_input_t *VAR_2) {

  if (VAR_2->backtrack < 1) { return; }

  VAR_2->state = VAR_2->marks[VAR_2->marks_num-1];
  VAR_2->last = VAR_2->lasts[VAR_2->marks_num-1];

  if (VAR_2->type == VAR_0) {
    FUNC_0(VAR_2->file, VAR_2->state.pos, VAR_1);
  }

  FUNC_1(VAR_2);
}
