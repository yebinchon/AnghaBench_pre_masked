
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int iTransId; } ;
struct TYPE_18__ {scalar_t__ iOldLog; TYPE_1__ root; } ;
struct TYPE_17__ {scalar_t__ nTransOpen; scalar_t__ bDiscardOld; scalar_t__ bReadonly; scalar_t__ iReader; scalar_t__ pCsr; TYPE_2__* pClient; TYPE_4__ treehdr; TYPE_5__* pShmhdr; } ;
typedef TYPE_3__ lsm_db ;
typedef TYPE_4__ TreeHeader ;
struct TYPE_19__ {int bWriter; int hdr1; } ;
struct TYPE_16__ {scalar_t__ iLogOff; } ;
typedef TYPE_5__ ShmHeader ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 scalar_t__ FUNC_8 (int *,TYPE_4__*,int) ;

int FUNC_9(lsm_db *VAR_5){
  int VAR_6 = VAR_4;
  ShmHeader *VAR_7 = VAR_5->pShmhdr;

  FUNC_0( VAR_5->nTransOpen==0 );
  FUNC_0( VAR_5->bDiscardOld==0 );
  FUNC_0( VAR_5->bReadonly==0 );


  if( VAR_5->iReader<0 ){
    VAR_6 = FUNC_1(VAR_5);
  }


  if( VAR_6==VAR_4 ){
    VAR_6 = FUNC_4(VAR_5, VAR_3, VAR_1, 0);
  }


  if( VAR_6==VAR_4 && VAR_7->bWriter ){
    VAR_6 = FUNC_7(VAR_5);
    if( VAR_6==VAR_4 ) VAR_7->bWriter = 0;
  }



  if( VAR_6==VAR_4 && FUNC_8(&VAR_7->hdr1, &VAR_5->treehdr, sizeof(TreeHeader)) ){
    VAR_6 = VAR_0;
  }

  if( VAR_6==VAR_4 ){
    VAR_6 = FUNC_3(VAR_5);
  }




  if( VAR_6==VAR_4 ){
    TreeHeader *VAR_8 = &VAR_5->treehdr;
    VAR_7->bWriter = 1;
    VAR_8->root.iTransId++;
    if( FUNC_6(VAR_5) && VAR_8->iOldLog==VAR_5->pClient->iLogOff ){
      FUNC_5(VAR_5);
      VAR_5->bDiscardOld = 1;
    }
  }else{
    FUNC_4(VAR_5, VAR_3, VAR_2, 0);
    if( VAR_5->pCsr==0 ) FUNC_2(VAR_5);
  }
  return VAR_6;
}
