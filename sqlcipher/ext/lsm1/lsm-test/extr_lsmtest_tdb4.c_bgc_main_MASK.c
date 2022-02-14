
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int bt_db ;
struct TYPE_9__ {scalar_t__ p; } ;
struct TYPE_8__ {scalar_t__ p; } ;
struct TYPE_10__ {scalar_t__ nRef; int nLogsize; scalar_t__ bDoWork; int ckpter_mutex; int ckpter_cond; TYPE_2__ spec; TYPE_1__ file; } ;
typedef TYPE_3__ bt_ckpter ;
struct TYPE_11__ {int nFrameBuffer; } ;
typedef TYPE_4__ bt_checkpoint ;
typedef int TestDb ;
struct TYPE_12__ {int * pBt; } ;
typedef TYPE_5__ BtDb ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_4__*,int ,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ,void*) ;
 int FUNC_9 (TYPE_5__*,char*,int*) ;
 int FUNC_10 (char*,char*,int ,int **) ;

__attribute__((used)) static void *FUNC_11(void *VAR_3){
  BtDb *VAR_4 = 0;
  int VAR_5;
  int VAR_6;
  bt_ckpter *VAR_7 = (bt_ckpter*)VAR_3;

  VAR_5 = FUNC_10("", (char*)VAR_7->file.p, 0, (TestDb**)&VAR_4);
  FUNC_0( VAR_5==VAR_2 );
  VAR_5 = FUNC_9(VAR_4, (char*)VAR_7->spec.p, &VAR_6);

  while( VAR_7->nRef>0 ){
    bt_db *VAR_8 = VAR_4->pBt;
    int VAR_9 = 0;

    FUNC_6(VAR_8, 1);
    FUNC_7(VAR_8, 0);
    FUNC_8(VAR_8, VAR_1, (void*)&VAR_9);

    if( VAR_9>=VAR_7->nLogsize ){
      int VAR_10;
      bt_checkpoint VAR_11;
      FUNC_2(&VAR_11, 0, sizeof(bt_checkpoint));
      VAR_11.nFrameBuffer = VAR_9/2;
      VAR_10 = FUNC_8(VAR_8, VAR_0, (void*)&VAR_11);
      FUNC_0( VAR_10==VAR_2 );
      FUNC_8(VAR_8, VAR_1, (void*)&VAR_9);
    }




    FUNC_4(&VAR_7->ckpter_mutex);
    if( VAR_7->bDoWork==0 ){
      FUNC_3(&VAR_7->ckpter_cond, &VAR_7->ckpter_mutex);
    }
    VAR_7->bDoWork = 0;
    FUNC_5(&VAR_7->ckpter_mutex);
  }

  if( VAR_4 ) FUNC_1((TestDb*)VAR_4);
  return 0;
}
