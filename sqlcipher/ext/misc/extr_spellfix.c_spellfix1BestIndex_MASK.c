
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sqlite3_index_constraint {scalar_t__ usable; scalar_t__ iColumn; scalar_t__ op; } ;
typedef int sqlite3_vtab ;
struct TYPE_7__ {int nConstraint; int idxNum; int nOrderBy; int orderByConsumed; int estimatedCost; TYPE_2__* aConstraintUsage; TYPE_1__* aOrderBy; struct sqlite3_index_constraint* aConstraint; } ;
typedef TYPE_3__ sqlite3_index_info ;
struct TYPE_6__ {int argvIndex; int omit; } ;
struct TYPE_5__ {scalar_t__ iColumn; scalar_t__ desc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static int FUNC_0(sqlite3_vtab *VAR_19, sqlite3_index_info *VAR_20){
  int VAR_21 = 0;
  int VAR_22 = -1;
  int VAR_23 = -1;
  int VAR_24 = -1;
  int VAR_25 = -1;
  int VAR_26 = -1;
  int VAR_27;
  const struct sqlite3_index_constraint *VAR_28;
  VAR_28 = VAR_20->aConstraint;
  for(VAR_27=0; VAR_27<VAR_20->nConstraint; VAR_27++, VAR_28++){
    if( VAR_28->usable==0 ) continue;


    if( (VAR_21 & VAR_10)==0
     && VAR_28->iColumn==VAR_5
     && VAR_28->op==VAR_17
    ){
      VAR_21 |= VAR_10;
      VAR_20->aConstraintUsage[VAR_27].argvIndex = 1;
      VAR_20->aConstraintUsage[VAR_27].omit = 1;
    }


    if( (VAR_21 & VAR_9)==0
     && VAR_28->iColumn==VAR_1
     && VAR_28->op==VAR_14
    ){
      VAR_21 |= VAR_9;
      VAR_22 = VAR_27;
    }


    if( (VAR_21 & VAR_13)==0
     && VAR_28->iColumn==VAR_4
     && VAR_28->op==VAR_14
    ){
      VAR_21 |= VAR_13;
      VAR_23 = VAR_27;
    }


    if( (VAR_21 & VAR_12)==0
     && VAR_28->iColumn==VAR_2
     && VAR_28->op==VAR_14
    ){
      VAR_21 |= VAR_12;
      VAR_24 = VAR_27;
    }


    if( (VAR_21 & VAR_6)==0
     && VAR_28->iColumn==VAR_0
     && (VAR_28->op==VAR_16
          || VAR_28->op==VAR_15)
    ){
      if( VAR_28->op==VAR_16 ){
        VAR_21 |= VAR_8;
      }else{
        VAR_21 |= VAR_7;
      }
      VAR_25 = VAR_27;
    }


    if( (VAR_21 & VAR_11)==0
     && VAR_28->iColumn<0
     && VAR_28->op==VAR_14
    ){
      VAR_21 |= VAR_11;
      VAR_26 = VAR_27;
    }
  }
  if( VAR_21&VAR_10 ){
    int VAR_29 = 2;
    VAR_20->idxNum = VAR_21;
    if( VAR_20->nOrderBy==1
     && VAR_20->aOrderBy[0].iColumn==VAR_3
     && VAR_20->aOrderBy[0].desc==0
    ){
      VAR_20->orderByConsumed = 1;
    }
    if( VAR_21&VAR_9 ){
      VAR_20->aConstraintUsage[VAR_22].argvIndex = VAR_29++;
      VAR_20->aConstraintUsage[VAR_22].omit = 1;
    }
    if( VAR_21&VAR_13 ){
      VAR_20->aConstraintUsage[VAR_23].argvIndex = VAR_29++;
      VAR_20->aConstraintUsage[VAR_23].omit = 1;
    }
    if( VAR_21&VAR_12 ){
      VAR_20->aConstraintUsage[VAR_24].argvIndex = VAR_29++;
      VAR_20->aConstraintUsage[VAR_24].omit = 1;
    }
    if( VAR_21&VAR_6 ){
      VAR_20->aConstraintUsage[VAR_25].argvIndex = VAR_29++;
      VAR_20->aConstraintUsage[VAR_25].omit = 1;
    }
    VAR_20->estimatedCost = 1e5;
  }else if( (VAR_21 & VAR_11) ){
    VAR_20->idxNum = VAR_11;
    VAR_20->aConstraintUsage[VAR_26].argvIndex = 1;
    VAR_20->aConstraintUsage[VAR_26].omit = 1;
    VAR_20->estimatedCost = 5;
  }else{
    VAR_20->idxNum = 0;
    VAR_20->estimatedCost = 1e50;
  }
  return VAR_18;
}
