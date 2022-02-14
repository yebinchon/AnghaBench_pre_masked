
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_5__* pInode; } ;
typedef TYPE_1__ unixFile ;
typedef int sqlite3_file ;
struct TYPE_7__ {scalar_t__ nLock; scalar_t__ bProcessLock; } ;


 scalar_t__ FUNC_0 (TYPE_5__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_9(sqlite3_file *VAR_2){
  int VAR_3 = VAR_1;
  unixFile *VAR_4 = (unixFile *)VAR_2;
  FUNC_8(VAR_4);
  FUNC_7(VAR_2, VAR_0);
  FUNC_5();




  FUNC_1( VAR_4->pInode->nLock>0 || VAR_4->pInode->bProcessLock==0 );
  if( FUNC_0(VAR_4->pInode) && VAR_4->pInode->nLock ){





    FUNC_4(VAR_4);
  }
  FUNC_3(VAR_4);
  VAR_3 = FUNC_2(VAR_2);
  FUNC_6();
  return VAR_3;
}
