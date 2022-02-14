
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* pWaiting; } ;
struct TYPE_6__ {int nRef; struct TYPE_6__* pWaitingNext; } ;
typedef TYPE_1__ Page ;
typedef TYPE_2__ FileSystem ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(FileSystem *VAR_1, int *VAR_2){
  int VAR_3 = *VAR_2;
  Page *VAR_4;

  VAR_4 = VAR_1->pWaiting;
  VAR_1->pWaiting = 0;

  while( VAR_4 ){
    Page *VAR_5 = VAR_4->pWaitingNext;
    if( VAR_3==VAR_0 ) VAR_3 = FUNC_1(VAR_4);
    FUNC_0( VAR_4->nRef==1 );
    FUNC_2(VAR_4);
    VAR_4 = VAR_5;
  }
  *VAR_2 = VAR_3;
}
