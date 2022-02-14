
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sqlite3_index_constraint {scalar_t__ usable; scalar_t__ op; scalar_t__ iColumn; } ;
typedef int sqlite3_vtab ;
struct TYPE_5__ {int nConstraint; double estimatedCost; TYPE_1__* aConstraintUsage; struct sqlite3_index_constraint* aConstraint; } ;
typedef TYPE_2__ sqlite3_index_info ;
struct TYPE_4__ {int argvIndex; int omit; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(sqlite3_vtab *VAR_4, sqlite3_index_info *VAR_5){
  int VAR_6 = -1;
  int VAR_7 = -1;
  int VAR_8;

  for(VAR_8=0; VAR_8<VAR_5->nConstraint; VAR_8++){
    struct sqlite3_index_constraint *VAR_9 = &VAR_5->aConstraint[VAR_8];
    if( VAR_9->usable==0 ) continue;
    if( VAR_9->op!=VAR_2 ) continue;

    if( VAR_9->iColumn==VAR_1 ){
      VAR_6 = VAR_8;
    }
    if( VAR_9->iColumn==VAR_0 ){
      VAR_7 = VAR_8;
    }
  }

  if( VAR_6<0 ){
    VAR_5->estimatedCost = 1000000000.0;
  }else{
    VAR_5->aConstraintUsage[VAR_6].argvIndex = 1;
    VAR_5->aConstraintUsage[VAR_6].omit = 1;
    if( VAR_7<0 ){
      VAR_5->estimatedCost = 1000000.0;
    }else{
      VAR_5->aConstraintUsage[VAR_7].argvIndex = 2;
      VAR_5->aConstraintUsage[VAR_7].omit = 1;
      VAR_5->estimatedCost = 1000.0;
    }
  }

  return VAR_3;
}
