
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int lu_byte ;
struct TYPE_6__ {scalar_t__ nactvar; struct TYPE_6__* previous; scalar_t__ upval; int isbreakable; int breaklist; } ;
struct TYPE_5__ {scalar_t__ nactvar; scalar_t__ freereg; TYPE_2__* bl; } ;
typedef TYPE_1__ FuncState ;
typedef TYPE_2__ BlockCnt ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1 (FuncState *VAR_1, BlockCnt *VAR_2, lu_byte VAR_3) {
  VAR_2->breaklist = VAR_0;
  VAR_2->isbreakable = VAR_3;
  VAR_2->nactvar = VAR_1->nactvar;
  VAR_2->upval = 0;
  VAR_2->previous = VAR_1->bl;
  VAR_1->bl = VAR_2;
  FUNC_0(VAR_1->freereg == VAR_1->nactvar);
}
