
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ nRef; int bDoWork; int spec; int file; int ckpter_mutex; int ckpter_cond; int ckpter_thread; struct TYPE_6__* pNext; } ;
typedef TYPE_1__ bt_ckpter ;
struct TYPE_8__ {TYPE_1__* pCkpter; } ;
struct TYPE_7__ {TYPE_1__* pCkpter; int pEnv; } ;
typedef TYPE_2__ BtDb ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,void**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_11(BtDb *VAR_3){
  int VAR_4 = VAR_1;
  bt_ckpter *VAR_5 = VAR_3->pCkpter;
  if( VAR_5 ){
    int VAR_6 = 0;

    FUNC_8(FUNC_7(VAR_3->pEnv,VAR_0));
    VAR_5->nRef--;
    if( VAR_5->nRef==0 ){
      bt_ckpter **VAR_7;

      *VAR_7 = VAR_5->pNext;
      for(VAR_7=&VAR_2.pCkpter; *VAR_7!=VAR_5; VAR_7=&((*VAR_7)->pNext));
      VAR_6 = 1;
    }
    FUNC_9(FUNC_7(VAR_3->pEnv,VAR_0));

    if( VAR_6 ){
      void *VAR_8;


      FUNC_4(&VAR_5->ckpter_mutex);
      VAR_5->bDoWork = 1;
      FUNC_1(&VAR_5->ckpter_cond);
      FUNC_5(&VAR_5->ckpter_mutex);


      FUNC_2(VAR_5->ckpter_thread, &VAR_8);
      FUNC_0(&VAR_5->ckpter_cond);
      FUNC_3(&VAR_5->ckpter_mutex);

      FUNC_6(&VAR_5->file);
      FUNC_6(&VAR_5->spec);
      FUNC_10(VAR_5);
    }

    VAR_3->pCkpter = 0;
  }
  return VAR_4;
}
