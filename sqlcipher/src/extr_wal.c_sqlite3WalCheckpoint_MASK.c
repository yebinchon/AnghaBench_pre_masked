
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;
typedef struct TYPE_15__ TYPE_13__ ;


typedef int u8 ;
typedef int sqlite3 ;
typedef int WalIndexHdr ;
struct TYPE_16__ {scalar_t__ mxFrame; } ;
struct TYPE_18__ {int ckptLock; int writeLock; TYPE_14__ hdr; TYPE_13__* pDbFd; scalar_t__ readOnly; } ;
typedef TYPE_2__ Wal ;
struct TYPE_19__ {scalar_t__ nBackfill; } ;
struct TYPE_17__ {int iVersion; } ;
struct TYPE_15__ {TYPE_1__* pMethods; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_14__*,int ,int) ;
 int FUNC_3 (TYPE_13__*,int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_2__*,int (*) (void*),void*,int ,int) ;
 int FUNC_7 (TYPE_2__*,int *,int,int (*) (void*),void*,int,int *) ;
 TYPE_7__* FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int*) ;
 int FUNC_10 (TYPE_2__*,int ,int) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*,int ,int) ;

int FUNC_13(
  Wal *VAR_7,
  sqlite3 *VAR_8,
  int VAR_9,
  int (*VAR_10)(void*),
  void *VAR_11,
  int VAR_12,
  int VAR_13,
  u8 *VAR_14,
  int *VAR_15,
  int *VAR_16
){
  int VAR_17;
  int VAR_18 = 0;
  int VAR_19 = VAR_9;
  int (*VAR_20)(void*) = VAR_10;

  FUNC_1( VAR_7->ckptLock==0 );
  FUNC_1( VAR_7->writeLock==0 );



  FUNC_1( VAR_9!=VAR_1 || VAR_10==0 );

  if( VAR_7->readOnly ) return VAR_4;
  FUNC_0(("WAL%p: checkpoint begins\n", VAR_7));



  VAR_17 = FUNC_10(VAR_7, VAR_5, 1);
  if( VAR_17 ){






    FUNC_5( VAR_17==VAR_0 );
    FUNC_5( VAR_10!=0 );
    return VAR_17;
  }
  VAR_7->ckptLock = 1;
  if( VAR_9!=VAR_1 ){
    VAR_17 = FUNC_6(VAR_7, VAR_10, VAR_11, VAR_6, 1);
    if( VAR_17==VAR_3 ){
      VAR_7->writeLock = 1;
    }else if( VAR_17==VAR_0 ){
      VAR_19 = VAR_1;
      VAR_20 = 0;
      VAR_17 = VAR_3;
    }
  }


  if( VAR_17==VAR_3 ){
    VAR_17 = FUNC_9(VAR_7, &VAR_18);
    if( VAR_18 && VAR_7->pDbFd->pMethods->iVersion>=3 ){
      FUNC_3(VAR_7->pDbFd, 0, 0);
    }
  }


  if( VAR_17==VAR_3 ){

    if( VAR_7->hdr.mxFrame && FUNC_11(VAR_7)!=VAR_13 ){
      VAR_17 = VAR_2;
    }else{
      VAR_17 = FUNC_7(VAR_7, VAR_8, VAR_19, VAR_20, VAR_11, VAR_12, VAR_14);
    }


    if( VAR_17==VAR_3 || VAR_17==VAR_0 ){
      if( VAR_15 ) *VAR_15 = (int)VAR_7->hdr.mxFrame;
      if( VAR_16 ) *VAR_16 = (int)(FUNC_8(VAR_7)->nBackfill);
    }
  }

  if( VAR_18 ){






    FUNC_2(&VAR_7->hdr, 0, sizeof(WalIndexHdr));
  }


  FUNC_4(VAR_7);
  FUNC_12(VAR_7, VAR_5, 1);
  VAR_7->ckptLock = 0;
  FUNC_0(("WAL%p: checkpoint %s\n", VAR_7, VAR_17 ? "failed" : "ok"));
  return (VAR_17==VAR_3 && VAR_9!=VAR_19 ? VAR_0 : VAR_17);
}
