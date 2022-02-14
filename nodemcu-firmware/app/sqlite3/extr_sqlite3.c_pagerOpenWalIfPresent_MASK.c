
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ eState; scalar_t__ eLock; scalar_t__ journalMode; int pPCache; int zWal; int pVfs; int tempFile; } ;
typedef scalar_t__ Pgno ;
typedef TYPE_1__ Pager ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,scalar_t__*) ;
 int FUNC_2 (int ,int ,int ,int*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(Pager *VAR_7){
  int VAR_8 = VAR_6;
  FUNC_0( VAR_7->eState==VAR_2 );
  FUNC_0( VAR_7->eLock>=VAR_3 );

  if( !VAR_7->tempFile ){
    int VAR_9;
    Pgno VAR_10;

    VAR_8 = FUNC_1(VAR_7, &VAR_10);
    if( VAR_8 ) return VAR_8;
    if( VAR_10==0 ){
      VAR_8 = FUNC_3(VAR_7->pVfs, VAR_7->zWal, 0);
      if( VAR_8==VAR_5 ) VAR_8 = VAR_6;
      VAR_9 = 0;
    }else{
      VAR_8 = FUNC_2(
          VAR_7->pVfs, VAR_7->zWal, VAR_4, &VAR_9
      );
    }
    if( VAR_8==VAR_6 ){
      if( VAR_9 ){
        FUNC_6( FUNC_5(VAR_7->pPCache)==0 );
        VAR_8 = FUNC_4(VAR_7, 0);
      }else if( VAR_7->journalMode==VAR_1 ){
        VAR_7->journalMode = VAR_0;
      }
    }
  }
  return VAR_8;
}
