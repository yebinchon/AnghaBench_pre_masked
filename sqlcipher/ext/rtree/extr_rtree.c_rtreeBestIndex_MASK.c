
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zIdxStr ;
typedef char u8 ;
struct sqlite3_index_constraint {scalar_t__ op; int iColumn; scalar_t__ usable; } ;
typedef int sqlite3_vtab ;
struct TYPE_6__ {int nConstraint; int idxNum; double estimatedCost; int estimatedRows; int needToFreeIdxStr; int idxStr; TYPE_1__* aConstraintUsage; int idxFlags; struct sqlite3_index_constraint* aConstraint; } ;
typedef TYPE_2__ sqlite3_index_info ;
typedef int i64 ;
struct TYPE_7__ {int nDim2; int nRowEst; } ;
struct TYPE_5__ {int argvIndex; int omit; } ;
typedef TYPE_3__ Rtree ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 int VAR_6 ;






 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static int FUNC_3(sqlite3_vtab *VAR_10, sqlite3_index_info *VAR_11){
  Rtree *VAR_12 = (Rtree*)VAR_10;
  int VAR_13 = VAR_9;
  int VAR_14;
  int VAR_15 = 0;
  i64 VAR_16;

  int VAR_17 = 0;
  char VAR_18[VAR_6*8+1];
  FUNC_1(VAR_18, 0, sizeof(VAR_18));





  for(VAR_14=0; VAR_14<VAR_11->nConstraint; VAR_14++){
    if( VAR_11->aConstraint[VAR_14].op==128 ){
      VAR_15 = 1;
    }
  }

  FUNC_0( VAR_11->idxStr==0 );
  for(VAR_14=0; VAR_14<VAR_11->nConstraint && VAR_17<(int)(sizeof(VAR_18)-1); VAR_14++){
    struct sqlite3_index_constraint *VAR_19 = &VAR_11->aConstraint[VAR_14];

    if( VAR_15==0 && VAR_19->usable
     && VAR_19->iColumn==0 && VAR_19->op==133
    ){

      int VAR_20;
      for(VAR_20=0; VAR_20<VAR_14; VAR_20++){
        VAR_11->aConstraintUsage[VAR_20].argvIndex = 0;
        VAR_11->aConstraintUsage[VAR_20].omit = 0;
      }
      VAR_11->idxNum = 1;
      VAR_11->aConstraintUsage[VAR_14].argvIndex = 1;
      VAR_11->aConstraintUsage[VAR_20].omit = 1;







      VAR_11->estimatedCost = 30.0;
      VAR_11->estimatedRows = 1;
      VAR_11->idxFlags = VAR_7;
      return VAR_9;
    }

    if( VAR_19->usable
    && ((VAR_19->iColumn>0 && VAR_19->iColumn<=VAR_12->nDim2)
        || VAR_19->op==128)
    ){
      u8 VAR_21;
      switch( VAR_19->op ){
        case 133: VAR_21 = VAR_0; break;
        case 131: VAR_21 = VAR_2; break;
        case 130: VAR_21 = VAR_3; break;
        case 129: VAR_21 = VAR_4; break;
        case 132: VAR_21 = VAR_1; break;
        case 128: VAR_21 = VAR_5; break;
        default: VAR_21 = 0; break;
      }
      if( VAR_21 ){
        VAR_18[VAR_17++] = VAR_21;
        VAR_18[VAR_17++] = (char)(VAR_19->iColumn - 1 + '0');
        VAR_11->aConstraintUsage[VAR_14].argvIndex = (VAR_17/2);
        VAR_11->aConstraintUsage[VAR_14].omit = 1;
      }
    }
  }

  VAR_11->idxNum = 2;
  VAR_11->needToFreeIdxStr = 1;
  if( VAR_17>0 && 0==(VAR_11->idxStr = FUNC_2("%s", VAR_18)) ){
    return VAR_8;
  }

  VAR_16 = VAR_12->nRowEst >> (VAR_17/2);
  VAR_11->estimatedCost = (double)6.0 * (double)VAR_16;
  VAR_11->estimatedRows = VAR_16;

  return VAR_13;
}
