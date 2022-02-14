
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_6__ {int * pOwner; void* pEnd; void* pStart; int eExclude; int eStart; int eEnd; int eFrmType; void* pOrderBy; void* pPartition; int pFunc; void* pFilter; int zName; } ;
typedef TYPE_1__ Window ;
typedef int Expr ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 void* FUNC_3 (int *,void*,int ) ;
 void* FUNC_4 (int *,void*,int ) ;

Window *FUNC_5(sqlite3 *VAR_0, Expr *VAR_1, Window *VAR_2){
  Window *VAR_3 = 0;
  if( FUNC_0(VAR_2) ){
    VAR_3 = FUNC_1(VAR_0, sizeof(Window));
    if( VAR_3 ){
      VAR_3->zName = FUNC_2(VAR_0, VAR_2->zName);
      VAR_3->pFilter = FUNC_3(VAR_0, VAR_2->pFilter, 0);
      VAR_3->pFunc = VAR_2->pFunc;
      VAR_3->pPartition = FUNC_4(VAR_0, VAR_2->pPartition, 0);
      VAR_3->pOrderBy = FUNC_4(VAR_0, VAR_2->pOrderBy, 0);
      VAR_3->eFrmType = VAR_2->eFrmType;
      VAR_3->eEnd = VAR_2->eEnd;
      VAR_3->eStart = VAR_2->eStart;
      VAR_3->eExclude = VAR_2->eExclude;
      VAR_3->pStart = FUNC_3(VAR_0, VAR_2->pStart, 0);
      VAR_3->pEnd = FUNC_3(VAR_0, VAR_2->pEnd, 0);
      VAR_3->pOwner = VAR_1;
    }
  }
  return VAR_3;
}
