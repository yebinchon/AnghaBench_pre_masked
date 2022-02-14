
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_6__ {struct TYPE_6__* pNextWin; } ;
typedef TYPE_1__ Window ;


 TYPE_1__* FUNC_0 (int *,int ,TYPE_1__*) ;

Window *FUNC_1(sqlite3 *VAR_0, Window *VAR_1){
  Window *VAR_2;
  Window *VAR_3 = 0;
  Window **VAR_4 = &VAR_3;

  for(VAR_2=VAR_1; VAR_2; VAR_2=VAR_2->pNextWin){
    *VAR_4 = FUNC_0(VAR_0, 0, VAR_2);
    if( *VAR_4==0 ) break;
    VAR_4 = &((*VAR_4)->pNextWin);
  }

  return VAR_3;
}
