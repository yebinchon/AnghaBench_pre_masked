
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sqlite3_index_constraint {scalar_t__ iColumn; scalar_t__ usable; scalar_t__ op; } ;
typedef int sqlite3_vtab ;
struct TYPE_7__ {int nConstraint; double estimatedCost; int estimatedRows; int nOrderBy; int orderByConsumed; int idxNum; TYPE_2__* aOrderBy; TYPE_1__* aConstraintUsage; struct sqlite3_index_constraint* aConstraint; } ;
typedef TYPE_3__ sqlite3_index_info ;
struct TYPE_6__ {scalar_t__ desc; } ;
struct TYPE_5__ {int argvIndex; int omit; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(
  sqlite3_vtab *VAR_7,
  sqlite3_index_info *VAR_8
){
  int VAR_9, VAR_10;
  int VAR_11 = 0;
  int VAR_12 = 0;
  int VAR_13 = 0;
  int VAR_14[3];
  const struct sqlite3_index_constraint *VAR_15;



  FUNC_0( VAR_2 == VAR_0+1 );
  FUNC_0( VAR_1 == VAR_0+2 );
  VAR_14[0] = VAR_14[1] = VAR_14[2] = -1;
  VAR_15 = VAR_8->aConstraint;
  for(VAR_9=0; VAR_9<VAR_8->nConstraint; VAR_9++, VAR_15++){
    int VAR_16;
    int VAR_17;
    if( VAR_15->iColumn<VAR_0 ) continue;
    VAR_16 = VAR_15->iColumn - VAR_0;
    FUNC_0( VAR_16>=0 && VAR_16<=2 );
    VAR_17 = 1 << VAR_16;
    if( VAR_15->usable==0 ){
      VAR_12 |= VAR_17;
      continue;
    }else if( VAR_15->op==VAR_4 ){
      VAR_11 |= VAR_17;
      VAR_14[VAR_16] = VAR_9;
    }
  }
  for(VAR_9=0; VAR_9<3; VAR_9++){
    if( (VAR_10 = VAR_14[VAR_9])>=0 ){
      VAR_8->aConstraintUsage[VAR_10].argvIndex = ++VAR_13;
      VAR_8->aConstraintUsage[VAR_10].omit = !VAR_6;
    }
  }
  if( (VAR_12 & ~VAR_11)!=0 ){



    return VAR_3;
  }
  if( (VAR_11 & 3)==3 ){


    VAR_8->estimatedCost = (double)(2 - ((VAR_11&4)!=0));
    VAR_8->estimatedRows = 1000;
    if( VAR_8->nOrderBy==1 ){
      if( VAR_8->aOrderBy[0].desc ) VAR_11 |= 8;
      VAR_8->orderByConsumed = 1;
    }
  }else{



    VAR_8->estimatedRows = 2147483647;
  }
  VAR_8->idxNum = VAR_11;
  return VAR_5;
}
