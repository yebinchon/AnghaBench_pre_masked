
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sqlite3_index_constraint {scalar_t__ iColumn; int op; scalar_t__ usable; } ;
typedef int sqlite3_vtab ;
typedef int sqlite3_int64 ;
struct TYPE_6__ {int nConstraint; int estimatedRows; double estimatedCost; int idxNum; struct sqlite3_index_constraint* aConstraint; TYPE_1__* aConstraintUsage; int idxFlags; } ;
typedef TYPE_2__ sqlite3_index_info ;
struct TYPE_7__ {scalar_t__ iPK; } ;
typedef TYPE_3__ UnionTab ;
struct TYPE_5__ {int argvIndex; int omit; } ;







 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(
  sqlite3_vtab *VAR_2,
  sqlite3_index_info *VAR_3
){
  UnionTab *VAR_4 = (UnionTab*)VAR_2;
  int VAR_5 = -1;
  int VAR_6 = -1;
  int VAR_7 = -1;
  int VAR_8;

  for(VAR_8=0; VAR_8<VAR_3->nConstraint; VAR_8++){
    struct sqlite3_index_constraint *VAR_9 = &VAR_3->aConstraint[VAR_8];
    if( VAR_9->usable && (VAR_9->iColumn<0 || VAR_9->iColumn==VAR_4->iPK) ){
      switch( VAR_9->op ){
        case 132:
          VAR_5 = VAR_8;
          break;
        case 129:
        case 128:
          VAR_6 = VAR_8;
          break;
        case 131:
        case 130:
          VAR_7 = VAR_8;
          break;
      }
    }
  }

  if( VAR_5>=0 ){
    VAR_3->estimatedRows = 1;
    VAR_3->idxFlags = VAR_0;
    VAR_3->estimatedCost = 3.0;
    VAR_3->idxNum = 132;
    VAR_3->aConstraintUsage[VAR_5].argvIndex = 1;
    VAR_3->aConstraintUsage[VAR_5].omit = 1;
  }else{
    int VAR_10 = 1;
    int VAR_11 = 0;
    sqlite3_int64 VAR_12 = 1000000;
    if( VAR_6>=0 ){
      VAR_12 = VAR_12 / 2;
      VAR_3->aConstraintUsage[VAR_6].argvIndex = VAR_10++;
      VAR_3->aConstraintUsage[VAR_6].omit = 1;
      VAR_11 |= VAR_3->aConstraint[VAR_6].op;
    }
    if( VAR_7>=0 ){
      VAR_12 = VAR_12 / 2;
      VAR_3->aConstraintUsage[VAR_7].argvIndex = VAR_10++;
      VAR_3->aConstraintUsage[VAR_7].omit = 1;
      VAR_11 |= VAR_3->aConstraint[VAR_7].op;
    }
    VAR_3->estimatedRows = VAR_12;
    VAR_3->estimatedCost = 3.0 * (double)VAR_12;
    VAR_3->idxNum = VAR_11;
  }

  return VAR_1;
}
