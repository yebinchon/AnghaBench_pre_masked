
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* pBtree; int curFlags; } ;
struct TYPE_4__ {int hasIncrblobCur; } ;
typedef TYPE_2__ BtCursor ;


 int VAR_0 ;

void FUNC_0(BtCursor *VAR_1){
  VAR_1->curFlags |= VAR_0;
  VAR_1->pBtree->hasIncrblobCur = 1;
}
