
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ nSize; } ;
struct TYPE_9__ {scalar_t__ eState; size_t iPage; scalar_t__ validNKey; TYPE_1__ info; scalar_t__* aiIdx; TYPE_2__** apPage; } ;
struct TYPE_8__ {int hdrOffset; scalar_t__ nCell; int * aData; int leaf; } ;
typedef int Pgno ;
typedef TYPE_2__ MemPage ;
typedef TYPE_3__ BtCursor ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_4(BtCursor *VAR_2){
  Pgno VAR_3;
  int VAR_4 = VAR_1;
  MemPage *VAR_5 = 0;

  FUNC_0( FUNC_1(VAR_2) );
  FUNC_0( VAR_2->eState==VAR_0 );
  while( VAR_4==VAR_1 && !(VAR_5 = VAR_2->apPage[VAR_2->iPage])->leaf ){
    VAR_3 = FUNC_2(&VAR_5->aData[VAR_5->hdrOffset+8]);
    VAR_2->aiIdx[VAR_2->iPage] = VAR_5->nCell;
    VAR_4 = FUNC_3(VAR_2, VAR_3);
  }
  if( VAR_4==VAR_1 ){
    VAR_2->aiIdx[VAR_2->iPage] = VAR_5->nCell-1;
    VAR_2->info.nSize = 0;
    VAR_2->validNKey = 0;
  }
  return VAR_4;
}
