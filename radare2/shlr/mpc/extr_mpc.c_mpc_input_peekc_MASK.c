
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t pos; } ;
struct TYPE_7__ {int type; char* string; int file; int buffer; TYPE_1__ state; } ;
typedef TYPE_2__ mpc_input_t ;





 int VAR_0 ;
 int FUNC_0 (int ) ;
 char FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int ) ;
 char FUNC_3 (int ) ;
 char FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (char,int ) ;

__attribute__((used)) static char FUNC_7(mpc_input_t *VAR_1) {

  char VAR_2 = '\0';

  switch (VAR_1->type) {
    case 128: return VAR_1->string[VAR_1->state.pos];
    case 130:

      VAR_2 = FUNC_1(VAR_1->file);
      if (FUNC_0(VAR_1->file)) { return '\0'; }

      FUNC_2(VAR_1->file, -1, VAR_0);
      return VAR_2;

    case 129:

      if (!VAR_1->buffer) {
        VAR_2 = FUNC_3(VAR_1->file);
        if (FUNC_0(VAR_1->file)) { return '\0'; }
        FUNC_6(VAR_2, VAR_1->file);
        return VAR_2;
      }

      if (VAR_1->buffer && FUNC_5(VAR_1)) {
        return FUNC_4(VAR_1);
      } else {
        VAR_2 = FUNC_3(VAR_1->file);
        if (FUNC_0(VAR_1->file)) { return '\0'; }
        FUNC_6(VAR_2, VAR_1->file);
        return VAR_2;
      }

    default: return VAR_2;
  }

}
