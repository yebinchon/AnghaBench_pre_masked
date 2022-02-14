
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite3_pcache ;
struct TYPE_7__ {int nMax; int n90pct; TYPE_1__* pGroup; scalar_t__ bPurgeable; } ;
struct TYPE_6__ {int nMaxPage; int mxPinned; int nMinPage; } ;
typedef TYPE_1__ PGroup ;
typedef TYPE_2__ PCache1 ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(sqlite3_pcache *VAR_0, int VAR_1){
  PCache1 *VAR_2 = (PCache1 *)VAR_0;
  if( VAR_2->bPurgeable ){
    PGroup *VAR_3 = VAR_2->pGroup;
    FUNC_1(VAR_3);
    VAR_3->nMaxPage += (VAR_1 - VAR_2->nMax);
    VAR_3->mxPinned = VAR_3->nMaxPage + 10 - VAR_3->nMinPage;
    VAR_2->nMax = VAR_1;
    VAR_2->n90pct = VAR_2->nMax*9/10;
    FUNC_0(VAR_2);
    FUNC_2(VAR_3);
  }
}
