
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {TYPE_2__* pVtab; } ;
typedef TYPE_3__ sqlite3_vtab_cursor ;
struct TYPE_14__ {int (* xClose ) (TYPE_3__*) ;} ;
typedef TYPE_4__ sqlite3_module ;
struct TYPE_11__ {TYPE_3__* pVCur; int pCursor; } ;
struct TYPE_15__ {scalar_t__ pBtx; int eCurType; TYPE_1__ uc; int isEphemeral; } ;
typedef TYPE_5__ VdbeCursor ;
struct TYPE_16__ {int db; } ;
typedef TYPE_6__ Vdbe ;
struct TYPE_12__ {int nRef; TYPE_4__* pModule; } ;





 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_5__*) ;
 int FUNC_4 (TYPE_3__*) ;

void FUNC_5(Vdbe *VAR_0, VdbeCursor *VAR_1){
  if( VAR_1==0 ){
    return;
  }
  FUNC_0( VAR_1->pBtx==0 || VAR_1->eCurType==130 );
  switch( VAR_1->eCurType ){
    case 129: {
      FUNC_3(VAR_0->db, VAR_1);
      break;
    }
    case 130: {
      if( VAR_1->isEphemeral ){
        if( VAR_1->pBtx ) FUNC_1(VAR_1->pBtx);


      }else{
        FUNC_0( VAR_1->uc.pCursor!=0 );
        FUNC_2(VAR_1->uc.pCursor);
      }
      break;
    }

    case 128: {
      sqlite3_vtab_cursor *VAR_2 = VAR_1->uc.pVCur;
      const sqlite3_module *VAR_3 = VAR_2->pVtab->pModule;
      FUNC_0( VAR_2->pVtab->nRef>0 );
      VAR_2->pVtab->nRef--;
      VAR_3->xClose(VAR_2);
      break;
    }

  }
}
