
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_vtab ;
struct TYPE_6__ {TYPE_3__* pFd; } ;
typedef TYPE_2__ VfslogVtab ;
struct TYPE_7__ {TYPE_1__* pMethods; } ;
struct TYPE_5__ {int (* xClose ) (TYPE_3__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_2(sqlite3_vtab *VAR_1){
  VfslogVtab *VAR_2 = (VfslogVtab *)VAR_1;
  if( VAR_2->pFd->pMethods ){
    VAR_2->pFd->pMethods->xClose(VAR_2->pFd);
    VAR_2->pFd->pMethods = 0;
  }
  FUNC_0(VAR_2);
  return VAR_0;
}
