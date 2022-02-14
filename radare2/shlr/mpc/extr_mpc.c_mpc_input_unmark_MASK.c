
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mpc_state_t ;
struct TYPE_3__ {int backtrack; int marks_num; int marks_slots; scalar_t__ type; int * buffer; void* lasts; void* marks; } ;
typedef TYPE_1__ mpc_input_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (void*,int) ;

__attribute__((used)) static void FUNC_2(mpc_input_t *VAR_2) {

  if (VAR_2->backtrack < 1) { return; }

  VAR_2->marks_num--;

  if (VAR_2->marks_slots > VAR_2->marks_num + VAR_2->marks_num / 2
  && VAR_2->marks_slots > VAR_0) {
    VAR_2->marks_slots =
      VAR_2->marks_num > VAR_0 ?
      VAR_2->marks_num : VAR_0;
    VAR_2->marks = FUNC_1(VAR_2->marks, sizeof(mpc_state_t) * VAR_2->marks_slots);
    VAR_2->lasts = FUNC_1(VAR_2->lasts, sizeof(char) * VAR_2->marks_slots);
  }

  if (VAR_2->type == VAR_1 && VAR_2->marks_num == 0) {
    FUNC_0(VAR_2->buffer);
    VAR_2->buffer = ((void*)0);
  }

}
