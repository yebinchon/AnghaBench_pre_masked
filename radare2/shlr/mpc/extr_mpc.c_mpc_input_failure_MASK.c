
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; int file; int buffer; } ;
typedef TYPE_1__ mpc_input_t ;





 int VAR_0 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char,int ) ;

__attribute__((used)) static int FUNC_3(mpc_input_t *VAR_1, char VAR_2) {

  switch (VAR_1->type) {
    case 128: { break; }
    case 130: FUNC_0(VAR_1->file, -1, VAR_0); { break; }
    case 129: {

      if (!VAR_1->buffer) { FUNC_2(VAR_2, VAR_1->file); break; }

      if (VAR_1->buffer && FUNC_1(VAR_1)) {
        break;
      } else {
        FUNC_2(VAR_2, VAR_1->file);
      }
    }
    default: { break; }
  }
  return 0;
}
