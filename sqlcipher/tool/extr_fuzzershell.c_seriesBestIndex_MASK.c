
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sqlite3_index_constraint {scalar_t__ usable; scalar_t__ op; int iColumn; } ;
typedef int sqlite3_vtab ;
struct TYPE_7__ {int nConstraint; double estimatedCost; int estimatedRows; int nOrderBy; int orderByConsumed; int idxNum; TYPE_2__* aOrderBy; TYPE_1__* aConstraintUsage; struct sqlite3_index_constraint* aConstraint; } ;
typedef TYPE_3__ sqlite3_index_info ;
struct TYPE_6__ {scalar_t__ desc; } ;
struct TYPE_5__ {int argvIndex; int omit; } ;





 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(
  sqlite3_vtab *VAR_3,
  sqlite3_index_info *VAR_4
){
  int VAR_5;
  int VAR_6 = 0;
  int VAR_7 = -1;
  int VAR_8 = -1;
  int VAR_9 = -1;
  int VAR_10 = 0;

  const struct sqlite3_index_constraint *VAR_11;
  VAR_11 = VAR_4->aConstraint;
  for(VAR_5=0; VAR_5<VAR_4->nConstraint; VAR_5++, VAR_11++){
    if( VAR_11->usable==0 ) continue;
    if( VAR_11->op!=VAR_0 ) continue;
    switch( VAR_11->iColumn ){
      case 130:
        VAR_7 = VAR_5;
        VAR_6 |= 1;
        break;
      case 128:
        VAR_8 = VAR_5;
        VAR_6 |= 2;
        break;
      case 129:
        VAR_9 = VAR_5;
        VAR_6 |= 4;
        break;
    }
  }
  if( VAR_7>=0 ){
    VAR_4->aConstraintUsage[VAR_7].argvIndex = ++VAR_10;
    VAR_4->aConstraintUsage[VAR_7].omit= !VAR_2;
  }
  if( VAR_8>=0 ){
    VAR_4->aConstraintUsage[VAR_8].argvIndex = ++VAR_10;
    VAR_4->aConstraintUsage[VAR_8].omit = !VAR_2;
  }
  if( VAR_9>=0 ){
    VAR_4->aConstraintUsage[VAR_9].argvIndex = ++VAR_10;
    VAR_4->aConstraintUsage[VAR_9].omit = !VAR_2;
  }
  if( (VAR_6 & 3)==3 ){


    VAR_4->estimatedCost = (double)(2 - ((VAR_6&4)!=0));
    VAR_4->estimatedRows = 1000;
    if( VAR_4->nOrderBy==1 ){
      if( VAR_4->aOrderBy[0].desc ) VAR_6 |= 8;
      VAR_4->orderByConsumed = 1;
    }
  }else{



    VAR_4->estimatedCost = (double)2147483647;
    VAR_4->estimatedRows = 2147483647;
  }
  VAR_4->idxNum = VAR_6;
  return VAR_1;
}
