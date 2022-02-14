
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sqlite3_index_constraint {scalar_t__ iColumn; scalar_t__ usable; scalar_t__ op; } ;
typedef int sqlite3_vtab ;
struct TYPE_5__ {int nConstraint; int idxNum; double estimatedCost; TYPE_1__* aConstraintUsage; struct sqlite3_index_constraint* aConstraint; } ;
typedef TYPE_2__ sqlite3_index_info ;
struct TYPE_4__ {int argvIndex; int omit; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(
  sqlite3_vtab *VAR_5,
  sqlite3_index_info *VAR_6
){
  int VAR_7;
  int VAR_8[2];
  int VAR_9 = 0;
  int VAR_10 = 0;
  const struct sqlite3_index_constraint *VAR_11;



  FUNC_1( VAR_1 == VAR_0+1 );
  FUNC_0(VAR_5);
  VAR_8[0] = VAR_8[1] = -1;
  VAR_11 = VAR_6->aConstraint;
  for(VAR_7=0; VAR_7<VAR_6->nConstraint; VAR_7++, VAR_11++){
    int VAR_12;
    int VAR_13;
    if( VAR_11->iColumn < VAR_0 ) continue;
    VAR_12 = VAR_11->iColumn - VAR_0;
    FUNC_1( VAR_12==0 || VAR_12==1 );
    VAR_13 = 1 << VAR_12;
    if( VAR_11->usable==0 ){
      VAR_9 |= VAR_13;
    }else if( VAR_11->op==VAR_3 ){
      VAR_8[VAR_12] = VAR_7;
      VAR_10 |= VAR_13;
    }
  }
  if( (VAR_9 & ~VAR_10)!=0 ){


    return VAR_2;
  }
  if( VAR_8[0]<0 ){



    VAR_6->idxNum = 0;
  }else{
    VAR_6->estimatedCost = 1.0;
    VAR_7 = VAR_8[0];
    VAR_6->aConstraintUsage[VAR_7].argvIndex = 1;
    VAR_6->aConstraintUsage[VAR_7].omit = 1;
    if( VAR_8[1]<0 ){
      VAR_6->idxNum = 1;
    }else{
      VAR_7 = VAR_8[1];
      VAR_6->aConstraintUsage[VAR_7].argvIndex = 2;
      VAR_6->aConstraintUsage[VAR_7].omit = 1;
      VAR_6->idxNum = 3;
    }
  }
  return VAR_4;
}
