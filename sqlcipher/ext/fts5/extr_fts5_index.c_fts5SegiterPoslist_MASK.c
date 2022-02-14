
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int sCtx ;
struct TYPE_19__ {size_t n; TYPE_2__* p; } ;
struct TYPE_18__ {TYPE_1__* pConfig; int rc; } ;
struct TYPE_17__ {size_t nPos; } ;
struct TYPE_16__ {int eState; int * pColset; TYPE_6__* pBuf; } ;
struct TYPE_15__ {int * pColset; TYPE_6__* pBuf; } ;
struct TYPE_14__ {scalar_t__ eDetail; } ;
typedef TYPE_2__ PoslistOffsetsCtx ;
typedef TYPE_3__ PoslistCallbackCtx ;
typedef TYPE_4__ Fts5SegIter ;
typedef TYPE_5__ Fts5Index ;
typedef int Fts5Colset ;
typedef TYPE_6__ Fts5Buffer ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,TYPE_6__*,int) ;
 int FUNC_2 (TYPE_5__*,TYPE_4__*,void*,int ) ;
 int FUNC_3 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_5(
  Fts5Index *VAR_5,
  Fts5SegIter *VAR_6,
  Fts5Colset *VAR_7,
  Fts5Buffer *VAR_8
){
  if( 0==FUNC_1(&VAR_5->rc, VAR_8, VAR_6->nPos+VAR_0) ){
    FUNC_4(&VAR_8->p[VAR_8->n+VAR_6->nPos], 0, VAR_0);
    if( VAR_7==0 ){
      FUNC_2(VAR_5, VAR_6, (void*)VAR_8, VAR_2);
    }else{
      if( VAR_5->pConfig->eDetail==VAR_1 ){
        PoslistCallbackCtx VAR_9;
        VAR_9.pBuf = VAR_8;
        VAR_9.pColset = VAR_7;
        VAR_9.eState = FUNC_3(VAR_7, 0);
        FUNC_0( VAR_9.eState==0 || VAR_9.eState==1 );
        FUNC_2(VAR_5, VAR_6, (void*)&VAR_9, VAR_3);
      }else{
        PoslistOffsetsCtx VAR_10;
        FUNC_4(&VAR_10, 0, sizeof(VAR_10));
        VAR_10.pBuf = VAR_8;
        VAR_10.pColset = VAR_7;
        FUNC_2(VAR_5, VAR_6, (void*)&VAR_10, VAR_4);
      }
    }
  }
}
