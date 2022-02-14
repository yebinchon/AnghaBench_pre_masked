
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sqlite3_index_constraint {scalar_t__ iColumn; scalar_t__ op; scalar_t__ usable; } ;
typedef int sqlite3_vtab ;
struct TYPE_5__ {double estimatedCost; int estimatedRows; int nConstraint; int idxNum; TYPE_1__* aConstraintUsage; struct sqlite3_index_constraint* aConstraint; } ;
typedef TYPE_2__ sqlite3_index_info ;
struct TYPE_4__ {int argvIndex; int omit; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(sqlite3_vtab *VAR_3, sqlite3_index_info *VAR_4){
  int VAR_5;
  VAR_4->estimatedCost = 10000.0;
  VAR_4->estimatedRows = 100;
  for(VAR_5=0; VAR_5<VAR_4->nConstraint; VAR_5++){
    struct sqlite3_index_constraint *VAR_6 = &VAR_4->aConstraint[VAR_5];
    if( VAR_6->usable
     && VAR_6->iColumn==VAR_0
     && VAR_6->op==VAR_1
    ){
      VAR_4->estimatedCost = 1000.0;
      VAR_4->idxNum = 1;
      VAR_4->aConstraintUsage[VAR_5].argvIndex = 1;
      VAR_4->aConstraintUsage[VAR_5].omit = 1;
      break;
    }
  }
  return VAR_2;
}
