
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int nRecyclable; TYPE_2__* pGroup; } ;
struct TYPE_6__ {TYPE_1__* pLruTail; TYPE_1__* pLruHead; int mutex; } ;
struct TYPE_5__ {TYPE_3__* pCache; struct TYPE_5__* pLruPrev; struct TYPE_5__* pLruNext; } ;
typedef TYPE_1__ PgHdr1 ;
typedef TYPE_2__ PGroup ;
typedef TYPE_3__ PCache1 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(PgHdr1 *VAR_0){
  PCache1 *VAR_1;
  PGroup *VAR_2;

  if( VAR_0==0 ) return;
  VAR_1 = VAR_0->pCache;
  VAR_2 = VAR_1->pGroup;
  FUNC_0( FUNC_1(VAR_2->mutex) );
  if( VAR_0->pLruNext || VAR_0==VAR_2->pLruTail ){
    if( VAR_0->pLruPrev ){
      VAR_0->pLruPrev->pLruNext = VAR_0->pLruNext;
    }
    if( VAR_0->pLruNext ){
      VAR_0->pLruNext->pLruPrev = VAR_0->pLruPrev;
    }
    if( VAR_2->pLruHead==VAR_0 ){
      VAR_2->pLruHead = VAR_0->pLruNext;
    }
    if( VAR_2->pLruTail==VAR_0 ){
      VAR_2->pLruTail = VAR_0->pLruPrev;
    }
    VAR_0->pLruNext = 0;
    VAR_0->pLruPrev = 0;
    VAR_0->pCache->nRecyclable--;
  }
}
