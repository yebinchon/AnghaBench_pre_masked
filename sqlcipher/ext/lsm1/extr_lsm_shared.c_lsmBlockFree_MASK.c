
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* pWorker; } ;
typedef TYPE_1__ lsm_db ;
struct TYPE_8__ {int iId; } ;
typedef TYPE_2__ Snapshot ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int,int ) ;
 int FUNC_2 (TYPE_1__*,int ,char*,int) ;
 int FUNC_3 (TYPE_1__*) ;

int FUNC_4(lsm_db *VAR_1, int VAR_2){
  Snapshot *VAR_3 = VAR_1->pWorker;
  FUNC_0( FUNC_3(VAR_1) );





  return FUNC_1(VAR_1, VAR_2, VAR_3->iId);
}
