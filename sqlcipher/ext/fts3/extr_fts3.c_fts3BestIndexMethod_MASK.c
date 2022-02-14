
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sqlite3_index_orderby {scalar_t__ iColumn; scalar_t__ desc; } ;
struct sqlite3_index_constraint {scalar_t__ usable; int op; scalar_t__ iColumn; } ;
typedef int sqlite3_vtab ;
typedef int sqlite3_int64 ;
struct TYPE_8__ {scalar_t__ idxNum; int estimatedCost; int nConstraint; int nOrderBy; char* idxStr; int orderByConsumed; struct sqlite3_index_orderby* aOrderBy; TYPE_1__* aConstraintUsage; struct sqlite3_index_constraint* aConstraint; } ;
typedef TYPE_2__ sqlite3_index_info ;
struct TYPE_9__ {scalar_t__ nColumn; scalar_t__ pSegments; } ;
struct TYPE_7__ {int omit; int argvIndex; } ;
typedef TYPE_3__ Fts3Table ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;




 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(sqlite3_vtab *VAR_9, sqlite3_index_info *VAR_10){
  Fts3Table *VAR_11 = (Fts3Table *)VAR_9;
  int VAR_12;
  int VAR_13 = -1;

  int VAR_14 = -1;
  int VAR_15 = -1;
  int VAR_16 = -1;
  int VAR_17;





  VAR_10->idxNum = VAR_1;
  VAR_10->estimatedCost = 5000000;
  for(VAR_12=0; VAR_12<VAR_10->nConstraint; VAR_12++){
    int VAR_18;
    struct sqlite3_index_constraint *VAR_19 = &VAR_10->aConstraint[VAR_12];
    if( VAR_19->usable==0 ){
      if( VAR_19->op==VAR_7 ){





        VAR_10->idxNum = VAR_1;
        VAR_10->estimatedCost = 1e50;
        FUNC_1(VAR_10, ((sqlite3_int64)1) << 50);
        return VAR_8;
      }
      continue;
    }

    VAR_18 = (VAR_19->iColumn<0 || VAR_19->iColumn==VAR_11->nColumn+1);


    if( VAR_13<0 && VAR_19->op==VAR_6 && VAR_18 ){
      VAR_10->idxNum = VAR_0;
      VAR_10->estimatedCost = 1.0;
      VAR_13 = VAR_12;
    }
    if( VAR_19->op==VAR_7
     && VAR_19->iColumn>=0 && VAR_19->iColumn<=VAR_11->nColumn
    ){
      VAR_10->idxNum = VAR_2 + VAR_19->iColumn;
      VAR_10->estimatedCost = 2.0;
      VAR_13 = VAR_12;
    }


    if( VAR_19->op==VAR_6
     && VAR_19->iColumn==VAR_11->nColumn + 2
    ){
      VAR_14 = VAR_12;
    }

    if( VAR_18 ){
      switch( VAR_19->op ){
        case 131:
        case 130:
          VAR_15 = VAR_12;
          break;

        case 129:
        case 128:
          VAR_16 = VAR_12;
          break;
      }
    }
  }


  if( VAR_10->idxNum==VAR_0 ) FUNC_2(VAR_10);

  VAR_17 = 1;
  if( VAR_13>=0 ){
    VAR_10->aConstraintUsage[VAR_13].argvIndex = VAR_17++;
    VAR_10->aConstraintUsage[VAR_13].omit = 1;
  }
  if( VAR_14>=0 ){
    VAR_10->idxNum |= VAR_5;
    VAR_10->aConstraintUsage[VAR_14].argvIndex = VAR_17++;
  }
  if( VAR_15>=0 ){
    VAR_10->idxNum |= VAR_3;
    VAR_10->aConstraintUsage[VAR_15].argvIndex = VAR_17++;
  }
  if( VAR_16>=0 ){
    VAR_10->idxNum |= VAR_4;
    VAR_10->aConstraintUsage[VAR_16].argvIndex = VAR_17++;
  }




  if( VAR_10->nOrderBy==1 ){
    struct sqlite3_index_orderby *VAR_20 = &VAR_10->aOrderBy[0];
    if( VAR_20->iColumn<0 || VAR_20->iColumn==VAR_11->nColumn+1 ){
      if( VAR_20->desc ){
        VAR_10->idxStr = "DESC";
      }else{
        VAR_10->idxStr = "ASC";
      }
      VAR_10->orderByConsumed = 1;
    }
  }

  FUNC_0( VAR_11->pSegments==0 );
  return VAR_8;
}
