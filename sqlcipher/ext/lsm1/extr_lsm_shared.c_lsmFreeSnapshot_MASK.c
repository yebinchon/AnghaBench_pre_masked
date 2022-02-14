
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int lsm_env ;
struct TYPE_7__ {TYPE_3__* a; } ;
struct TYPE_6__ {TYPE_3__* aEntry; } ;
struct TYPE_8__ {TYPE_2__ redirect; TYPE_1__ freelist; int pLevel; } ;
typedef TYPE_3__ Snapshot ;


 int FUNC_0 (int *,TYPE_3__*) ;
 int FUNC_1 (int *,int ) ;

void FUNC_2(lsm_env *VAR_0, Snapshot *VAR_1){
  if( VAR_1 ){
    FUNC_1(VAR_0, VAR_1->pLevel);
    FUNC_0(VAR_0, VAR_1->freelist.aEntry);
    FUNC_0(VAR_0, VAR_1->redirect.a);
    FUNC_0(VAR_0, VAR_1);
  }
}
