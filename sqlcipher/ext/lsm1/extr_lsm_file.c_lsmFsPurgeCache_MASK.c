
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ nCacheAlloc; scalar_t__ nOut; scalar_t__ pLruLast; TYPE_1__* pLruFirst; } ;
struct TYPE_7__ {int flags; struct TYPE_7__* pLruNext; } ;
typedef TYPE_1__ Page ;
typedef TYPE_2__ FileSystem ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;

void FUNC_3(FileSystem *VAR_1){
  Page *VAR_2;

  VAR_2 = VAR_1->pLruFirst;
  while( VAR_2 ){
    Page *VAR_3 = VAR_2->pLruNext;
    FUNC_0( VAR_2->flags & VAR_0 );
    FUNC_2(VAR_1, VAR_2);
    FUNC_1(VAR_2);
    VAR_2 = VAR_3;
  }
  VAR_1->pLruFirst = 0;
  VAR_1->pLruLast = 0;

  FUNC_0( VAR_1->nCacheAlloc<=VAR_1->nOut && VAR_1->nCacheAlloc>=0 );
}
