
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int height; scalar_t__ imbalance; struct TYPE_7__* pAfter; struct TYPE_7__* pBefore; struct TYPE_7__* pUp; int zKey; } ;
typedef TYPE_1__ amatch_avl ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static amatch_avl *FUNC_2(amatch_avl **VAR_0, amatch_avl *VAR_1){
  int VAR_2;
  amatch_avl *VAR_3 = *VAR_0;
  if( VAR_3==0 ){
    VAR_3 = VAR_1;
    VAR_1->pUp = 0;
  }else{
    while( VAR_3 ){
      VAR_2 = FUNC_1(VAR_1->zKey, VAR_3->zKey);
      if( VAR_2<0 ){
        if( VAR_3->pBefore ){
          VAR_3 = VAR_3->pBefore;
        }else{
          VAR_3->pBefore = VAR_1;
          VAR_1->pUp = VAR_3;
          break;
        }
      }else if( VAR_2>0 ){
        if( VAR_3->pAfter ){
          VAR_3 = VAR_3->pAfter;
        }else{
          VAR_3->pAfter = VAR_1;
          VAR_1->pUp = VAR_3;
          break;
        }
      }else{
        return VAR_3;
      }
    }
  }
  VAR_1->pBefore = 0;
  VAR_1->pAfter = 0;
  VAR_1->height = 1;
  VAR_1->imbalance = 0;
  *VAR_0 = FUNC_0(VAR_3);


  return 0;
}
