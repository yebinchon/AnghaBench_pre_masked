
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_12__ {int iDb; int iTab; int isWriteLock; char const* zLockName; } ;
typedef TYPE_2__ TableLock ;
struct TYPE_14__ {TYPE_1__* aDb; } ;
struct TYPE_13__ {int nTableLock; TYPE_7__* db; TYPE_2__* aTableLock; } ;
struct TYPE_11__ {int pBt; } ;
typedef TYPE_3__ Parse ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (TYPE_7__*,TYPE_2__*,int) ;
 int FUNC_3 (TYPE_7__*) ;
 TYPE_3__* FUNC_4 (TYPE_3__*) ;

void FUNC_5(
  Parse *VAR_0,
  int VAR_1,
  int VAR_2,
  u8 VAR_3,
  const char *VAR_4
){
  Parse *VAR_5 = FUNC_4(VAR_0);
  int VAR_6;
  int VAR_7;
  TableLock *VAR_8;
  FUNC_0( VAR_1>=0 );

  if( VAR_1==1 ) return;
  if( !FUNC_1(VAR_0->db->aDb[VAR_1].pBt) ) return;
  for(VAR_6=0; VAR_6<VAR_5->nTableLock; VAR_6++){
    VAR_8 = &VAR_5->aTableLock[VAR_6];
    if( VAR_8->iDb==VAR_1 && VAR_8->iTab==VAR_2 ){
      VAR_8->isWriteLock = (VAR_8->isWriteLock || VAR_3);
      return;
    }
  }

  VAR_7 = sizeof(TableLock) * (VAR_5->nTableLock+1);
  VAR_5->aTableLock =
      FUNC_2(VAR_5->db, VAR_5->aTableLock, VAR_7);
  if( VAR_5->aTableLock ){
    VAR_8 = &VAR_5->aTableLock[VAR_5->nTableLock++];
    VAR_8->iDb = VAR_1;
    VAR_8->iTab = VAR_2;
    VAR_8->isWriteLock = VAR_3;
    VAR_8->zLockName = VAR_4;
  }else{
    VAR_5->nTableLock = 0;
    FUNC_3(VAR_5->db);
  }
}
