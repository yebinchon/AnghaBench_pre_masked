
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int startpc; } ;
struct TYPE_7__ {int pc; scalar_t__ nactvar; } ;
struct TYPE_6__ {TYPE_2__* fs; } ;
typedef TYPE_1__ LexState ;
typedef TYPE_2__ FuncState ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 TYPE_3__* FUNC_1 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static void FUNC_2 (LexState *VAR_0, int VAR_1) {
  FuncState *VAR_2 = VAR_0->fs;
  VAR_2->nactvar = FUNC_0(VAR_2->nactvar + VAR_1);
  for (; VAR_1; VAR_1--) {
    FUNC_1(VAR_2, VAR_2->nactvar - VAR_1)->startpc = VAR_2->pc;
  }
}
