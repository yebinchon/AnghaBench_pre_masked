
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int nLang; TYPE_1__* a; } ;
struct TYPE_6__ {struct TYPE_6__* pNext; struct TYPE_6__* pCost; } ;
typedef TYPE_1__ EditDist3Cost ;
typedef TYPE_2__ EditDist3Config ;


 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(EditDist3Config *VAR_0){
  int VAR_1;
  if( VAR_0==0 ) return;
  for(VAR_1=0; VAR_1<VAR_0->nLang; VAR_1++){
    EditDist3Cost *VAR_2, *VAR_3;
    VAR_2 = VAR_0->a[VAR_1].pCost;
    while( VAR_2 ){
      VAR_3 = VAR_2->pNext;
      FUNC_1(VAR_2);
      VAR_2 = VAR_3;
    }
  }
  FUNC_1(VAR_0->a);
  FUNC_0(VAR_0, 0, sizeof(*VAR_0));
}
