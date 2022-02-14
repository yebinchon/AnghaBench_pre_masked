
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ nLock; scalar_t__ bProcessLock; int pLockMutex; } ;
typedef TYPE_1__ unixInodeInfo ;
struct TYPE_8__ {TYPE_1__* pInode; } ;
typedef TYPE_2__ unixFile ;
typedef int sqlite3_file ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 () ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_11(sqlite3_file *VAR_2){
  int VAR_3 = VAR_1;
  unixFile *VAR_4 = (unixFile *)VAR_2;
  unixInodeInfo *VAR_5 = VAR_4->pInode;

  FUNC_0( VAR_5!=0 );
  FUNC_10(VAR_4);
  FUNC_9(VAR_2, VAR_0);
  FUNC_0( FUNC_7(VAR_4) );
  FUNC_6();




  FUNC_0( VAR_4->pInode->nLock>0 || VAR_4->pInode->bProcessLock==0 );
  FUNC_4(VAR_5->pLockMutex);
  if( VAR_5->nLock ){





    FUNC_3(VAR_4);
  }
  FUNC_5(VAR_5->pLockMutex);
  FUNC_2(VAR_4);
  VAR_3 = FUNC_1(VAR_2);
  FUNC_8();
  return VAR_3;
}
