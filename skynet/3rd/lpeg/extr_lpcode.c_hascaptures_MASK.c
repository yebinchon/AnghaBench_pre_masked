
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int tag; } ;
typedef TYPE_1__ TTree ;







 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int (*) (TYPE_1__*),int ) ;
 int * VAR_0 ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;

int FUNC_4 (TTree *VAR_1) {
 tailcall:
  switch (VAR_1->tag) {
    case 131: case 128:
      return 1;
    case 132:
      return FUNC_1(VAR_1, FUNC_4, 0);
    case 129:
      VAR_1 = FUNC_2(VAR_1); goto tailcall;
    case 130: FUNC_0(0);
    default: {
      switch (VAR_0[VAR_1->tag]) {
        case 1:
          VAR_1 = FUNC_2(VAR_1); goto tailcall;
        case 2:
          if (FUNC_4(FUNC_2(VAR_1)))
            return 1;

          VAR_1 = FUNC_3(VAR_1); goto tailcall;
        default: FUNC_0(VAR_0[VAR_1->tag] == 0); return 0;
      }
    }
  }
}
