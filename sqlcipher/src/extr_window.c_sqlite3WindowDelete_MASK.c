
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_4__ {struct TYPE_4__* zBase; struct TYPE_4__* zName; int pStart; int pEnd; int pOrderBy; int pPartition; int pFilter; } ;
typedef TYPE_1__ Window ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;

void FUNC_3(sqlite3 *VAR_0, Window *VAR_1){
  if( VAR_1 ){
    FUNC_1(VAR_0, VAR_1->pFilter);
    FUNC_2(VAR_0, VAR_1->pPartition);
    FUNC_2(VAR_0, VAR_1->pOrderBy);
    FUNC_1(VAR_0, VAR_1->pEnd);
    FUNC_1(VAR_0, VAR_1->pStart);
    FUNC_0(VAR_0, VAR_1->zName);
    FUNC_0(VAR_0, VAR_1->zBase);
    FUNC_0(VAR_0, VAR_1);
  }
}
