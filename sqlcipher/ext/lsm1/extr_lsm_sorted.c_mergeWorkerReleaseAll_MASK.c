
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int nHier; scalar_t__* apHier; } ;
struct TYPE_7__ {TYPE_2__ hier; TYPE_1__* pDb; scalar_t__ pPage; } ;
struct TYPE_5__ {int pEnv; } ;
typedef TYPE_3__ MergeWorker ;


 int FUNC_0 (int ,scalar_t__*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(MergeWorker *VAR_0){
  int VAR_1;
  FUNC_1(VAR_0->pPage);
  VAR_0->pPage = 0;

  for(VAR_1=0; VAR_1<VAR_0->hier.nHier; VAR_1++){
    FUNC_1(VAR_0->hier.apHier[VAR_1]);
    VAR_0->hier.apHier[VAR_1] = 0;
  }
  FUNC_0(VAR_0->pDb->pEnv, VAR_0->hier.apHier);
  VAR_0->hier.apHier = 0;
  VAR_0->hier.nHier = 0;
}
