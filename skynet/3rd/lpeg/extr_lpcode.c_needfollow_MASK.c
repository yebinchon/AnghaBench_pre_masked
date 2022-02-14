
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int tag; } ;
typedef TYPE_1__ TTree ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3 (TTree *VAR_0) {
 tailcall:
  switch (VAR_0->tag) {
    case 137: case 129: case 141:
    case 135: case 128: case 142: case 133:
    case 131: case 134: case 139: case 140:
      return 0;
    case 136: case 132:
      return 1;
    case 138:
      VAR_0 = FUNC_1(VAR_0); goto tailcall;
    case 130:
      VAR_0 = FUNC_2(VAR_0); goto tailcall;
    default: FUNC_0(0); return 0;
  }
}
