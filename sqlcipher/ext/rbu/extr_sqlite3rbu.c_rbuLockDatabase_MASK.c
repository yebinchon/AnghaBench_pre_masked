
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ rc; TYPE_1__* pTargetFd; } ;
typedef TYPE_3__ sqlite3rbu ;
struct TYPE_11__ {TYPE_2__* pMethods; } ;
typedef TYPE_4__ sqlite3_file ;
struct TYPE_9__ {scalar_t__ (* xLock ) (TYPE_4__*,int ) ;} ;
struct TYPE_8__ {TYPE_4__* pReal; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_4__*,int ) ;

__attribute__((used)) static void FUNC_3(sqlite3rbu *VAR_3){
  sqlite3_file *VAR_4 = VAR_3->pTargetFd->pReal;
  FUNC_0( VAR_3->rc==VAR_2 );
  VAR_3->rc = VAR_4->pMethods->xLock(VAR_4, VAR_1);
  if( VAR_3->rc==VAR_2 ){
    VAR_3->rc = VAR_4->pMethods->xLock(VAR_4, VAR_0);
  }
}
