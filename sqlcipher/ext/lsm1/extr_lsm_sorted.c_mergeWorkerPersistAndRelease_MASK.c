
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ pPage; TYPE_1__* aSave; } ;
struct TYPE_4__ {scalar_t__ bStore; int iPgno; } ;
typedef TYPE_2__ MergeWorker ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(MergeWorker *VAR_0){
  int VAR_1;
  int VAR_2;

  FUNC_0( VAR_0->pPage || (VAR_0->aSave[0].bStore==0 && VAR_0->aSave[1].bStore==0) );


  VAR_1 = FUNC_2(VAR_0->pPage);


  for(VAR_2=0; VAR_2<2; VAR_2++){
    if( VAR_0->aSave[VAR_2].bStore ){
      VAR_0->aSave[VAR_2].iPgno = FUNC_1(VAR_0->pPage);
      VAR_0->aSave[VAR_2].bStore = 0;
    }
  }


  FUNC_3(VAR_0->pPage);
  VAR_0->pPage = 0;
  return VAR_1;
}
