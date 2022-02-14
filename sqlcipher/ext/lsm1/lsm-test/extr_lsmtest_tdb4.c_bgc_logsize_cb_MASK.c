
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nLogsize; int bDoWork; int ckpter_mutex; int ckpter_cond; } ;
typedef TYPE_1__ bt_ckpter ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, int VAR_1){
  bt_ckpter *VAR_2 = (bt_ckpter*)VAR_0;
  if( VAR_1>=VAR_2->nLogsize ){
    FUNC_1(&VAR_2->ckpter_mutex);
    VAR_2->bDoWork = 1;
    FUNC_0(&VAR_2->ckpter_cond);
    FUNC_2(&VAR_2->ckpter_mutex);
  }
}
