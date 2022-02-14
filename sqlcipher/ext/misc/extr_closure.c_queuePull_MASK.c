
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ pLast; TYPE_2__* pFirst; } ;
typedef TYPE_1__ closure_queue ;
struct TYPE_6__ {struct TYPE_6__* pList; } ;
typedef TYPE_2__ closure_avl ;



__attribute__((used)) static closure_avl *FUNC_0(closure_queue *VAR_0){
  closure_avl *VAR_1 = VAR_0->pFirst;
  if( VAR_1 ){
    VAR_0->pFirst = VAR_1->pList;
    if( VAR_0->pFirst==0 ) VAR_0->pLast = 0;
  }
  return VAR_1;
}
