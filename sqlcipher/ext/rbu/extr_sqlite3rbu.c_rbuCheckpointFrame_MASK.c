
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


struct TYPE_14__ {int pgsz; int aBuf; int rc; TYPE_2__* pTargetFd; } ;
typedef TYPE_4__ sqlite3rbu ;
struct TYPE_15__ {TYPE_3__* pMethods; } ;
typedef TYPE_5__ sqlite3_file ;
typedef int i64 ;
struct TYPE_16__ {int iWalFrame; int iDbPage; } ;
struct TYPE_13__ {int (* xWrite ) (TYPE_5__*,int ,int,int) ;int (* xRead ) (TYPE_5__*,int ,int,int) ;} ;
struct TYPE_12__ {TYPE_5__* pReal; TYPE_1__* pWalFd; } ;
struct TYPE_11__ {TYPE_5__* pReal; } ;
typedef TYPE_6__ RbuFrame ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*,int ,int,int) ;
 int FUNC_2 (TYPE_5__*,int ,int,int) ;

__attribute__((used)) static void FUNC_3(sqlite3rbu *VAR_1, RbuFrame *VAR_2){
  sqlite3_file *VAR_3 = VAR_1->pTargetFd->pWalFd->pReal;
  sqlite3_file *VAR_4 = VAR_1->pTargetFd->pReal;
  i64 VAR_5;

  FUNC_0( VAR_1->rc==VAR_0 );
  VAR_5 = (i64)(VAR_2->iWalFrame-1) * (VAR_1->pgsz + 24) + 32 + 24;
  VAR_1->rc = VAR_3->pMethods->xRead(VAR_3, VAR_1->aBuf, VAR_1->pgsz, VAR_5);
  if( VAR_1->rc ) return;

  VAR_5 = (i64)(VAR_2->iDbPage-1) * VAR_1->pgsz;
  VAR_1->rc = VAR_4->pMethods->xWrite(VAR_4, VAR_1->aBuf, VAR_1->pgsz, VAR_5);
}
