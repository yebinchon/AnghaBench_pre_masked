
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_1__* p; } ;
struct TYPE_10__ {scalar_t__ code; int key; } ;
struct TYPE_11__ {TYPE_2__ i; } ;
struct TYPE_9__ {TYPE_3__* code; } ;
typedef TYPE_3__ Instruction ;
typedef TYPE_4__ CompileState ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_4__*,int,int) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_4 (CompileState *VAR_4, int *VAR_5,
                          int VAR_6, int VAR_7) {
  int VAR_8;
  Instruction *VAR_9 = VAR_4->p->code;
  for (VAR_8 = VAR_6; VAR_8 < VAR_7; VAR_8 += FUNC_3(&VAR_9[VAR_8])) {
    if (VAR_9[VAR_8].i.code == VAR_2) {
      int VAR_10 = VAR_9[VAR_8].i.key;
      int VAR_11 = VAR_5[VAR_10];
      FUNC_0(VAR_11 == VAR_6 || VAR_9[VAR_11 - 1].i.code == VAR_3);
      if (VAR_9[FUNC_1(VAR_9, VAR_8 + 2)].i.code == VAR_3)
        VAR_9[VAR_8].i.code = VAR_1;
      else
        VAR_9[VAR_8].i.code = VAR_0;
      FUNC_2(VAR_4, VAR_8, VAR_11);
    }
  }
  FUNC_0(VAR_8 == VAR_7);
}
