
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ id; int height; scalar_t__ imbalance; struct TYPE_7__* pAfter; struct TYPE_7__* pBefore; struct TYPE_7__* pUp; } ;
typedef TYPE_1__ closure_avl ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static closure_avl *FUNC_1(
  closure_avl **VAR_0,
  closure_avl *VAR_1
){
  closure_avl *VAR_2 = *VAR_0;
  if( VAR_2==0 ){
    VAR_2 = VAR_1;
    VAR_1->pUp = 0;
  }else{
    while( VAR_2 ){
      if( VAR_1->id<VAR_2->id ){
        if( VAR_2->pBefore ){
          VAR_2 = VAR_2->pBefore;
        }else{
          VAR_2->pBefore = VAR_1;
          VAR_1->pUp = VAR_2;
          break;
        }
      }else if( VAR_1->id>VAR_2->id ){
        if( VAR_2->pAfter ){
          VAR_2 = VAR_2->pAfter;
        }else{
          VAR_2->pAfter = VAR_1;
          VAR_1->pUp = VAR_2;
          break;
        }
      }else{
        return VAR_2;
      }
    }
  }
  VAR_1->pBefore = 0;
  VAR_1->pAfter = 0;
  VAR_1->height = 1;
  VAR_1->imbalance = 0;
  *VAR_0 = FUNC_0(VAR_2);
  return 0;
}
