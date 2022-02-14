
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite3_vtab ;
struct TYPE_9__ {int nOrderBy; int orderByConsumed; int nConstraint; int estimatedCost; TYPE_3__* aConstraintUsage; scalar_t__ idxNum; TYPE_2__* aConstraint; TYPE_1__* aOrderBy; } ;
typedef TYPE_4__ sqlite3_index_info ;
struct TYPE_8__ {int argvIndex; } ;
struct TYPE_7__ {int op; int iColumn; scalar_t__ usable; } ;
struct TYPE_6__ {scalar_t__ iColumn; scalar_t__ desc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
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
  int VAR_15 = -1;
  int VAR_16 = 1;

  FUNC_0(VAR_9);


  if( VAR_10->nOrderBy==1
   && VAR_10->aOrderBy[0].iColumn==0
   && VAR_10->aOrderBy[0].desc==0
  ){
    VAR_10->orderByConsumed = 1;
  }



  for(VAR_11=0; VAR_11<VAR_10->nConstraint; VAR_11++){
    if( VAR_10->aConstraint[VAR_11].usable ){
      int VAR_17 = VAR_10->aConstraint[VAR_11].op;
      int VAR_18 = VAR_10->aConstraint[VAR_11].iColumn;

      if( VAR_18==0 ){
        if( VAR_17==VAR_3 ) VAR_12 = VAR_11;
        if( VAR_17==VAR_7 ) VAR_14 = VAR_11;
        if( VAR_17==VAR_6 ) VAR_14 = VAR_11;
        if( VAR_17==VAR_5 ) VAR_13 = VAR_11;
        if( VAR_17==VAR_4 ) VAR_13 = VAR_11;
      }
      if( VAR_18==4 ){
        if( VAR_17==VAR_3 ) VAR_15 = VAR_11;
      }
    }
  }

  if( VAR_12>=0 ){
    VAR_10->idxNum = VAR_0;
    VAR_10->aConstraintUsage[VAR_12].argvIndex = VAR_16++;
    VAR_10->estimatedCost = 5;
  }else{
    VAR_10->idxNum = 0;
    VAR_10->estimatedCost = 20000;
    if( VAR_13>=0 ){
      VAR_10->idxNum += VAR_1;
      VAR_10->aConstraintUsage[VAR_13].argvIndex = VAR_16++;
      VAR_10->estimatedCost /= 2;
    }
    if( VAR_14>=0 ){
      VAR_10->idxNum += VAR_2;
      VAR_10->aConstraintUsage[VAR_14].argvIndex = VAR_16++;
      VAR_10->estimatedCost /= 2;
    }
  }
  if( VAR_15>=0 ){
    VAR_10->aConstraintUsage[VAR_15].argvIndex = VAR_16++;
    VAR_10->estimatedCost--;
  }

  return VAR_8;
}
