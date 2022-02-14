
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int tag; int key; int cap; } ;
typedef TYPE_1__ TTree ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (int) ;
 int* VAR_2 ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3 (TTree *VAR_3, int VAR_4) {
  if (VAR_4 == 0) return;
 tailcall:
  switch (VAR_3->tag) {
    case 130: case 132: case 128: case 129: {
      if (VAR_3->key > 0)
        VAR_3->key += VAR_4;
      break;
    }
    case 131: {
      if (VAR_3->key > 0 && VAR_3->cap != VAR_0 && VAR_3->cap != VAR_1)
        VAR_3->key += VAR_4;
      break;
    }
    default: break;
  }
  switch (VAR_2[VAR_3->tag]) {
    case 1:
      VAR_3 = FUNC_1(VAR_3); goto tailcall;
    case 2:
      FUNC_3(FUNC_1(VAR_3), VAR_4);
      VAR_3 = FUNC_2(VAR_3); goto tailcall;
    default: FUNC_0(VAR_2[VAR_3->tag] == 0); break;
  }
}
