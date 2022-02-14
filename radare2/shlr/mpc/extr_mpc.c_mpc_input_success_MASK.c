
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int row; scalar_t__ col; int pos; } ;
struct TYPE_7__ {scalar_t__ type; char* buffer; char last; TYPE_1__ state; } ;
typedef TYPE_2__ mpc_input_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 char* FUNC_1 (TYPE_2__*,int) ;
 char* FUNC_2 (char*,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(mpc_input_t *VAR_1, char VAR_2, char **VAR_3) {

  if (VAR_1->type == VAR_0
  && VAR_1->buffer && !FUNC_0(VAR_1)) {
    VAR_1->buffer = FUNC_2(VAR_1->buffer, FUNC_3(VAR_1->buffer) + 2);
    VAR_1->buffer[FUNC_3(VAR_1->buffer) + 1] = '\0';
    VAR_1->buffer[FUNC_3(VAR_1->buffer) + 0] = VAR_2;
  }

  VAR_1->last = VAR_2;
  VAR_1->state.pos++;
  VAR_1->state.col++;

  if (VAR_2 == '\n') {
    VAR_1->state.col = 0;
    VAR_1->state.row++;
  }

  if (VAR_3) {
    (*VAR_3) = FUNC_1(VAR_1, 2);
    (*VAR_3)[0] = VAR_2;
    (*VAR_3)[1] = '\0';
  }

  return 1;
}
