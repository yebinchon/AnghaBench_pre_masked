
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ i64 ;
struct TYPE_7__ {scalar_t__ nHashSize; } ;
struct TYPE_6__ {scalar_t__ rc; scalar_t__ pHash; scalar_t__ nPendingData; scalar_t__ iWriteRowid; int bDelete; TYPE_3__* pConfig; } ;
typedef TYPE_1__ Fts5Index ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*,scalar_t__*,scalar_t__*) ;

int FUNC_4(Fts5Index *VAR_1, int VAR_2, i64 VAR_3){
  FUNC_0( VAR_1->rc==VAR_0 );


  if( VAR_1->pHash==0 ){
    VAR_1->rc = FUNC_3(VAR_1->pConfig, &VAR_1->pHash, &VAR_1->nPendingData);
  }


  if( VAR_3<VAR_1->iWriteRowid
   || (VAR_3==VAR_1->iWriteRowid && VAR_1->bDelete==0)
   || (VAR_1->nPendingData > VAR_1->pConfig->nHashSize)
  ){
    FUNC_1(VAR_1);
  }

  VAR_1->iWriteRowid = VAR_3;
  VAR_1->bDelete = VAR_2;
  return FUNC_2(VAR_1);
}
