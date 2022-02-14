
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* pDb; int blob; } ;
typedef TYPE_1__ TreeCursor ;
struct TYPE_6__ {int pEnv; } ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,int *) ;

void FUNC_2(TreeCursor *VAR_0){
  if( VAR_0 ){
    FUNC_1(VAR_0->pDb, &VAR_0->blob);
    FUNC_0(VAR_0->pDb->pEnv, VAR_0);
  }
}
