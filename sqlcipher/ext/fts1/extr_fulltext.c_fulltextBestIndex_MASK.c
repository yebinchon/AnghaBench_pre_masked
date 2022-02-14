
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sqlite3_index_constraint {scalar_t__ iColumn; scalar_t__ op; scalar_t__ usable; } ;
typedef int sqlite3_vtab ;
struct TYPE_5__ {int nConstraint; double estimatedCost; int idxNum; TYPE_1__* aConstraintUsage; struct sqlite3_index_constraint* aConstraint; } ;
typedef TYPE_2__ sqlite3_index_info ;
struct TYPE_4__ {int argvIndex; int omit; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(sqlite3_vtab *VAR_4, sqlite3_index_info *VAR_5){
  int VAR_6;

  for(VAR_6=0; VAR_6<VAR_5->nConstraint; ++VAR_6){
    const struct sqlite3_index_constraint *VAR_7;
    VAR_7 = &VAR_5->aConstraint[VAR_6];
    if( VAR_7->iColumn==0 &&
        VAR_7->op==VAR_2 &&
        VAR_7->usable ){
      VAR_5->aConstraintUsage[VAR_6].argvIndex = 1;
      VAR_5->aConstraintUsage[VAR_6].omit = 1;
      VAR_5->idxNum = VAR_0;
      VAR_5->estimatedCost = 1.0;
      return VAR_3;
    }
  }
  VAR_5->idxNum = VAR_1;
  return VAR_3;
}
