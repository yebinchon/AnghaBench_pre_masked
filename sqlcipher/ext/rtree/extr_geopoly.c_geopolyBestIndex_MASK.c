
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sqlite3_index_constraint {scalar_t__ iColumn; scalar_t__ op; int usable; } ;
typedef int sqlite3_vtab ;
struct TYPE_5__ {int nConstraint; int idxNum; char* idxStr; double estimatedCost; int estimatedRows; TYPE_1__* aConstraintUsage; int idxFlags; struct sqlite3_index_constraint* aConstraint; } ;
typedef TYPE_2__ sqlite3_index_info ;
struct TYPE_4__ {int argvIndex; int omit; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(sqlite3_vtab *VAR_4, sqlite3_index_info *VAR_5){
  int VAR_6;
  int VAR_7 = -1;
  int VAR_8 = -1;
  int VAR_9 = 0;

  for(VAR_6=0; VAR_6<VAR_5->nConstraint; VAR_6++){
    struct sqlite3_index_constraint *VAR_10 = &VAR_5->aConstraint[VAR_6];
    if( !VAR_10->usable ) continue;
    if( VAR_10->iColumn<0 && VAR_10->op==VAR_0 ){
      VAR_7 = VAR_6;
      break;
    }
    if( VAR_10->iColumn==0 && VAR_10->op>=VAR_1 ){



      VAR_8 = VAR_6;
      VAR_9 = VAR_10->op - VAR_1 + 2;
    }
  }

  if( VAR_7>=0 ){
    VAR_5->idxNum = 1;
    VAR_5->idxStr = "rowid";
    VAR_5->aConstraintUsage[VAR_7].argvIndex = 1;
    VAR_5->aConstraintUsage[VAR_7].omit = 1;
    VAR_5->estimatedCost = 30.0;
    VAR_5->estimatedRows = 1;
    VAR_5->idxFlags = VAR_2;
    return VAR_3;
  }
  if( VAR_8>=0 ){
    VAR_5->idxNum = VAR_9;
    VAR_5->idxStr = "rtree";
    VAR_5->aConstraintUsage[VAR_8].argvIndex = 1;
    VAR_5->aConstraintUsage[VAR_8].omit = 0;
    VAR_5->estimatedCost = 300.0;
    VAR_5->estimatedRows = 10;
    return VAR_3;
  }
  VAR_5->idxNum = 4;
  VAR_5->idxStr = "fullscan";
  VAR_5->estimatedCost = 3000000.0;
  VAR_5->estimatedRows = 100000;
  return VAR_3;
}
