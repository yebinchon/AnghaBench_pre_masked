
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ ynVar ;
typedef scalar_t__ u8 ;
struct ReusableSpace {size_t nFree; int nNeeded; scalar_t__* pSpace; } ;
struct TYPE_10__ {scalar_t__ mallocFailed; } ;
typedef TYPE_1__ sqlite3 ;
typedef int i64 ;
typedef int VdbeCursor ;
struct TYPE_11__ {int nOp; scalar_t__ magic; int nCursor; int nMem; void* anExec; void* apCsr; void* aMem; void* aVar; scalar_t__ nVar; scalar_t__ explain; scalar_t__ pVList; void* apArg; scalar_t__* pFree; scalar_t__ expired; scalar_t__ usesStmtJournal; scalar_t__ aOp; TYPE_1__* db; TYPE_3__* pParse; } ;
typedef TYPE_2__ Vdbe ;
struct TYPE_12__ {int nVar; int nMem; int nTab; int nMaxArg; scalar_t__ explain; scalar_t__ pVList; scalar_t__ mayAbort; scalar_t__ isMultiWrite; scalar_t__ szOpAlloc; } ;
typedef TYPE_3__ Parse ;
typedef int Op ;
typedef int Mem ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 size_t FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 void* FUNC_3 (struct ReusableSpace*,void*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (void*,int,TYPE_1__*,int ) ;
 int FUNC_6 (void*,int ,int) ;
 int FUNC_7 (TYPE_2__*,int*) ;
 scalar_t__* FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_2__*) ;

void FUNC_10(
  Vdbe *VAR_3,
  Parse *VAR_4
){
  sqlite3 *VAR_5;
  int VAR_6;
  int VAR_7;
  int VAR_8;
  int VAR_9;
  int VAR_10;
  struct ReusableSpace VAR_11;

  FUNC_4( VAR_3!=0 );
  FUNC_4( VAR_3->nOp>0 );
  FUNC_4( VAR_4!=0 );
  FUNC_4( VAR_3->magic==VAR_2 );
  FUNC_4( VAR_4==VAR_3->pParse );
  VAR_5 = VAR_3->db;
  FUNC_4( VAR_5->mallocFailed==0 );
  VAR_6 = VAR_4->nVar;
  VAR_7 = VAR_4->nMem;
  VAR_8 = VAR_4->nTab;
  VAR_9 = VAR_4->nMaxArg;






  VAR_7 += VAR_8;
  if( VAR_8==0 && VAR_7>0 ) VAR_7++;





  VAR_10 = FUNC_1(sizeof(Op)*VAR_3->nOp);
  VAR_11.pSpace = &((u8*)VAR_3->aOp)[VAR_10];
  FUNC_4( FUNC_0(VAR_11.pSpace) );
  VAR_11.nFree = FUNC_2(VAR_4->szOpAlloc - VAR_10);
  FUNC_4( VAR_11.nFree>=0 );
  FUNC_4( FUNC_0(&VAR_11.pSpace[VAR_11.nFree]) );

  FUNC_7(VAR_3, &VAR_9);
  VAR_3->usesStmtJournal = (u8)(VAR_4->isMultiWrite && VAR_4->mayAbort);
  if( VAR_4->explain && VAR_7<10 ){
    VAR_7 = 10;
  }
  VAR_3->expired = 0;
  VAR_11.nNeeded = 0;
  VAR_3->aMem = FUNC_3(&VAR_11, 0, VAR_7*sizeof(Mem));
  VAR_3->aVar = FUNC_3(&VAR_11, 0, VAR_6*sizeof(Mem));
  VAR_3->apArg = FUNC_3(&VAR_11, 0, VAR_9*sizeof(Mem*));
  VAR_3->apCsr = FUNC_3(&VAR_11, 0, VAR_8*sizeof(VdbeCursor*));



  if( VAR_11.nNeeded ){
    VAR_11.pSpace = VAR_3->pFree = FUNC_8(VAR_5, VAR_11.nNeeded);
    VAR_11.nFree = VAR_11.nNeeded;
    if( !VAR_5->mallocFailed ){
      VAR_3->aMem = FUNC_3(&VAR_11, VAR_3->aMem, VAR_7*sizeof(Mem));
      VAR_3->aVar = FUNC_3(&VAR_11, VAR_3->aVar, VAR_6*sizeof(Mem));
      VAR_3->apArg = FUNC_3(&VAR_11, VAR_3->apArg, VAR_9*sizeof(Mem*));
      VAR_3->apCsr = FUNC_3(&VAR_11, VAR_3->apCsr, VAR_8*sizeof(VdbeCursor*));



    }
  }

  VAR_3->pVList = VAR_4->pVList;
  VAR_4->pVList = 0;
  VAR_3->explain = VAR_4->explain;
  if( VAR_5->mallocFailed ){
    VAR_3->nVar = 0;
    VAR_3->nCursor = 0;
    VAR_3->nMem = 0;
  }else{
    VAR_3->nCursor = VAR_8;
    VAR_3->nVar = (ynVar)VAR_6;
    FUNC_5(VAR_3->aVar, VAR_6, VAR_5, VAR_0);
    VAR_3->nMem = VAR_7;
    FUNC_5(VAR_3->aMem, VAR_7, VAR_5, VAR_1);
    FUNC_6(VAR_3->apCsr, 0, VAR_8*sizeof(VdbeCursor*));



  }
  FUNC_9(VAR_3);
}
