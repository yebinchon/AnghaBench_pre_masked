
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {struct TYPE_9__* pOuter; } ;
typedef TYPE_1__ With ;
struct TYPE_10__ {TYPE_4__* pParse; } ;
typedef TYPE_2__ Walker ;
struct TYPE_13__ {TYPE_1__* pWith; } ;
struct TYPE_12__ {TYPE_1__* pWith; } ;
struct TYPE_11__ {scalar_t__ pPrior; } ;
typedef TYPE_3__ Select ;
typedef TYPE_4__ Parse ;


 int FUNC_0 (int) ;
 TYPE_7__* FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_2(Walker *VAR_0, Select *VAR_1){
  Parse *VAR_2 = VAR_0->pParse;
  if( VAR_2->pWith && VAR_1->pPrior==0 ){
    With *VAR_3 = FUNC_1(VAR_1)->pWith;
    if( VAR_3!=0 ){
      FUNC_0( VAR_2->pWith==VAR_3 );
      VAR_2->pWith = VAR_3->pOuter;
    }
  }
}
