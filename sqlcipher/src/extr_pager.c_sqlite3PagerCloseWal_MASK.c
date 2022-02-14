
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int sqlite3 ;
struct TYPE_8__ {scalar_t__ journalMode; int exclusiveMode; scalar_t__ pWal; scalar_t__ pTmpSpace; int pageSize; int walSyncFlags; int zWal; int pVfs; } ;
typedef TYPE_1__ Pager ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (int ,int ,int ,int*) ;
 int FUNC_7 (scalar_t__,int *,int ,int ,int *) ;

int FUNC_8(Pager *VAR_4, sqlite3 *VAR_5){
  int VAR_6 = VAR_3;

  FUNC_0( VAR_4->journalMode==VAR_0 );





  if( !VAR_4->pWal ){
    int VAR_7 = 0;
    VAR_6 = FUNC_3(VAR_4, VAR_1);
    if( VAR_6==VAR_3 ){
      VAR_6 = FUNC_6(
          VAR_4->pVfs, VAR_4->zWal, VAR_2, &VAR_7
      );
    }
    if( VAR_6==VAR_3 && VAR_7 ){
      VAR_6 = FUNC_4(VAR_4);
    }
  }




  if( VAR_6==VAR_3 && VAR_4->pWal ){
    VAR_6 = FUNC_1(VAR_4);
    if( VAR_6==VAR_3 ){
      VAR_6 = FUNC_7(VAR_4->pWal, VAR_5, VAR_4->walSyncFlags,
                           VAR_4->pageSize, (u8*)VAR_4->pTmpSpace);
      VAR_4->pWal = 0;
      FUNC_2(VAR_4);
      if( VAR_6 && !VAR_4->exclusiveMode ) FUNC_5(VAR_4, VAR_1);
    }
  }
  return VAR_6;
}
