
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int Trigger ;
struct TYPE_10__ {scalar_t__* aAction; int ** apTrigger; } ;
struct TYPE_9__ {TYPE_1__* pTriggerPrg; } ;
struct TYPE_8__ {int * pTrigger; } ;
typedef TYPE_2__ Parse ;
typedef TYPE_3__ FKey ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_1(Parse *VAR_1, FKey *VAR_2){
  Parse *VAR_3 = FUNC_0(VAR_1);
  if( VAR_3->pTriggerPrg ){
    Trigger *VAR_4 = VAR_3->pTriggerPrg->pTrigger;
    if( (VAR_4==VAR_2->apTrigger[0] && VAR_2->aAction[0]==VAR_0)
     || (VAR_4==VAR_2->apTrigger[1] && VAR_2->aAction[1]==VAR_0)
    ){
      return 1;
    }
  }
  return 0;
}
