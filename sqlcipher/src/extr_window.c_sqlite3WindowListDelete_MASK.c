
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_4__ {struct TYPE_4__* pNextWin; } ;
typedef TYPE_1__ Window ;


 int FUNC_0 (int *,TYPE_1__*) ;

void FUNC_1(sqlite3 *VAR_0, Window *VAR_1){
  while( VAR_1 ){
    Window *VAR_2 = VAR_1->pNextWin;
    FUNC_0(VAR_0, VAR_1);
    VAR_1 = VAR_2;
  }
}
