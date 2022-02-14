
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ iMagic; scalar_t__ nPinned; int nFree; TYPE_1__* a; scalar_t__ bPurgeable; } ;
typedef TYPE_2__ testpcache ;
typedef int sqlite3_pcache_page ;
typedef int sqlite3_pcache ;
struct TYPE_7__ {scalar_t__ pDummy; scalar_t__ nInstance; int discardChance; } ;
struct TYPE_5__ {int isPinned; scalar_t__ key; int page; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_4__ VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(
  sqlite3_pcache *VAR_3,
  sqlite3_pcache_page *VAR_4,
  int VAR_5
){
  testpcache *VAR_6 = (testpcache*)VAR_3;
  int VAR_7;
  FUNC_0( VAR_6->iMagic==VAR_1 );
  FUNC_0( VAR_2.pDummy!=0 );
  FUNC_0( VAR_2.nInstance>0 );





  if( VAR_6->bPurgeable
  && (100-VAR_2.discardChance) <= (FUNC_1(VAR_6)%100)
  ){
    VAR_5 = 1;
  }

  for(VAR_7=0; VAR_7<VAR_0; VAR_7++){
    if( &VAR_6->a[VAR_7].page==VAR_4 ){

      FUNC_0( VAR_6->a[VAR_7].isPinned );
      VAR_6->a[VAR_7].isPinned = 0;
      VAR_6->nPinned--;
      FUNC_0( VAR_6->nPinned>=0 );
      if( VAR_5 ){
        VAR_6->a[VAR_7].key = 0;
        VAR_6->nFree++;
        FUNC_0( VAR_6->nFree<=VAR_0 );
      }
      return;
    }
  }


  FUNC_0( 0 );
}
