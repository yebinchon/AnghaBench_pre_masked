
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_21__ {int bDisable; } ;
struct TYPE_22__ {int nDb; TYPE_2__ lookaside; TYPE_1__* aDb; } ;
typedef TYPE_3__ sqlite3 ;
struct TYPE_23__ {int zDatabase; TYPE_3__* db; } ;
typedef TYPE_4__ analysisInfo ;
struct TYPE_24__ {int tabFlags; } ;
typedef TYPE_5__ Table ;
struct TYPE_26__ {scalar_t__ aiRowEst; scalar_t__ hasStat1; scalar_t__ aSample; } ;
struct TYPE_25__ {int idxHash; int tblHash; } ;
struct TYPE_20__ {scalar_t__ pBt; int zDbSName; TYPE_6__* pSchema; } ;
typedef TYPE_6__ Schema ;
typedef TYPE_7__ Index ;
typedef int HashElem ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_7__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,char*,int ) ;
 char* FUNC_6 (TYPE_3__*,char*,int ) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,int,int ) ;
 int FUNC_9 (TYPE_3__*,char*,int ,TYPE_4__*,int ) ;
 int FUNC_10 (scalar_t__) ;
 void* FUNC_11 (int *) ;
 int * FUNC_12 (int *) ;
 int * FUNC_13 (int *) ;

int FUNC_14(sqlite3 *VAR_5, int VAR_6){
  analysisInfo VAR_7;
  HashElem *VAR_8;
  char *VAR_9;
  int VAR_10 = VAR_2;
  Schema *VAR_11 = VAR_5->aDb[VAR_6].pSchema;

  FUNC_0( VAR_6>=0 && VAR_6<VAR_5->nDb );
  FUNC_0( VAR_5->aDb[VAR_6].pBt!=0 );


  FUNC_0( FUNC_8(VAR_5, VAR_6, 0) );
  for(VAR_8=FUNC_12(&VAR_11->tblHash); VAR_8; VAR_8=FUNC_13(VAR_8)){
    Table *VAR_12 = FUNC_11(VAR_8);
    VAR_12->tabFlags &= ~VAR_3;
  }
  for(VAR_8=FUNC_12(&VAR_11->idxHash); VAR_8; VAR_8=FUNC_13(VAR_8)){
    Index *VAR_13 = FUNC_11(VAR_8);
    VAR_13->hasStat1 = 0;




  }


  VAR_7.db = VAR_5;
  VAR_7.zDatabase = VAR_5->aDb[VAR_6].zDbSName;
  if( FUNC_5(VAR_5, "sqlite_stat1", VAR_7.zDatabase)!=0 ){
    VAR_9 = FUNC_6(VAR_5,
        "SELECT tbl,idx,stat FROM %Q.sqlite_stat1", VAR_7.zDatabase);
    if( VAR_9==0 ){
      VAR_10 = VAR_1;
    }else{
      VAR_10 = FUNC_9(VAR_5, VAR_9, VAR_4, &VAR_7, 0);
      FUNC_2(VAR_5, VAR_9);
    }
  }


  FUNC_0( FUNC_8(VAR_5, VAR_6, 0) );
  for(VAR_8=FUNC_12(&VAR_11->idxHash); VAR_8; VAR_8=FUNC_13(VAR_8)){
    Index *VAR_14 = FUNC_11(VAR_8);
    if( !VAR_14->hasStat1 ) FUNC_3(VAR_14);
  }
  if( VAR_10==VAR_0 ){
    FUNC_7(VAR_5);
  }
  return VAR_10;
}
