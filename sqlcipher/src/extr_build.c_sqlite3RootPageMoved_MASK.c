
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_5__* aDb; } ;
typedef TYPE_2__ sqlite3 ;
struct TYPE_10__ {int tnum; } ;
typedef TYPE_3__ Table ;
struct TYPE_12__ {TYPE_1__* pSchema; } ;
struct TYPE_11__ {int tnum; } ;
struct TYPE_8__ {int idxHash; int tblHash; } ;
typedef TYPE_4__ Index ;
typedef int HashElem ;
typedef int Hash ;
typedef TYPE_5__ Db ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int,int ) ;
 void* FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;

void FUNC_5(sqlite3 *VAR_0, int VAR_1, int VAR_2, int VAR_3){
  HashElem *VAR_4;
  Hash *VAR_5;
  Db *VAR_6;

  FUNC_0( FUNC_1(VAR_0, VAR_1, 0) );
  VAR_6 = &VAR_0->aDb[VAR_1];
  VAR_5 = &VAR_6->pSchema->tblHash;
  for(VAR_4=FUNC_3(VAR_5); VAR_4; VAR_4=FUNC_4(VAR_4)){
    Table *VAR_7 = FUNC_2(VAR_4);
    if( VAR_7->tnum==VAR_2 ){
      VAR_7->tnum = VAR_3;
    }
  }
  VAR_5 = &VAR_6->pSchema->idxHash;
  for(VAR_4=FUNC_3(VAR_5); VAR_4; VAR_4=FUNC_4(VAR_4)){
    Index *VAR_8 = FUNC_2(VAR_4);
    if( VAR_8->tnum==VAR_2 ){
      VAR_8->tnum = VAR_3;
    }
  }
}
