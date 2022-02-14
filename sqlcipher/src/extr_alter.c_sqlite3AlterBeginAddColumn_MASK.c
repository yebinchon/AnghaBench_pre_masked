
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


struct TYPE_25__ {int mallocFailed; TYPE_1__* aDb; } ;
typedef TYPE_2__ sqlite3 ;
struct TYPE_26__ {scalar_t__ addColOffset; int nTabRef; int nCol; int pSchema; TYPE_6__* aCol; int zName; scalar_t__ pSelect; } ;
typedef TYPE_3__ Table ;
struct TYPE_29__ {scalar_t__ pDflt; scalar_t__ zColl; int zName; } ;
struct TYPE_28__ {TYPE_3__* pNewTable; TYPE_2__* db; } ;
struct TYPE_27__ {int * a; } ;
struct TYPE_24__ {int pSchema; } ;
typedef TYPE_4__ SrcList ;
typedef TYPE_5__ Parse ;
typedef TYPE_6__ Column ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_5__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_6__*,TYPE_6__*,int) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_5__*,char*) ;
 TYPE_3__* FUNC_8 (TYPE_5__*,int ,int *) ;
 int FUNC_9 (TYPE_2__*,char*,int ) ;
 int FUNC_10 (TYPE_2__*,int ) ;
 int FUNC_11 (TYPE_2__*,TYPE_4__*) ;

void FUNC_12(Parse *VAR_1, SrcList *VAR_2){
  Table *VAR_3;
  Table *VAR_4;
  int VAR_5;
  int VAR_6;
  int VAR_7;
  sqlite3 *VAR_8 = VAR_1->db;


  FUNC_1( VAR_1->pNewTable==0 );
  FUNC_1( FUNC_4(VAR_8) );
  if( VAR_8->mallocFailed ) goto exit_begin_add_column;
  VAR_4 = FUNC_8(VAR_1, 0, &VAR_2->a[0]);
  if( !VAR_4 ) goto exit_begin_add_column;


  if( FUNC_0(VAR_4) ){
    FUNC_7(VAR_1, "virtual tables may not be altered");
    goto exit_begin_add_column;
  }



  if( VAR_4->pSelect ){
    FUNC_7(VAR_1, "Cannot add a column to a view");
    goto exit_begin_add_column;
  }
  if( VAR_0!=FUNC_2(VAR_1, VAR_4) ){
    goto exit_begin_add_column;
  }

  FUNC_1( VAR_4->addColOffset>0 );
  VAR_5 = FUNC_10(VAR_8, VAR_4->pSchema);
  VAR_3 = (Table*)FUNC_5(VAR_8, sizeof(Table));
  if( !VAR_3 ) goto exit_begin_add_column;
  VAR_1->pNewTable = VAR_3;
  VAR_3->nTabRef = 1;
  VAR_3->nCol = VAR_4->nCol;
  FUNC_1( VAR_3->nCol>0 );
  VAR_7 = (((VAR_3->nCol-1)/8)*8)+8;
  FUNC_1( VAR_7>=VAR_3->nCol && VAR_7%8==0 && VAR_7-VAR_3->nCol<8 );
  VAR_3->aCol = (Column*)FUNC_5(VAR_8, sizeof(Column)*VAR_7);
  VAR_3->zName = FUNC_9(VAR_8, "sqlite_altertab_%s", VAR_4->zName);
  if( !VAR_3->aCol || !VAR_3->zName ){
    FUNC_1( VAR_8->mallocFailed );
    goto exit_begin_add_column;
  }
  FUNC_3(VAR_3->aCol, VAR_4->aCol, sizeof(Column)*VAR_3->nCol);
  for(VAR_6=0; VAR_6<VAR_3->nCol; VAR_6++){
    Column *VAR_9 = &VAR_3->aCol[VAR_6];
    VAR_9->zName = FUNC_6(VAR_8, VAR_9->zName);
    VAR_9->zColl = 0;
    VAR_9->pDflt = 0;
  }
  VAR_3->pSchema = VAR_8->aDb[VAR_5].pSchema;
  VAR_3->addColOffset = VAR_4->addColOffset;
  VAR_3->nTabRef = 1;

exit_begin_add_column:
  FUNC_11(VAR_8, VAR_2);
  return;
}
