
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mpc_state_t ;
struct TYPE_3__ {int backtrack; int marks_slots; char last; int mem_full; scalar_t__ mem_index; void* lasts; void* marks; scalar_t__ marks_num; scalar_t__ suppress; int * file; int * buffer; int * string; int state; int type; void* filename; } ;
typedef TYPE_1__ mpc_input_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 (void*,char const*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static mpc_input_t *FUNC_5(const char *VAR_3, FILE *VAR_4) {

  mpc_input_t *VAR_5 = FUNC_0(sizeof(mpc_input_t));

  VAR_5->filename = FUNC_0(FUNC_4(VAR_3) + 1);
  FUNC_3(VAR_5->filename, VAR_3);
  VAR_5->type = VAR_0;
  VAR_5->state = FUNC_2();

  VAR_5->string = ((void*)0);
  VAR_5->buffer = ((void*)0);
  VAR_5->file = VAR_4;

  VAR_5->suppress = 0;
  VAR_5->backtrack = 1;
  VAR_5->marks_num = 0;
  VAR_5->marks_slots = VAR_1;
  VAR_5->marks = FUNC_0(sizeof(mpc_state_t) * VAR_5->marks_slots);
  VAR_5->lasts = FUNC_0(sizeof(char) * VAR_5->marks_slots);
  VAR_5->last = '\0';

  VAR_5->mem_index = 0;
  FUNC_1(VAR_5->mem_full, 0, sizeof(char) * VAR_2);

  return VAR_5;
}
