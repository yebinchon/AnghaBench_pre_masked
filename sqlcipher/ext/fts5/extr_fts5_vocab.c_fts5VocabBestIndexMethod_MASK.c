
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sqlite3_index_constraint {scalar_t__ usable; scalar_t__ iColumn; scalar_t__ op; } ;
typedef int sqlite3_vtab ;
struct TYPE_7__ {int nConstraint; int estimatedCost; int nOrderBy; int orderByConsumed; int idxNum; TYPE_2__* aOrderBy; TYPE_1__* aConstraintUsage; struct sqlite3_index_constraint* aConstraint; } ;
typedef TYPE_3__ sqlite3_index_info ;
struct TYPE_6__ {scalar_t__ iColumn; scalar_t__ desc; } ;
struct TYPE_5__ {int argvIndex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(
  sqlite3_vtab *VAR_9,
  sqlite3_index_info *VAR_10
){
  int VAR_11;
  int VAR_12 = -1;
  int VAR_13 = -1;
  int VAR_14 = -1;
  int VAR_15 = 0;
  int VAR_16 = 0;

  FUNC_0(VAR_9);

  for(VAR_11=0; VAR_11<VAR_10->nConstraint; VAR_11++){
    struct sqlite3_index_constraint *VAR_17 = &VAR_10->aConstraint[VAR_11];
    if( VAR_17->usable==0 ) continue;
    if( VAR_17->iColumn==0 ){
      if( VAR_17->op==VAR_3 ) VAR_12 = VAR_11;
      if( VAR_17->op==VAR_6 ) VAR_14 = VAR_11;
      if( VAR_17->op==VAR_7 ) VAR_14 = VAR_11;
      if( VAR_17->op==VAR_4 ) VAR_13 = VAR_11;
      if( VAR_17->op==VAR_5 ) VAR_13 = VAR_11;
    }
  }

  if( VAR_12>=0 ){
    VAR_15 |= VAR_0;
    VAR_10->aConstraintUsage[VAR_12].argvIndex = ++VAR_16;
    VAR_10->estimatedCost = 100;
  }else{
    VAR_10->estimatedCost = 1000000;
    if( VAR_13>=0 ){
      VAR_15 |= VAR_1;
      VAR_10->aConstraintUsage[VAR_13].argvIndex = ++VAR_16;
      VAR_10->estimatedCost = VAR_10->estimatedCost / 2;
    }
    if( VAR_14>=0 ){
      VAR_15 |= VAR_2;
      VAR_10->aConstraintUsage[VAR_14].argvIndex = ++VAR_16;
      VAR_10->estimatedCost = VAR_10->estimatedCost / 2;
    }
  }






  if( VAR_10->nOrderBy==1
   && VAR_10->aOrderBy[0].iColumn==0
   && VAR_10->aOrderBy[0].desc==0
  ){
    VAR_10->orderByConsumed = 1;
  }

  VAR_10->idxNum = VAR_15;
  return VAR_8;
}
