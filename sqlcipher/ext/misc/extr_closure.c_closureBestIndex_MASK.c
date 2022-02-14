
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sqlite3_index_constraint {scalar_t__ usable; scalar_t__ iColumn; scalar_t__ op; } ;
typedef int sqlite3_vtab ;
struct TYPE_8__ {int nConstraint; int idxNum; int nOrderBy; int orderByConsumed; double estimatedCost; TYPE_2__* aOrderBy; TYPE_1__* aConstraintUsage; struct sqlite3_index_constraint* aConstraint; } ;
typedef TYPE_3__ sqlite3_index_info ;
struct TYPE_9__ {scalar_t__ zTableName; scalar_t__ zIdColumn; scalar_t__ zParentColumn; } ;
typedef TYPE_4__ closure_vtab ;
struct TYPE_7__ {scalar_t__ iColumn; scalar_t__ desc; } ;
struct TYPE_6__ {int argvIndex; int omit; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_0(
  sqlite3_vtab *VAR_10,
  sqlite3_index_info *VAR_11
){
  int VAR_12 = 0;
  int VAR_13;
  int VAR_14 = 1;
  const struct sqlite3_index_constraint *VAR_15;
  closure_vtab *VAR_16 = (closure_vtab*)VAR_10;
  double VAR_17 = 10000000.0;

  VAR_15 = VAR_11->aConstraint;
  for(VAR_13=0; VAR_13<VAR_11->nConstraint; VAR_13++, VAR_15++){
    if( VAR_15->usable==0 ) continue;
    if( (VAR_12 & 1)==0
     && VAR_15->iColumn==VAR_4
     && VAR_15->op==VAR_6
    ){
      VAR_12 |= 1;
      VAR_11->aConstraintUsage[VAR_13].argvIndex = 1;
      VAR_11->aConstraintUsage[VAR_13].omit = 1;
      VAR_17 /= 100.0;
    }
    if( (VAR_12 & 0x0000f0)==0
     && VAR_15->iColumn==VAR_0
     && (VAR_15->op==VAR_8
           || VAR_15->op==VAR_7
           || VAR_15->op==VAR_6)
    ){
      VAR_12 |= VAR_14<<4;
      VAR_11->aConstraintUsage[VAR_13].argvIndex = ++VAR_14;
      if( VAR_15->op==VAR_8 ) VAR_12 |= 0x000002;
      VAR_17 /= 5.0;
    }
    if( (VAR_12 & 0x000f00)==0
     && VAR_15->iColumn==VAR_5
     && VAR_15->op==VAR_6
    ){
      VAR_12 |= VAR_14<<8;
      VAR_11->aConstraintUsage[VAR_13].argvIndex = ++VAR_14;
      VAR_11->aConstraintUsage[VAR_13].omit = 1;
      VAR_17 /= 5.0;
    }
    if( (VAR_12 & 0x00f000)==0
     && VAR_15->iColumn==VAR_2
     && VAR_15->op==VAR_6
    ){
      VAR_12 |= VAR_14<<12;
      VAR_11->aConstraintUsage[VAR_13].argvIndex = ++VAR_14;
      VAR_11->aConstraintUsage[VAR_13].omit = 1;
    }
    if( (VAR_12 & 0x0f0000)==0
     && VAR_15->iColumn==VAR_3
     && VAR_15->op==VAR_6
    ){
      VAR_12 |= VAR_14<<16;
      VAR_11->aConstraintUsage[VAR_13].argvIndex = ++VAR_14;
      VAR_11->aConstraintUsage[VAR_13].omit = 1;
    }
  }
  if( (VAR_16->zTableName==0 && (VAR_12 & 0x000f00)==0)
   || (VAR_16->zIdColumn==0 && (VAR_12 & 0x00f000)==0)
   || (VAR_16->zParentColumn==0 && (VAR_12 & 0x0f0000)==0)
  ){



    VAR_12 = 0;
  }
  if( (VAR_12&1)==0 ){





    VAR_17 *= 1e30;
    for(VAR_13=0; VAR_13<VAR_11->nConstraint; VAR_13++, VAR_15++){
      VAR_11->aConstraintUsage[VAR_13].argvIndex = 0;
    }
    VAR_12 = 0;
  }
  VAR_11->idxNum = VAR_12;
  if( VAR_11->nOrderBy==1
   && VAR_11->aOrderBy[0].iColumn==VAR_1
   && VAR_11->aOrderBy[0].desc==0
  ){
    VAR_11->orderByConsumed = 1;
  }
  VAR_11->estimatedCost = VAR_17;

  return VAR_9;
}
