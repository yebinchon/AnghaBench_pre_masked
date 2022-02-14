
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ iMagic; int nFree; TYPE_1__* a; } ;
typedef TYPE_2__ testpcache ;
typedef int sqlite3_pcache_page ;
typedef int sqlite3_pcache ;
struct TYPE_6__ {scalar_t__ pDummy; scalar_t__ nInstance; } ;
struct TYPE_4__ {unsigned int key; int isPinned; int page; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_3__ VAR_2 ;

__attribute__((used)) static void FUNC_1(
  sqlite3_pcache *VAR_3,
  sqlite3_pcache_page *VAR_4,
  unsigned VAR_5,
  unsigned VAR_6
){
  testpcache *VAR_7 = (testpcache*)VAR_3;
  int VAR_8;
  FUNC_0( VAR_7->iMagic==VAR_1 );
  FUNC_0( VAR_2.pDummy!=0 );
  FUNC_0( VAR_2.nInstance>0 );




  for(VAR_8=0; VAR_8<VAR_0; VAR_8++){
    if( VAR_7->a[VAR_8].key==VAR_6 ){

      FUNC_0( VAR_7->a[VAR_8].isPinned==0 );
      VAR_7->a[VAR_8].key = 0;
      VAR_7->nFree++;
      FUNC_0( VAR_7->nFree<=VAR_0 );
      break;
    }
  }



  for(VAR_8=0; VAR_8<VAR_0; VAR_8++){
    if( VAR_7->a[VAR_8].key==VAR_5 ){

      FUNC_0( &VAR_7->a[VAR_8].page==VAR_4 );

      FUNC_0( VAR_7->a[VAR_8].isPinned );
      VAR_7->a[VAR_8].key = VAR_6;
      return;
    }
  }


  FUNC_0( 0 );
}
