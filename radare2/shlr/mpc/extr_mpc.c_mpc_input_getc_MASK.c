
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t pos; } ;
struct TYPE_7__ {int type; char* string; int file; int buffer; TYPE_1__ state; } ;
typedef TYPE_2__ mpc_input_t ;





 char FUNC_0 (int ) ;
 char FUNC_1 (int ) ;
 char FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static char FUNC_4(mpc_input_t *VAR_0) {

  char VAR_1 = '\0';

  switch (VAR_0->type) {

    case 128: return VAR_0->string[VAR_0->state.pos];
    case 130: VAR_1 = FUNC_0(VAR_0->file); return VAR_1;
    case 129:

      if (!VAR_0->buffer) { VAR_1 = FUNC_1(VAR_0->file); return VAR_1; }

      if (VAR_0->buffer && FUNC_3(VAR_0)) {
        VAR_1 = FUNC_2(VAR_0);
        return VAR_1;
      } else {
        VAR_1 = FUNC_1(VAR_0->file);
        return VAR_1;
      }

    default: return VAR_1;
  }
}
