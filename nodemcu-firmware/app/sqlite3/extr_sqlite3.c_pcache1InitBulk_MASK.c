
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_9__ {scalar_t__ nInitPage; } ;
struct TYPE_8__ {int nMax; int szAlloc; char* pBulk; size_t szPage; scalar_t__ pFree; } ;
struct TYPE_6__ {char* pBuf; TYPE_2__* pExtra; } ;
struct TYPE_7__ {int isBulkLocal; struct TYPE_7__* pNext; scalar_t__ isAnchor; TYPE_1__ page; } ;
typedef TYPE_2__ PgHdr1 ;
typedef TYPE_3__ PCache1 ;


 TYPE_5__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(PCache1 *VAR_1){
  i64 VAR_2;
  char *VAR_3;
  if( VAR_0==0 ) return 0;

  if( VAR_1->nMax<3 ) return 0;
  FUNC_0();
  if( VAR_0>0 ){
    VAR_2 = VAR_1->szAlloc * (i64)VAR_0;
  }else{
    VAR_2 = -1024 * (i64)VAR_0;
  }
  if( VAR_2 > VAR_1->szAlloc*(i64)VAR_1->nMax ){
    VAR_2 = VAR_1->szAlloc*(i64)VAR_1->nMax;
  }
  VAR_3 = VAR_1->pBulk = FUNC_2( VAR_2 );
  FUNC_1();
  if( VAR_3 ){
    int VAR_4 = FUNC_3(VAR_3)/VAR_1->szAlloc;
    do{
      PgHdr1 *VAR_5 = (PgHdr1*)&VAR_3[VAR_1->szPage];
      VAR_5->page.pBuf = VAR_3;
      VAR_5->page.pExtra = &VAR_5[1];
      VAR_5->isBulkLocal = 1;
      VAR_5->isAnchor = 0;
      VAR_5->pNext = VAR_1->pFree;
      VAR_1->pFree = VAR_5;
      VAR_3 += VAR_1->szAlloc;
    }while( --VAR_4 );
  }
  return VAR_1->pFree!=0;
}
