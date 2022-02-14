
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int lu_byte ;
struct TYPE_14__ {scalar_t__ nactvar; struct TYPE_14__* previous; scalar_t__ upval; int firstgoto; int firstlabel; int isloop; } ;
struct TYPE_13__ {scalar_t__ nactvar; scalar_t__ freereg; TYPE_6__* bl; TYPE_4__* ls; } ;
struct TYPE_12__ {TYPE_3__* dyd; } ;
struct TYPE_10__ {int n; } ;
struct TYPE_9__ {int n; } ;
struct TYPE_11__ {TYPE_2__ gt; TYPE_1__ label; } ;
typedef TYPE_5__ FuncState ;
typedef TYPE_6__ BlockCnt ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1 (FuncState *VAR_0, BlockCnt *VAR_1, lu_byte VAR_2) {
  VAR_1->isloop = VAR_2;
  VAR_1->nactvar = VAR_0->nactvar;
  VAR_1->firstlabel = VAR_0->ls->dyd->label.n;
  VAR_1->firstgoto = VAR_0->ls->dyd->gt.n;
  VAR_1->upval = 0;
  VAR_1->previous = VAR_0->bl;
  VAR_0->bl = VAR_1;
  FUNC_0(VAR_0->freereg == VAR_0->nactvar);
}
