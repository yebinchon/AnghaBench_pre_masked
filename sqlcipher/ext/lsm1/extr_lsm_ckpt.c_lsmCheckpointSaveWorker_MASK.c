
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int pEnv; TYPE_3__* pShmhdr; TYPE_2__* pWorker; } ;
typedef TYPE_1__ lsm_db ;
struct TYPE_9__ {int aSnap1; int aSnap2; } ;
struct TYPE_8__ {int iId; } ;
typedef TYPE_2__ Snapshot ;
typedef TYPE_3__ ShmHeader ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int,int ,int,void**,int*) ;
 int FUNC_3 (int ,void*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,void*,int) ;

int FUNC_6(lsm_db *VAR_2, int VAR_3){
  Snapshot *VAR_4 = VAR_2->pWorker;
  ShmHeader *VAR_5 = VAR_2->pShmhdr;
  void *VAR_6 = 0;
  int VAR_7 = 0;
  int VAR_8;

  VAR_4->iId++;
  VAR_8 = FUNC_2(VAR_2, VAR_3, VAR_4->iId, 1, &VAR_6, &VAR_7);
  if( VAR_8!=VAR_1 ) return VAR_8;
  FUNC_0( FUNC_1((u32 *)VAR_6) );

  FUNC_0( VAR_7<=VAR_0 );
  FUNC_5(VAR_5->aSnap2, VAR_6, VAR_7);
  FUNC_4(VAR_2);
  FUNC_5(VAR_5->aSnap1, VAR_6, VAR_7);
  FUNC_3(VAR_2->pEnv, VAR_6);


  return VAR_1;
}
