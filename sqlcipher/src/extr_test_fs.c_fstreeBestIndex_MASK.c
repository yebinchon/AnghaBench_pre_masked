
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sqlite3_index_constraint_usage {int argvIndex; } ;
struct sqlite3_index_constraint {scalar_t__ iColumn; scalar_t__ op; scalar_t__ usable; } ;
typedef int sqlite3_vtab ;
struct TYPE_3__ {int nConstraint; scalar_t__ idxNum; double estimatedCost; struct sqlite3_index_constraint_usage* aConstraintUsage; struct sqlite3_index_constraint* aConstraint; } ;
typedef TYPE_1__ sqlite3_index_info ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(sqlite3_vtab *VAR_4, sqlite3_index_info *VAR_5){
  int VAR_6;

  for(VAR_6=0; VAR_6<VAR_5->nConstraint; VAR_6++){
    struct sqlite3_index_constraint const *VAR_7 = &VAR_5->aConstraint[VAR_6];
    if( VAR_7->iColumn==0 && VAR_7->usable && (
          VAR_7->op==VAR_1
       || VAR_7->op==VAR_2
       || VAR_7->op==VAR_0
    )){
      struct sqlite3_index_constraint_usage *VAR_8;
      VAR_8 = &VAR_5->aConstraintUsage[VAR_6];
      VAR_5->idxNum = VAR_7->op;
      VAR_8->argvIndex = 1;
      VAR_5->estimatedCost = 100000.0;
      return VAR_3;
    }
  }

  VAR_5->estimatedCost = 1000000000.0;
  return VAR_3;
}
