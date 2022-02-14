
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int top; TYPE_4__* ci; } ;
typedef TYPE_3__ lua_State ;
struct TYPE_9__ {int base; int * savedpc; } ;
struct TYPE_10__ {TYPE_1__ l; } ;
struct TYPE_12__ {int callstatus; int top; TYPE_2__ u; } ;
typedef int StkId ;
typedef int OpCode ;
typedef int Instruction ;
typedef TYPE_4__ CallInfo ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_3__*,int,int) ;
 int FUNC_9 (TYPE_3__*,int,int ) ;

void FUNC_10 (lua_State *VAR_3) {
  CallInfo *VAR_4 = VAR_3->ci;
  StkId VAR_5 = VAR_4->u.l.base;
  Instruction VAR_6 = *(VAR_4->u.l.savedpc - 1);
  OpCode VAR_7 = FUNC_3(VAR_6);
  switch (VAR_7) {
    case 154: case 131: case 138: case 147: case 143:
    case 153: case 151: case 150: case 133: case 132:
    case 139: case 137:
    case 128: case 152: case 141:
    case 144: case 145: case 136: {
      FUNC_9(VAR_3, VAR_5 + FUNC_0(VAR_6), --VAR_3->top);
      break;
    }
    case 142: case 140: case 146: {
      int VAR_8 = !FUNC_5(VAR_3->top - 1);
      VAR_3->top--;
      if (VAR_4->callstatus & VAR_0) {
        FUNC_7(VAR_7 == 142);
        VAR_4->callstatus ^= VAR_0;
        VAR_8 = !VAR_8;
      }
      FUNC_7(FUNC_3(*VAR_4->u.l.savedpc) == VAR_1);
      if (VAR_8 != FUNC_0(VAR_6))
        VAR_4->u.l.savedpc++;
      break;
    }
    case 148: {
      StkId VAR_9 = VAR_3->top - 1;
      int VAR_10 = FUNC_1(VAR_6);
      int VAR_11 = FUNC_4(VAR_9 - 1 - (VAR_5 + VAR_10));
      FUNC_8(VAR_3, VAR_9 - 2, VAR_9);
      if (VAR_11 > 1) {
        VAR_3->top = VAR_9 - 1;
        FUNC_6(VAR_3, VAR_11);
      }

      FUNC_8(VAR_3, VAR_4->u.l.base + FUNC_0(VAR_6), VAR_3->top - 1);
      VAR_3->top = VAR_4->top;
      break;
    }
    case 129: {
      FUNC_7(FUNC_3(*VAR_4->u.l.savedpc) == VAR_2);
      VAR_3->top = VAR_4->top;
      break;
    }
    case 149: {
      if (FUNC_2(VAR_6) - 1 >= 0)
        VAR_3->top = VAR_4->top;
      break;
    }
    case 130: case 134: case 135:
      break;
    default: FUNC_7(0);
  }
}
