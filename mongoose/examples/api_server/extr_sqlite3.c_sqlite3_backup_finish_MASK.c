
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int rc; TYPE_2__* pDestDb; TYPE_8__* pSrc; int pDest; struct TYPE_11__* pNext; scalar_t__ isAttached; TYPE_2__* pSrcDb; } ;
typedef TYPE_1__ sqlite3_backup ;
struct TYPE_12__ {int mutex; } ;
typedef TYPE_2__ sqlite3 ;
struct TYPE_13__ {int nBackup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_8__*) ;
 int FUNC_1 (TYPE_8__*) ;
 int FUNC_2 (TYPE_8__*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_2__*,int,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_1__** FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ) ;

int FUNC_9(sqlite3_backup *VAR_2){
  sqlite3_backup **VAR_3;
  sqlite3 *VAR_4;
  int VAR_5;


  if( VAR_2==0 ) return VAR_1;
  VAR_4 = VAR_2->pSrcDb;
  FUNC_8(VAR_4->mutex);
  FUNC_0(VAR_2->pSrc);
  if( VAR_2->pDestDb ){
    FUNC_8(VAR_2->pDestDb->mutex);
  }


  if( VAR_2->pDestDb ){
    VAR_2->pSrc->nBackup--;
  }
  if( VAR_2->isAttached ){
    VAR_3 = FUNC_6(FUNC_2(VAR_2->pSrc));
    while( *VAR_3!=VAR_2 ){
      VAR_3 = &(*VAR_3)->pNext;
    }
    *VAR_3 = VAR_2->pNext;
  }


  FUNC_3(VAR_2->pDest, VAR_1);


  VAR_5 = (VAR_2->rc==VAR_0) ? VAR_1 : VAR_2->rc;
  FUNC_4(VAR_2->pDestDb, VAR_5, 0);


  if( VAR_2->pDestDb ){
    FUNC_5(VAR_2->pDestDb);
  }
  FUNC_1(VAR_2->pSrc);
  if( VAR_2->pDestDb ){



    FUNC_7(VAR_2);
  }
  FUNC_5(VAR_4);
  return VAR_5;
}
