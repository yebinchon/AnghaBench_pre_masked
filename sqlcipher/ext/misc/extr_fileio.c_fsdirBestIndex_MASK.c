
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sqlite3_index_constraint {scalar_t__ op; int iColumn; int usable; } ;
typedef int sqlite3_vtab ;
struct TYPE_5__ {int nConstraint; int idxNum; int estimatedRows; double estimatedCost; TYPE_1__* aConstraintUsage; struct sqlite3_index_constraint* aConstraint; } ;
typedef TYPE_2__ sqlite3_index_info ;
struct TYPE_4__ {int omit; int argvIndex; } ;




 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(
  sqlite3_vtab *VAR_3,
  sqlite3_index_info *VAR_4
){
  int VAR_5;
  int VAR_6 = -1;
  int VAR_7 = -1;
  int VAR_8 = 0;
  int VAR_9 = 0;
  const struct sqlite3_index_constraint *VAR_10;

  (void)VAR_3;
  VAR_10 = VAR_4->aConstraint;
  for(VAR_5=0; VAR_5<VAR_4->nConstraint; VAR_5++, VAR_10++){
    if( VAR_10->op!=VAR_1 ) continue;
    switch( VAR_10->iColumn ){
      case 128: {
        if( VAR_10->usable ){
          VAR_6 = VAR_5;
          VAR_8 = 0;
        }else if( VAR_6<0 ){
          VAR_8 = 1;
        }
        break;
      }
      case 129: {
        if( VAR_10->usable ){
          VAR_7 = VAR_5;
          VAR_9 = 0;
        }else if( VAR_7<0 ){
          VAR_9 = 1;
        }
        break;
      }
    }
  }
  if( VAR_8 || VAR_9 ){

    return VAR_0;
  }

  if( VAR_6<0 ){
    VAR_4->idxNum = 0;


    VAR_4->estimatedRows = 0x7fffffff;
  }else{
    VAR_4->aConstraintUsage[VAR_6].omit = 1;
    VAR_4->aConstraintUsage[VAR_6].argvIndex = 1;
    if( VAR_7>=0 ){
      VAR_4->aConstraintUsage[VAR_7].omit = 1;
      VAR_4->aConstraintUsage[VAR_7].argvIndex = 2;
      VAR_4->idxNum = 2;
      VAR_4->estimatedCost = 10.0;
    }else{
      VAR_4->idxNum = 1;
      VAR_4->estimatedCost = 100.0;
    }
  }

  return VAR_2;
}
