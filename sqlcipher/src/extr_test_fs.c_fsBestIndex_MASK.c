
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sqlite3_index_constraint_usage {int argvIndex; scalar_t__ omit; } ;
struct sqlite3_index_constraint {scalar_t__ iColumn; scalar_t__ op; scalar_t__ usable; } ;
typedef int sqlite3_vtab ;
struct TYPE_3__ {int nConstraint; int idxNum; double estimatedCost; struct sqlite3_index_constraint_usage* aConstraintUsage; struct sqlite3_index_constraint* aConstraint; } ;
typedef TYPE_1__ sqlite3_index_info ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(sqlite3_vtab *VAR_2, sqlite3_index_info *VAR_3){
  int VAR_4;

  for(VAR_4=0; VAR_4<VAR_3->nConstraint; VAR_4++){
    struct sqlite3_index_constraint const *VAR_5 = &VAR_3->aConstraint[VAR_4];
    if( VAR_5->iColumn<0 && VAR_5->usable
           && VAR_5->op==VAR_0 ){
      struct sqlite3_index_constraint_usage *VAR_6;
      VAR_6 = &VAR_3->aConstraintUsage[VAR_4];
      VAR_6->omit = 0;
      VAR_6->argvIndex = 1;
      VAR_3->idxNum = 1;
      VAR_3->estimatedCost = 1.0;
      break;
    }
  }

  return VAR_1;
}
