
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {TYPE_7__* pWorker; int pDatabase; TYPE_2__* pShmhdr; } ;
typedef TYPE_1__ lsm_db ;
struct TYPE_11__ {int iCmpId; int pDatabase; } ;
struct TYPE_10__ {int* aSnap1; int* aSnap2; } ;
typedef TYPE_2__ ShmHeader ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int,int*,TYPE_7__**) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_6 (int*,int*,int) ;
 int FUNC_7 (int*,int*,int) ;

int FUNC_8(lsm_db *VAR_6){
  int VAR_7;
  ShmHeader *VAR_8 = VAR_6->pShmhdr;
  int VAR_9;
  int VAR_10;


  FUNC_0(
      FUNC_5(VAR_6, VAR_3, VAR_2)
   || FUNC_5(VAR_6, VAR_1, VAR_2)
  );


  VAR_9 = VAR_8->aSnap1[VAR_0];
  VAR_10 = VAR_8->aSnap2[VAR_0];
  if( VAR_9!=VAR_10 || FUNC_6(VAR_8->aSnap1, VAR_8->aSnap2, VAR_10*sizeof(u32)) ){
    if( FUNC_1(VAR_8->aSnap1) ){
      FUNC_7(VAR_8->aSnap2, VAR_8->aSnap1, sizeof(u32)*VAR_9);
    }else if( FUNC_1(VAR_8->aSnap2) ){
      FUNC_7(VAR_8->aSnap1, VAR_8->aSnap2, sizeof(u32)*VAR_10);
    }else{
      return VAR_5;
    }
  }

  VAR_7 = FUNC_3(VAR_6, 1, VAR_8->aSnap1, &VAR_6->pWorker);
  if( VAR_6->pWorker ) VAR_6->pWorker->pDatabase = VAR_6->pDatabase;

  if( VAR_7==VAR_4 ){
    VAR_7 = FUNC_2(VAR_6, VAR_6->pWorker->iCmpId);
  }




  return VAR_7;
}
