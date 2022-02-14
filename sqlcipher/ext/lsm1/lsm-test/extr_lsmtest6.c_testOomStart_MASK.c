
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int iNext; int bEnable; int nFail; int pEnv; } ;
typedef TYPE_1__ OomTest ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(OomTest *VAR_0){
  FUNC_0(VAR_0, 0, sizeof(OomTest));
  VAR_0->iNext = 1;
  VAR_0->bEnable = 1;
  VAR_0->nFail = 1;
  VAR_0->pEnv = FUNC_1();
}
