
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lsm_db ;
struct TYPE_2__ {int pWorkCtx; int (* xWork ) (int *,int ) ;} ;
typedef TYPE_1__ LsmDb ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(lsm_db *VAR_0, void *VAR_1){
  LsmDb *VAR_2 = (LsmDb *)VAR_1;
  if( VAR_2->xWork ) VAR_2->xWork(VAR_0, VAR_2->pWorkCtx);
}
