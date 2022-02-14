
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* pLruFirst; TYPE_1__* pLruLast; } ;
struct TYPE_5__ {struct TYPE_5__* pLruNext; struct TYPE_5__* pLruPrev; } ;
typedef TYPE_1__ Page ;
typedef TYPE_2__ FileSystem ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(FileSystem *VAR_0, Page *VAR_1){
  FUNC_0( VAR_1->pLruNext || VAR_1==VAR_0->pLruLast );
  FUNC_0( VAR_1->pLruPrev || VAR_1==VAR_0->pLruFirst );
  if( VAR_1->pLruNext ){
    VAR_1->pLruNext->pLruPrev = VAR_1->pLruPrev;
  }else{
    VAR_0->pLruLast = VAR_1->pLruPrev;
  }
  if( VAR_1->pLruPrev ){
    VAR_1->pLruPrev->pLruNext = VAR_1->pLruNext;
  }else{
    VAR_0->pLruFirst = VAR_1->pLruNext;
  }
  VAR_1->pLruPrev = 0;
  VAR_1->pLruNext = 0;
}
