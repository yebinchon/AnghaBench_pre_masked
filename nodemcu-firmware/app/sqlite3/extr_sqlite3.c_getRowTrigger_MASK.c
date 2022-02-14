
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int orconf; struct TYPE_13__* pNext; TYPE_2__* pTrigger; } ;
typedef TYPE_1__ TriggerPrg ;
struct TYPE_14__ {scalar_t__ zName; } ;
typedef TYPE_2__ Trigger ;
typedef int Table ;
struct TYPE_15__ {TYPE_1__* pTriggerPrg; } ;
typedef TYPE_3__ Parse ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (TYPE_3__*,TYPE_2__*,int *,int) ;
 TYPE_3__* FUNC_2 (TYPE_3__*) ;
 int * FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static TriggerPrg *FUNC_4(
  Parse *VAR_0,
  Trigger *VAR_1,
  Table *VAR_2,
  int VAR_3
){
  Parse *VAR_4 = FUNC_2(VAR_0);
  TriggerPrg *VAR_5;

  FUNC_0( VAR_1->zName==0 || VAR_2==FUNC_3(VAR_1) );





  for(VAR_5=VAR_4->pTriggerPrg;
      VAR_5 && (VAR_5->pTrigger!=VAR_1 || VAR_5->orconf!=VAR_3);
      VAR_5=VAR_5->pNext
  );


  if( !VAR_5 ){
    VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
  }

  return VAR_5;
}
