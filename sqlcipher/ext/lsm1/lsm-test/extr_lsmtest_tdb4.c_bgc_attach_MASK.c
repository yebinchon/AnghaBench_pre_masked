
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


typedef int sqlite4_buffer ;
struct TYPE_14__ {int xLogsize; void* pCtx; } ;
typedef TYPE_1__ bt_logsizecb ;
struct TYPE_18__ {int n; scalar_t__ p; } ;
struct TYPE_15__ {TYPE_6__ output; scalar_t__ pgno; int eType; } ;
typedef TYPE_2__ bt_info ;
struct TYPE_19__ {int n; int p; } ;
struct TYPE_16__ {int nLogsize; int nRef; int ckpter_thread; int ckpter_mutex; int ckpter_cond; TYPE_6__ spec; struct TYPE_16__* pNext; TYPE_9__ file; } ;
typedef TYPE_3__ bt_ckpter ;
struct TYPE_17__ {int pEnv; TYPE_3__* pCkpter; int pBt; } ;
struct TYPE_13__ {TYPE_3__* pCkpter; } ;
typedef TYPE_4__ BtDb ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_11__ VAR_7 ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (TYPE_9__*,TYPE_6__*,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int ,void*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,int ,void*) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (TYPE_6__*,int ) ;
 int FUNC_9 (TYPE_6__*,char const*,scalar_t__) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (char const*) ;
 TYPE_3__* FUNC_14 (int) ;

__attribute__((used)) static int FUNC_15(BtDb *VAR_8, const char *VAR_9){
  int VAR_10;
  int VAR_11;
  bt_info VAR_12;
  bt_ckpter *VAR_13;


  VAR_12.eType = VAR_2;
  VAR_12.pgno = 0;
  FUNC_8(&VAR_12.output, 0);
  VAR_10 = FUNC_6(VAR_8->pBt, VAR_0, (void*)&VAR_12);
  if( VAR_10!=VAR_4 ) return VAR_10;

  FUNC_11(FUNC_10(VAR_8->pEnv, VAR_3));


  VAR_11 = VAR_12.output.n;
  for(VAR_13=VAR_7.pCkpter; VAR_13; VAR_13=VAR_13->pNext){
    if( VAR_11==VAR_13->file.n && 0==FUNC_1(VAR_12.output.p, VAR_13->file.p, VAR_11) ){
      break;
    }
  }


  if( VAR_13==0 ){
    bt_logsizecb VAR_14;

    VAR_13 = FUNC_14(sizeof(bt_ckpter));
    FUNC_2(&VAR_13->file, &VAR_12.output, sizeof(sqlite4_buffer));
    VAR_12.output.p = 0;
    VAR_13->pNext = VAR_7.pCkpter;
    VAR_13->nLogsize = 1000;
    VAR_7.pCkpter = VAR_13;
    VAR_13->nRef = 1;

    FUNC_8(&VAR_13->spec, 0);
    VAR_10 = FUNC_9(&VAR_13->spec, VAR_9, FUNC_13(VAR_9)+1);
    FUNC_0( VAR_10==VAR_4 );


    if( VAR_10==0 ) VAR_10 = FUNC_3(&VAR_13->ckpter_cond, 0);
    if( VAR_10==0 ) VAR_10 = FUNC_5(&VAR_13->ckpter_mutex, 0);
    if( VAR_10==0 ){
      VAR_10 = FUNC_4(&VAR_13->ckpter_thread, 0, VAR_6, (void*)VAR_13);
    }
    FUNC_0( VAR_10==0 );


    VAR_14.pCtx = (void*)VAR_13;
    VAR_14.xLogsize = VAR_5;
    FUNC_6(VAR_8->pBt, VAR_1, (void*)&VAR_14);
  }else{
    VAR_13->nRef++;
  }



  if( VAR_13 ){
    VAR_8->pCkpter = VAR_13;
  }

  FUNC_12(FUNC_10(VAR_8->pEnv, VAR_3));
  FUNC_7(&VAR_12.output);
  return VAR_10;
}
