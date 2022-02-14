
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ iOldLog; } ;
struct TYPE_14__ {TYPE_7__* pClient; TYPE_1__ treehdr; TYPE_3__* pCsr; TYPE_3__* pCsrCache; } ;
typedef TYPE_2__ lsm_db ;
struct TYPE_16__ {scalar_t__ iLogOff; } ;
struct TYPE_15__ {int flags; scalar_t__* apTreeCsr; struct TYPE_15__* pNext; } ;
typedef TYPE_3__ MultiCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_2__*,int,scalar_t__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_7__*) ;
 TYPE_3__* FUNC_6 (TYPE_2__*,int*) ;

int FUNC_7(
  lsm_db *VAR_3,
  MultiCursor **VAR_4
){
  MultiCursor *VAR_5 = 0;
  int VAR_6 = VAR_2;

  if( VAR_3->pCsrCache ){
    int VAR_7;


    VAR_5 = VAR_3->pCsrCache;
    VAR_3->pCsrCache = VAR_5->pNext;
    VAR_5->pNext = VAR_3->pCsr;
    VAR_3->pCsr = VAR_5;




    VAR_7 = (FUNC_4(VAR_3) && VAR_3->treehdr.iOldLog!=VAR_3->pClient->iLogOff);
    if( !VAR_7 && VAR_5->apTreeCsr[1] ){
      FUNC_2(VAR_5->apTreeCsr[1]);
      VAR_5->apTreeCsr[1] = 0;
    }else if( VAR_7 && !VAR_5->apTreeCsr[1] ){
      VAR_6 = FUNC_3(VAR_3, 1, &VAR_5->apTreeCsr[1]);
    }

    VAR_5->flags = (VAR_1 | VAR_0);

  }else{
    VAR_5 = FUNC_6(VAR_3, &VAR_6);
    if( VAR_6==VAR_2 ) VAR_6 = FUNC_5(VAR_5, VAR_3->pClient);
  }

  if( VAR_6!=VAR_2 ){
    FUNC_1(VAR_5, 0);
    VAR_5 = 0;
  }
  FUNC_0( (VAR_6==VAR_2)==(VAR_5!=0) );
  *VAR_4 = VAR_5;
  return VAR_6;
}
