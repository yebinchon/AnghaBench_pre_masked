
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ pDest; int iNext; TYPE_1__* pSrc; scalar_t__ isAttached; TYPE_3__* pSrcDb; TYPE_3__* pDestDb; } ;
typedef TYPE_2__ sqlite3_backup ;
struct TYPE_16__ {int mutex; } ;
typedef TYPE_3__ sqlite3 ;
struct TYPE_14__ {int nBackup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_3__*,scalar_t__) ;
 void* FUNC_1 (TYPE_3__*,TYPE_3__*,char const*) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*,int ,char*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

sqlite3_backup *FUNC_9(
  sqlite3* VAR_4,
  const char *VAR_5,
  sqlite3* VAR_6,
  const char *VAR_7
){
  sqlite3_backup *VAR_8;
  FUNC_7(VAR_6->mutex);
  FUNC_7(VAR_4->mutex);

  if( VAR_6==VAR_4 ){
    FUNC_3(
        VAR_4, VAR_0, "source and destination must be distinct"
    );
    VAR_8 = 0;
  }else {




    VAR_8 = (sqlite3_backup *)FUNC_4(sizeof(sqlite3_backup));
    if( !VAR_8 ){
      FUNC_2(VAR_4, VAR_2);
    }
  }


  if( VAR_8 ){
    VAR_8->pSrc = FUNC_1(VAR_4, VAR_6, VAR_7);
    VAR_8->pDest = FUNC_1(VAR_4, VAR_4, VAR_5);
    VAR_8->pDestDb = VAR_4;
    VAR_8->pSrcDb = VAR_6;
    VAR_8->iNext = 1;
    VAR_8->isAttached = 0;

    if( 0==VAR_8->pSrc || 0==VAR_8->pDest
     || FUNC_0(VAR_4, VAR_8->pDest)!=VAR_3
     ){





      FUNC_6(VAR_8);
      VAR_8 = 0;
    }
  }
  if( VAR_8 ){
    VAR_8->pSrc->nBackup++;
  }

  FUNC_8(VAR_4->mutex);
  FUNC_8(VAR_6->mutex);
  return VAR_8;
}
