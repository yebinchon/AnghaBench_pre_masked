
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ nMaxFreelist; TYPE_3__* pWorker; } ;
typedef TYPE_2__ lsm_db ;
struct TYPE_7__ {scalar_t__ nEntry; } ;
struct TYPE_9__ {TYPE_1__ freelist; } ;
typedef TYPE_3__ Snapshot ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*) ;

int FUNC_2(lsm_db *VAR_1, int VAR_2){
  Snapshot *VAR_3 = VAR_1->pWorker;
  if( VAR_3->freelist.nEntry>VAR_1->nMaxFreelist ){
    int VAR_4 = FUNC_1(VAR_1);
    if( VAR_4!=VAR_0 ) return VAR_4;
  }
  return FUNC_0(VAR_1, VAR_2);
}
