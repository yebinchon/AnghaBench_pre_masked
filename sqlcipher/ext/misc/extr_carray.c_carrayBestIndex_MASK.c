
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sqlite3_index_constraint {scalar_t__ usable; scalar_t__ op; int iColumn; } ;
typedef int sqlite3_vtab ;
struct TYPE_5__ {int nConstraint; double estimatedCost; int estimatedRows; int idxNum; TYPE_1__* aConstraintUsage; struct sqlite3_index_constraint* aConstraint; } ;
typedef TYPE_2__ sqlite3_index_info ;
struct TYPE_4__ {int argvIndex; int omit; } ;





 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(
  sqlite3_vtab *VAR_2,
  sqlite3_index_info *VAR_3
){
  int VAR_4;
  int VAR_5 = -1;
  int VAR_6 = -1;
  int VAR_7 = -1;

  const struct sqlite3_index_constraint *VAR_8;
  VAR_8 = VAR_3->aConstraint;
  for(VAR_4=0; VAR_4<VAR_3->nConstraint; VAR_4++, VAR_8++){
    if( VAR_8->usable==0 ) continue;
    if( VAR_8->op!=VAR_0 ) continue;
    switch( VAR_8->iColumn ){
      case 128:
        VAR_5 = VAR_4;
        break;
      case 130:
        VAR_6 = VAR_4;
        break;
      case 129:
        VAR_7 = VAR_4;
        break;
    }
  }
  if( VAR_5>=0 && VAR_6>=0 ){
    VAR_3->aConstraintUsage[VAR_5].argvIndex = 1;
    VAR_3->aConstraintUsage[VAR_5].omit = 1;
    VAR_3->aConstraintUsage[VAR_6].argvIndex = 2;
    VAR_3->aConstraintUsage[VAR_6].omit = 1;
    VAR_3->estimatedCost = (double)1;
    VAR_3->estimatedRows = 100;
    VAR_3->idxNum = 2;
    if( VAR_7>=0 ){
      VAR_3->aConstraintUsage[VAR_7].argvIndex = 3;
      VAR_3->aConstraintUsage[VAR_7].omit = 1;
      VAR_3->idxNum = 3;
    }
  }else{
    VAR_3->estimatedCost = (double)2147483647;
    VAR_3->estimatedRows = 2147483647;
    VAR_3->idxNum = 0;
  }
  return VAR_1;
}
