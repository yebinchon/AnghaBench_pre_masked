
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {size_t tag; } ;
typedef TYPE_1__ TTree ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int* VAR_2 ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4 (TTree *VAR_3) {
 tailcall:
  if (VAR_3->tag == VAR_1 && FUNC_1(FUNC_2(VAR_3)))
    return 1;
  else if (VAR_3->tag == VAR_0)
    return 0;
  else {
    switch (VAR_2[VAR_3->tag]) {
      case 1:
        VAR_3 = FUNC_2(VAR_3); goto tailcall;
      case 2:
        if (FUNC_4(FUNC_2(VAR_3))) return 1;

        VAR_3 = FUNC_3(VAR_3); goto tailcall;
      default: FUNC_0(VAR_2[VAR_3->tag] == 0); return 0;
    }
  }
}
