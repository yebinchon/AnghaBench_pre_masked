
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int tag; } ;
typedef TYPE_1__ TTree ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4 (TTree *VAR_0) {
 tailcall:
  switch (VAR_0->tag) {
    case 138: case 129: case 142: case 136:
      return 1;
    case 128: case 133: case 131: case 134:
    case 141:
      return 0;
    case 139: case 135: case 132: case 143:
      VAR_0 = FUNC_2(VAR_0); goto tailcall;
    case 140:
      VAR_0 = FUNC_3(VAR_0); goto tailcall;
    case 130:
      if (!FUNC_1(FUNC_3(VAR_0))) return 0;

      VAR_0 = FUNC_2(VAR_0); goto tailcall;
    case 137:
      if (!FUNC_4(FUNC_2(VAR_0))) return 0;

      VAR_0 = FUNC_3(VAR_0); goto tailcall;
    default: FUNC_0(0); return 0;
  }
}
