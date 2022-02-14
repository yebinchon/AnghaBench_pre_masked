
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int szPage; int szExtra; int nFree; int bPurgeable; TYPE_2__* a; int iMagic; int iRand; scalar_t__ nPinned; } ;
typedef TYPE_3__ testpcache ;
typedef int sqlite3_pcache ;
struct TYPE_9__ {scalar_t__ pDummy; int nInstance; int prngSeed; } ;
struct TYPE_6__ {void* pExtra; void* pBuf; } ;
struct TYPE_7__ {TYPE_1__ page; scalar_t__ isPinned; scalar_t__ key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_3__* FUNC_1 (int) ;
 TYPE_4__ VAR_2 ;

__attribute__((used)) static sqlite3_pcache *FUNC_2(
  int VAR_3,
  int VAR_4,
  int VAR_5
){
  int VAR_6;
  char *VAR_7;
  testpcache *VAR_8;
  int VAR_9;
  FUNC_0( VAR_2.pDummy!=0 );
  VAR_3 = (VAR_3+7)&~7;
  VAR_6 = sizeof(testpcache) + VAR_0*(VAR_3+VAR_4);
  VAR_8 = FUNC_1( VAR_6 );
  if( VAR_8==0 ) return 0;
  VAR_7 = (char*)&VAR_8[1];
  VAR_8->szPage = VAR_3;
  VAR_8->szExtra = VAR_4;
  VAR_8->nFree = VAR_0;
  VAR_8->nPinned = 0;
  VAR_8->iRand = VAR_2.prngSeed;
  VAR_8->bPurgeable = VAR_5;
  VAR_8->iMagic = VAR_1;
  for(VAR_9=0; VAR_9<VAR_0; VAR_9++, VAR_7 += (VAR_3+VAR_4)){
    VAR_8->a[VAR_9].key = 0;
    VAR_8->a[VAR_9].isPinned = 0;
    VAR_8->a[VAR_9].page.pBuf = (void*)VAR_7;
    VAR_8->a[VAR_9].page.pExtra = (void*)&VAR_7[VAR_3];
  }
  VAR_2.nInstance++;
  return (sqlite3_pcache*)VAR_8;
}
