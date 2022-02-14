
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nactvar; int freereg; } ;
typedef TYPE_1__ FuncState ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2 (FuncState *VAR_0, int VAR_1) {
  if (!FUNC_0(VAR_1) && VAR_1 >= VAR_0->nactvar) {
    VAR_0->freereg--;
    FUNC_1(VAR_1 == VAR_0->freereg);
  }
}
