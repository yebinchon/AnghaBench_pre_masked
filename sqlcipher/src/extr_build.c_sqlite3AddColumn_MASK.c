
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_24__ {int* aLimit; } ;
typedef TYPE_2__ sqlite3 ;
struct TYPE_25__ {size_t n; int z; } ;
typedef TYPE_3__ Token ;
struct TYPE_26__ {int nCol; char* zName; TYPE_6__* aCol; } ;
typedef TYPE_4__ Table ;
struct TYPE_29__ {int szSorterRef; } ;
struct TYPE_28__ {char* zName; int szEst; int colFlags; int affinity; } ;
struct TYPE_23__ {scalar_t__ n; } ;
struct TYPE_27__ {TYPE_1__ constraintName; TYPE_4__* pNewTable; TYPE_2__* db; } ;
typedef TYPE_5__ Parse ;
typedef TYPE_6__ Column ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (char*,int ,size_t) ;
 int FUNC_1 (TYPE_6__*,int ,int) ;
 int FUNC_2 (char*,TYPE_6__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_6__*) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 char* FUNC_5 (TYPE_2__*,size_t) ;
 TYPE_6__* FUNC_6 (TYPE_2__*,TYPE_6__*,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (TYPE_5__*,char*,char*) ;
 TYPE_9__ VAR_5 ;
 int FUNC_9 (TYPE_5__*,void*,TYPE_3__*) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (char*,char*) ;

void FUNC_12(Parse *VAR_6, Token *VAR_7, Token *VAR_8){
  Table *VAR_9;
  int VAR_10;
  char *VAR_11;
  char *VAR_12;
  Column *VAR_13;
  sqlite3 *VAR_14 = VAR_6->db;
  if( (VAR_9 = VAR_6->pNewTable)==0 ) return;
  if( VAR_9->nCol+1>VAR_14->aLimit[VAR_4] ){
    FUNC_8(VAR_6, "too many columns on %s", VAR_9->zName);
    return;
  }
  VAR_11 = FUNC_5(VAR_14, VAR_7->n + VAR_8->n + 2);
  if( VAR_11==0 ) return;
  if( VAR_2 ) FUNC_9(VAR_6, (void*)VAR_11, VAR_7);
  FUNC_0(VAR_11, VAR_7->z, VAR_7->n);
  VAR_11[VAR_7->n] = 0;
  FUNC_7(VAR_11);
  for(VAR_10=0; VAR_10<VAR_9->nCol; VAR_10++){
    if( FUNC_11(VAR_11, VAR_9->aCol[VAR_10].zName)==0 ){
      FUNC_8(VAR_6, "duplicate column name: %s", VAR_11);
      FUNC_4(VAR_14, VAR_11);
      return;
    }
  }
  if( (VAR_9->nCol & 0x7)==0 ){
    Column *VAR_15;
    VAR_15 = FUNC_6(VAR_14,VAR_9->aCol,(VAR_9->nCol+8)*sizeof(VAR_9->aCol[0]));
    if( VAR_15==0 ){
      FUNC_4(VAR_14, VAR_11);
      return;
    }
    VAR_9->aCol = VAR_15;
  }
  VAR_13 = &VAR_9->aCol[VAR_9->nCol];
  FUNC_1(VAR_13, 0, sizeof(VAR_9->aCol[0]));
  VAR_13->zName = VAR_11;
  FUNC_3(VAR_9, VAR_13);

  if( VAR_8->n==0 ){


    VAR_13->affinity = VAR_3;
    VAR_13->szEst = 1;





  }else{
    VAR_12 = VAR_11 + FUNC_10(VAR_11) + 1;
    FUNC_0(VAR_12, VAR_8->z, VAR_8->n);
    VAR_12[VAR_8->n] = 0;
    FUNC_7(VAR_12);
    VAR_13->affinity = FUNC_2(VAR_12, VAR_13);
    VAR_13->colFlags |= VAR_0;
  }
  VAR_9->nCol++;
  VAR_6->constraintName.n = 0;
}
