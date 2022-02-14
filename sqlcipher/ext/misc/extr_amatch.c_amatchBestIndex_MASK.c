
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sqlite3_index_constraint {scalar_t__ usable; int iColumn; scalar_t__ op; } ;
typedef int sqlite3_vtab ;
struct TYPE_7__ {int nConstraint; int idxNum; int nOrderBy; int orderByConsumed; double estimatedCost; TYPE_2__* aOrderBy; TYPE_1__* aConstraintUsage; struct sqlite3_index_constraint* aConstraint; } ;
typedef TYPE_3__ sqlite3_index_info ;
struct TYPE_6__ {int iColumn; scalar_t__ desc; } ;
struct TYPE_5__ {int argvIndex; int omit; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(
  sqlite3_vtab *VAR_5,
  sqlite3_index_info *VAR_6
){
  int VAR_7 = 0;
  int VAR_8 = -1;
  int VAR_9 = -1;
  int VAR_10;
  const struct sqlite3_index_constraint *VAR_11;

  (void)VAR_5;
  VAR_11 = VAR_6->aConstraint;
  for(VAR_10=0; VAR_10<VAR_6->nConstraint; VAR_10++, VAR_11++){
    if( VAR_11->usable==0 ) continue;
    if( (VAR_7 & 1)==0
     && VAR_11->iColumn==0
     && VAR_11->op==VAR_3
    ){
      VAR_7 |= 1;
      VAR_6->aConstraintUsage[VAR_10].argvIndex = 1;
      VAR_6->aConstraintUsage[VAR_10].omit = 1;
    }
    if( (VAR_7 & 2)==0
     && VAR_11->iColumn==1
     && (VAR_11->op==VAR_2
           || VAR_11->op==VAR_1)
    ){
      VAR_7 |= 2;
      VAR_8 = VAR_10;
    }
    if( (VAR_7 & 4)==0
     && VAR_11->iColumn==2
     && VAR_11->op==VAR_0
    ){
      VAR_7 |= 4;
      VAR_6->aConstraintUsage[VAR_10].omit = 1;
      VAR_9 = VAR_10;
    }
  }
  if( VAR_7 & 2 ){
    VAR_6->aConstraintUsage[VAR_8].argvIndex = 1+((VAR_7&1)!=0);
  }
  if( VAR_7 & 4 ){
    int VAR_12 = 1;
    if( VAR_7 & 1 ) VAR_12++;
    if( VAR_7 & 2 ) VAR_12++;
    VAR_6->aConstraintUsage[VAR_9].argvIndex = VAR_12;
  }
  VAR_6->idxNum = VAR_7;
  if( VAR_6->nOrderBy==1
   && VAR_6->aOrderBy[0].iColumn==1
   && VAR_6->aOrderBy[0].desc==0
  ){
    VAR_6->orderByConsumed = 1;
  }
  VAR_6->estimatedCost = (double)10000;

  return VAR_4;
}
