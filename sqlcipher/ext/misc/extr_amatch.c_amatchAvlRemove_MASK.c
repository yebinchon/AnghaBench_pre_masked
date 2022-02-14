
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {struct TYPE_11__* pAfter; struct TYPE_11__* pBefore; struct TYPE_11__* pUp; } ;
typedef TYPE_1__ amatch_avl ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 TYPE_1__** FUNC_2 (TYPE_1__*,TYPE_1__**) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(amatch_avl **VAR_0, amatch_avl *VAR_1){
  amatch_avl **VAR_2;
  amatch_avl *VAR_3 = 0;

  VAR_2 = FUNC_2(VAR_1, VAR_0);
  if( VAR_1->pBefore==0 && VAR_1->pAfter==0 ){
    *VAR_2 = 0;
    VAR_3 = VAR_1->pUp;
  }else if( VAR_1->pBefore && VAR_1->pAfter ){
    amatch_avl *VAR_4, *VAR_5;
    VAR_4 = FUNC_1(VAR_1->pAfter);
    *FUNC_2(VAR_4, 0) = VAR_4->pAfter;
    if( VAR_4->pAfter ) VAR_4->pAfter->pUp = VAR_4->pUp;
    VAR_3 = VAR_4->pUp;
    VAR_4->pAfter = VAR_1->pAfter;
    if( VAR_4->pAfter ){
      VAR_4->pAfter->pUp = VAR_4;
    }else{
      FUNC_3( VAR_3==VAR_1 );
      VAR_3 = VAR_4;
    }
    VAR_4->pBefore = VAR_5 = VAR_1->pBefore;
    if( VAR_5 ) VAR_5->pUp = VAR_4;
    VAR_4->pUp = VAR_1->pUp;
    *VAR_2 = VAR_4;
  }else if( VAR_1->pBefore==0 ){
    *VAR_2 = VAR_3 = VAR_1->pAfter;
    VAR_3->pUp = VAR_1->pUp;
  }else if( VAR_1->pAfter==0 ){
    *VAR_2 = VAR_3 = VAR_1->pBefore;
    VAR_3->pUp = VAR_1->pUp;
  }
  *VAR_0 = FUNC_0(VAR_3);
  VAR_1->pUp = 0;
  VAR_1->pBefore = 0;
  VAR_1->pAfter = 0;


}
