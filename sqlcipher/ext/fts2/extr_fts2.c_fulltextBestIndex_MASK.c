
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sqlite3_index_constraint {int iColumn; scalar_t__ op; scalar_t__ usable; } ;
typedef int sqlite3_vtab ;
struct TYPE_5__ {int nConstraint; double estimatedCost; scalar_t__ idxNum; TYPE_1__* aConstraintUsage; struct sqlite3_index_constraint* aConstraint; } ;
typedef TYPE_2__ sqlite3_index_info ;
struct TYPE_4__ {int argvIndex; int omit; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(sqlite3_vtab *VAR_6, sqlite3_index_info *VAR_7){
  int VAR_8;
  FUNC_0(("FTS2 BestIndex\n"));

  for(VAR_8=0; VAR_8<VAR_7->nConstraint; ++VAR_8){
    const struct sqlite3_index_constraint *VAR_9;
    VAR_9 = &VAR_7->aConstraint[VAR_8];
    if( VAR_9->usable ) {
      if( VAR_9->iColumn==-1 &&
          VAR_9->op==VAR_3 ){
        VAR_7->idxNum = VAR_2;
        FUNC_0(("FTS2 QUERY_ROWID\n"));
      } else if( VAR_9->iColumn>=0 &&
                 VAR_9->op==VAR_4 ){

        VAR_7->idxNum = VAR_0 + VAR_9->iColumn;
        FUNC_0(("FTS2 QUERY_FULLTEXT %d\n", VAR_9->iColumn));
      } else continue;

      VAR_7->aConstraintUsage[VAR_8].argvIndex = 1;
      VAR_7->aConstraintUsage[VAR_8].omit = 1;




      VAR_7->estimatedCost = 1.0;

      return VAR_5;
    }
  }
  VAR_7->idxNum = VAR_1;
  return VAR_5;
}
