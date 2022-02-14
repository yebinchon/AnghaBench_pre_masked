
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int ncode; TYPE_1__* p; } ;
struct TYPE_11__ {int code; } ;
struct TYPE_12__ {TYPE_2__ i; } ;
struct TYPE_10__ {TYPE_3__* code; } ;
typedef TYPE_3__ Instruction ;
typedef TYPE_4__ CompileState ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_4__*,int,int) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_5 (CompileState *VAR_1) {
  Instruction *VAR_2 = VAR_1->p->code;
  int VAR_3;
  for (VAR_3 = 0; VAR_3 < VAR_1->ncode; VAR_3 += FUNC_4(&VAR_2[VAR_3])) {
   redo:
    switch (VAR_2[VAR_3].i.code) {
      case 138: case 139: case 137: case 132:
      case 140: case 129: case 128:
      case 130: {
        FUNC_3(VAR_1, VAR_3, FUNC_1(VAR_2, VAR_3));
        break;
      }
      case 133: {
        int VAR_4 = FUNC_2(VAR_2, VAR_3);
        switch (VAR_2[VAR_4].i.code) {
          case 131: case 135: case 134:
          case 136: {
            VAR_2[VAR_3] = VAR_2[VAR_4];
            VAR_2[VAR_3 + 1].i.code = VAR_0;
            break;
          }
          case 137: case 132:
          case 140: {
            int VAR_5 = FUNC_1(VAR_2, VAR_4);
            VAR_2[VAR_3] = VAR_2[VAR_4];
            FUNC_3(VAR_1, VAR_3, VAR_5);
            goto redo;
          }
          default: {
            FUNC_3(VAR_1, VAR_3, VAR_4);
            break;
          }
        }
        break;
      }
      default: break;
    }
  }
  FUNC_0(VAR_2[VAR_3 - 1].i.code == 136);
}
