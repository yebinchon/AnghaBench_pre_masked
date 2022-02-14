
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int tag; } ;
typedef TYPE_1__ TTree ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;

int FUNC_3 (TTree *VAR_2, int VAR_3) {
 tailcall:
  switch (VAR_2->tag) {
    case 139: case 129: case 143:
    case 137: case 134:
      return 0;
    case 133: case 128:
      return 1;
    case 135: case 142:
      if (VAR_3 == VAR_0) return 0;
      else return 1;
    case 144:
      if (VAR_3 == VAR_1) return 1;

      VAR_2 = FUNC_1(VAR_2); goto tailcall;
    case 131:
      if (VAR_3 == VAR_0) return 0;

      VAR_2 = FUNC_1(VAR_2); goto tailcall;
    case 130:
      if (!FUNC_3(FUNC_1(VAR_2), VAR_3)) return 0;

      VAR_2 = FUNC_2(VAR_2); goto tailcall;
    case 138:
      if (FUNC_3(FUNC_2(VAR_2), VAR_3)) return 1;

      VAR_2 = FUNC_1(VAR_2); goto tailcall;
    case 140: case 136: case 132:

      VAR_2 = FUNC_1(VAR_2); goto tailcall;
    case 141:
      VAR_2 = FUNC_2(VAR_2); goto tailcall;
    default: FUNC_0(0); return 0;
  }
}
