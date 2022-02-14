
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_vtab ;
struct TYPE_7__ {int nConstraint; double estimatedCost; int estimatedRows; int idxNum; TYPE_2__* aConstraintUsage; TYPE_1__* aConstraint; } ;
typedef TYPE_3__ sqlite3_index_info ;
struct TYPE_6__ {int argvIndex; int omit; } ;
struct TYPE_5__ {scalar_t__ iColumn; scalar_t__ usable; scalar_t__ op; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(
  sqlite3_vtab *VAR_4,
  sqlite3_index_info *VAR_5
){
  int VAR_6;
  for(VAR_6=0; VAR_6<VAR_5->nConstraint; VAR_6++){
    if( VAR_5->aConstraint[VAR_6].iColumn != VAR_0 ) continue;
    if( VAR_5->aConstraint[VAR_6].usable==0 ) continue;
    if( VAR_5->aConstraint[VAR_6].op!=VAR_2 ) continue;
    VAR_5->aConstraintUsage[VAR_6].argvIndex = 1;
    VAR_5->aConstraintUsage[VAR_6].omit = 1;
    VAR_5->estimatedCost = (double)1;
    VAR_5->estimatedRows = 10;
    VAR_5->idxNum = 1;
    return VAR_3;
  }
  VAR_5->idxNum = 0;
  VAR_5->estimatedCost = (double)0x7fffffff;
  VAR_5->estimatedRows = 0x7fffffff;
  return VAR_1;
}
