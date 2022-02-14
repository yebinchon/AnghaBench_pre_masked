
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mpc_state_t ;
struct TYPE_3__ {int backtrack; int marks_num; int marks_slots; scalar_t__ type; int buffer; int last; int * lasts; int state; int * marks; } ;
typedef TYPE_1__ mpc_input_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 void* FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(mpc_input_t *VAR_1) {

  if (VAR_1->backtrack < 1) { return; }

  VAR_1->marks_num++;

  if (VAR_1->marks_num > VAR_1->marks_slots) {
    VAR_1->marks_slots = VAR_1->marks_num + VAR_1->marks_num / 2;
    VAR_1->marks = FUNC_1(VAR_1->marks, sizeof(mpc_state_t) * VAR_1->marks_slots);
    VAR_1->lasts = FUNC_1(VAR_1->lasts, sizeof(char) * VAR_1->marks_slots);
  }

  VAR_1->marks[VAR_1->marks_num-1] = VAR_1->state;
  VAR_1->lasts[VAR_1->marks_num-1] = VAR_1->last;

  if (VAR_1->type == VAR_0 && VAR_1->marks_num == 1) {
    VAR_1->buffer = FUNC_0(1, 1);
  }

}
