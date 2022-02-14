
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_vtab ;
struct TYPE_7__ {int nConstraint; int idxNum; int estimatedCost; TYPE_2__* aConstraintUsage; TYPE_1__* aConstraint; } ;
typedef TYPE_3__ sqlite3_index_info ;
struct TYPE_6__ {int argvIndex; int omit; } ;
struct TYPE_5__ {scalar_t__ iColumn; scalar_t__ op; scalar_t__ usable; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(
  sqlite3_vtab *VAR_2,
  sqlite3_index_info *VAR_3
){
  int VAR_4;
  FUNC_0(VAR_2);

  for(VAR_4=0; VAR_4<VAR_3->nConstraint; VAR_4++){
    if( VAR_3->aConstraint[VAR_4].usable
     && VAR_3->aConstraint[VAR_4].iColumn==0
     && VAR_3->aConstraint[VAR_4].op==VAR_0
    ){
      VAR_3->idxNum = 1;
      VAR_3->aConstraintUsage[VAR_4].argvIndex = 1;
      VAR_3->aConstraintUsage[VAR_4].omit = 1;
      VAR_3->estimatedCost = 1;
      return VAR_1;
    }
  }

  VAR_3->idxNum = 0;
  FUNC_1( VAR_3->estimatedCost>1000000.0 );

  return VAR_1;
}
