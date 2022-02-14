
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct Cte {TYPE_1__* zName; int pSelect; int pCols; } ;
typedef int sqlite3 ;
struct TYPE_4__ {int nCte; struct Cte* a; } ;
typedef TYPE_1__ With ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;

void FUNC_3(sqlite3 *VAR_0, With *VAR_1){
  if( VAR_1 ){
    int VAR_2;
    for(VAR_2=0; VAR_2<VAR_1->nCte; VAR_2++){
      struct Cte *VAR_3 = &VAR_1->a[VAR_2];
      FUNC_1(VAR_0, VAR_3->pCols);
      FUNC_2(VAR_0, VAR_3->pSelect);
      FUNC_0(VAR_0, VAR_3->zName);
    }
    FUNC_0(VAR_0, VAR_1);
  }
}
