
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ iMagic; scalar_t__ nPinned; unsigned int nFree; TYPE_1__* a; } ;
typedef TYPE_2__ testpcache ;
typedef int sqlite3_pcache ;
struct TYPE_6__ {scalar_t__ pDummy; scalar_t__ nInstance; } ;
struct TYPE_4__ {unsigned int key; scalar_t__ isPinned; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_3__ VAR_2 ;

__attribute__((used)) static void FUNC_1(sqlite3_pcache *VAR_3, unsigned VAR_4){
  testpcache *VAR_5 = (testpcache*)VAR_3;
  unsigned int VAR_6;
  FUNC_0( VAR_5->iMagic==VAR_1 );
  FUNC_0( VAR_2.pDummy!=0 );
  FUNC_0( VAR_2.nInstance>0 );
  for(VAR_6=0; VAR_6<VAR_0; VAR_6++){
    if( VAR_5->a[VAR_6].key>=VAR_4 ){
      VAR_5->a[VAR_6].key = 0;
      if( VAR_5->a[VAR_6].isPinned ){
        VAR_5->nPinned--;
        FUNC_0( VAR_5->nPinned>=0 );
      }
      VAR_5->nFree++;
      FUNC_0( VAR_5->nFree<=VAR_0 );
    }
  }
}
