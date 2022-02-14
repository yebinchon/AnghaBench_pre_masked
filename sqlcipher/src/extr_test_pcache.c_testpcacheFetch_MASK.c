
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ iMagic; int nPinned; int nFree; scalar_t__ bPurgeable; TYPE_1__* a; int szExtra; int szPage; } ;
typedef TYPE_2__ testpcache ;
struct TYPE_9__ {int pExtra; int pBuf; } ;
typedef TYPE_3__ sqlite3_pcache_page ;
typedef int sqlite3_pcache ;
struct TYPE_10__ {scalar_t__ pDummy; scalar_t__ nInstance; scalar_t__ highStress; } ;
struct TYPE_7__ {unsigned int key; int isPinned; TYPE_3__ page; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;
 TYPE_5__ VAR_3 ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static sqlite3_pcache_page *FUNC_3(
  sqlite3_pcache *VAR_4,
  unsigned VAR_5,
  int VAR_6
){
  testpcache *VAR_7 = (testpcache*)VAR_4;
  int VAR_8, VAR_9;
  FUNC_0( VAR_7->iMagic==VAR_2 );
  FUNC_0( VAR_3.pDummy!=0 );
  FUNC_0( VAR_3.nInstance>0 );


  for(VAR_8=0; VAR_8<VAR_0; VAR_8++){
    if( VAR_7->a[VAR_8].key==VAR_5 ){
      if( !VAR_7->a[VAR_8].isPinned ){
        VAR_7->nPinned++;
        FUNC_0( VAR_7->nPinned <= VAR_0 - VAR_7->nFree );
        VAR_7->a[VAR_8].isPinned = 1;
      }
      return &VAR_7->a[VAR_8].page;
    }
  }


  if( VAR_6==0 ){
    return 0;
  }


  if( VAR_7->nPinned==VAR_0 ){
    return 0;
  }


  if( VAR_7->nPinned>=VAR_0-VAR_1 && VAR_6<2 ){
    return 0;
  }






  if( VAR_3.highStress && VAR_6<2 ){
    return 0;
  }




  if( VAR_7->nFree>VAR_1 || (VAR_6==2 && VAR_7->nFree>0) ){
    VAR_9 = FUNC_2(VAR_7) % VAR_0;
    for(VAR_8=0; VAR_8<VAR_0; VAR_8++, VAR_9 = (VAR_9+1)%VAR_0){
      if( VAR_7->a[VAR_9].key==0 ){
        VAR_7->a[VAR_9].key = VAR_5;
        VAR_7->a[VAR_9].isPinned = 1;
        FUNC_1(VAR_7->a[VAR_9].page.pBuf, 0, VAR_7->szPage);
        FUNC_1(VAR_7->a[VAR_9].page.pExtra, 0, VAR_7->szExtra);
        VAR_7->nPinned++;
        VAR_7->nFree--;
        FUNC_0( VAR_7->nPinned <= VAR_0 - VAR_7->nFree );
        return &VAR_7->a[VAR_9].page;
      }
    }


    FUNC_0( 0 );
  }



  if( VAR_7->bPurgeable==0 ){
    return 0;
  }




  VAR_9 = FUNC_2(VAR_7) % VAR_0;
  for(VAR_8=0; VAR_8<VAR_0; VAR_8++, VAR_9 = (VAR_9+1)%VAR_0){
    if( VAR_7->a[VAR_9].key>0 && VAR_7->a[VAR_9].isPinned==0 ){
      VAR_7->a[VAR_9].key = VAR_5;
      VAR_7->a[VAR_9].isPinned = 1;
      FUNC_1(VAR_7->a[VAR_9].page.pBuf, 0, VAR_7->szPage);
      FUNC_1(VAR_7->a[VAR_9].page.pExtra, 0, VAR_7->szExtra);
      VAR_7->nPinned++;
      FUNC_0( VAR_7->nPinned <= VAR_0 - VAR_7->nFree );
      return &VAR_7->a[VAR_9].page;
    }
  }


  FUNC_0(0);
  return 0;
}
