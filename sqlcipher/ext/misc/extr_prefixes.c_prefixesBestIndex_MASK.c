
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sqlite3_index_constraint {int iColumn; scalar_t__ op; int usable; } ;
typedef int sqlite3_vtab ;
struct TYPE_5__ {int nConstraint; double estimatedCost; int estimatedRows; TYPE_1__* aConstraintUsage; struct sqlite3_index_constraint* aConstraint; } ;
typedef TYPE_2__ sqlite3_index_info ;
struct TYPE_4__ {int argvIndex; int omit; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(
  sqlite3_vtab *VAR_2,
  sqlite3_index_info *VAR_3
){


  int VAR_4;
  const struct sqlite3_index_constraint *VAR_5;

  for(VAR_4=0, VAR_5=VAR_3->aConstraint; VAR_4<VAR_3->nConstraint; VAR_4++, VAR_5++){
    if( VAR_5->iColumn!=1 ) continue;
    if( VAR_5->op!=VAR_0 ) continue;
    if( !VAR_5->usable ) continue;
    VAR_3->aConstraintUsage[VAR_4].argvIndex = 1;
    VAR_3->aConstraintUsage[VAR_4].omit = 1;
    VAR_3->estimatedCost = (double)10;
    VAR_3->estimatedRows = 10;
    return VAR_1;
  }
  VAR_3->estimatedCost = (double)1000000000;
  VAR_3->estimatedRows = 1000000000;
  return VAR_1;
}
