
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {int pEnv; int pWorker; } ;
typedef TYPE_1__ lsm_db ;
struct TYPE_12__ {scalar_t__ aCkpt; int pEnv; } ;
struct TYPE_11__ {struct TYPE_11__* pNext; } ;
typedef TYPE_2__ Level ;
typedef TYPE_3__ CkptBuffer ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*,int*,int*) ;
 int FUNC_3 (TYPE_3__*,int ,int,int*) ;
 TYPE_2__* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,int ,int) ;

int FUNC_6(
  lsm_db *VAR_1,
  int VAR_2,
  void **VAR_3,
  int *VAR_4
){
  Level *VAR_5;
  int VAR_6= 0;
  int VAR_7;
  int VAR_8;
  int VAR_9;
  CkptBuffer VAR_10;
  FUNC_0( VAR_2>0 );

  for(VAR_5=FUNC_4(VAR_1->pWorker); VAR_5; VAR_5=VAR_5->pNext) VAR_6++;

  FUNC_0( VAR_6>VAR_2 );
  VAR_6 -= VAR_2;
  for(VAR_5=FUNC_4(VAR_1->pWorker); VAR_5 && VAR_6>0; VAR_5=VAR_5->pNext) VAR_6--;

  FUNC_5(&VAR_10, 0, sizeof(CkptBuffer));
  VAR_10.pEnv = VAR_1->pEnv;

  FUNC_3(&VAR_10, 0, VAR_2, &VAR_7);
  VAR_9 = 1;
  for(VAR_8=0; VAR_7==VAR_0 && VAR_8<VAR_2; VAR_8++){
    FUNC_2(VAR_5, &VAR_10, &VAR_9, &VAR_7);
    VAR_5 = VAR_5->pNext;
  }
  FUNC_0( VAR_7!=VAR_0 || VAR_5==0 );

  if( VAR_7==VAR_0 ){
    FUNC_1(VAR_10.aCkpt, VAR_9);
    *VAR_3 = (void *)VAR_10.aCkpt;
    *VAR_4 = VAR_9 * sizeof(u32);
  }else{
    *VAR_4 = 0;
    *VAR_3 = 0;
  }

  return VAR_7;
}
