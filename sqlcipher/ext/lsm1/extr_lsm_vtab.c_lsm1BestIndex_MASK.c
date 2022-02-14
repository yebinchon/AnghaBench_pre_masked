
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sqlite3_index_constraint {scalar_t__ usable; scalar_t__ iColumn; int op; } ;
typedef int sqlite3_vtab ;
struct TYPE_5__ {int nConstraint; double estimatedCost; int estimatedRows; int orderByConsumed; int idxNum; TYPE_1__* aConstraintUsage; struct sqlite3_index_constraint* aConstraint; } ;
typedef TYPE_2__ sqlite3_index_info ;
struct TYPE_4__ {int argvIndex; int omit; } ;







 int VAR_0 ;

__attribute__((used)) static int FUNC_0(
  sqlite3_vtab *VAR_1,
  sqlite3_index_info *VAR_2
){
  int VAR_3;
  int VAR_4 = 99;
  int VAR_5 = 0;
  int VAR_6 = -1;
  int VAR_7 = -1;
  int VAR_8 = 0;
  int VAR_9 = 0;

  const struct sqlite3_index_constraint *VAR_10;
  VAR_10 = VAR_2->aConstraint;
  for(VAR_3=0; VAR_3<VAR_2->nConstraint && VAR_4<16; VAR_3++, VAR_10++){
    if( VAR_10->usable==0 ) continue;
    if( VAR_10->iColumn!=0 ) continue;
    switch( VAR_10->op ){
      case 132: {
        if( VAR_4>0 ){
          VAR_6 = VAR_3;
          VAR_7 = -1;
          VAR_4 = 0;
          VAR_8 = 1;
        }
        break;
      }
      case 131:
      case 130: {
        if( VAR_4==99 ){
          VAR_6 = VAR_3;
          VAR_4 = 2;
          VAR_8 = VAR_10->op==131;
        }else if( VAR_4==3 ){
          VAR_7 = VAR_4;
          VAR_9 = VAR_8;
          VAR_6 = VAR_3;
          VAR_4 = 1;
          VAR_8 = VAR_10->op==131;
        }
        break;
      }
      case 129:
      case 128: {
        if( VAR_4==99 ){
          VAR_6 = VAR_3;
          VAR_4 = 3;
          VAR_8 = VAR_10->op==129;
        }else if( VAR_4==2 ){
          VAR_7 = VAR_3;
          VAR_4 = 1;
          VAR_8 = VAR_10->op==129;
        }
        break;
      }
    }
  }
  if( VAR_6>=0 ){
    VAR_2->aConstraintUsage[VAR_6].argvIndex = ++VAR_5;
    VAR_2->aConstraintUsage[VAR_6].omit = VAR_8;
  }
  if( VAR_7>=0 ){
    VAR_2->aConstraintUsage[VAR_7].argvIndex = ++VAR_5;
    VAR_2->aConstraintUsage[VAR_7].omit = VAR_9;
  }
  if( VAR_4==0 ){
    VAR_2->estimatedCost = (double)1;
    VAR_2->estimatedRows = 1;
    VAR_2->orderByConsumed = 1;
  }else if( VAR_4==1 ){
    VAR_2->estimatedCost = (double)100;
    VAR_2->estimatedRows = 100;
  }else if( VAR_4<99 ){
    VAR_2->estimatedCost = (double)5000;
    VAR_2->estimatedRows = 5000;
  }else{

    VAR_2->estimatedCost = (double)2147483647;
    VAR_2->estimatedRows = 2147483647;
  }
  VAR_2->idxNum = VAR_4;
  return VAR_0;
}
