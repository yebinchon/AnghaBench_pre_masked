
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_14__ {TYPE_1__* pMethods; } ;
typedef TYPE_2__ sqlite3_file ;
typedef int quotaGroup ;
struct TYPE_15__ {scalar_t__ nRef; int zFilename; scalar_t__ deleteOnClose; int * pGroup; } ;
typedef TYPE_3__ quotaFile ;
struct TYPE_16__ {TYPE_3__* pFile; } ;
typedef TYPE_4__ quotaConn ;
struct TYPE_17__ {int (* xDelete ) (TYPE_5__*,int ,int ) ;} ;
struct TYPE_13__ {int (* xClose ) (TYPE_2__*) ;} ;
struct TYPE_12__ {TYPE_5__* pOrigVfs; } ;


 TYPE_11__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_2__* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_5__*,int ,int ) ;

__attribute__((used)) static int FUNC_7(sqlite3_file *VAR_1){
  quotaConn *VAR_2 = (quotaConn*)VAR_1;
  quotaFile *VAR_3 = VAR_2->pFile;
  sqlite3_file *VAR_4 = FUNC_4(VAR_1);
  int VAR_5;
  VAR_5 = VAR_4->pMethods->xClose(VAR_4);
  FUNC_0();
  VAR_3->nRef--;
  if( VAR_3->nRef==0 ){
    quotaGroup *VAR_6 = VAR_3->pGroup;
    if( VAR_3->deleteOnClose ){
      VAR_0.pOrigVfs->xDelete(VAR_0.pOrigVfs, VAR_3->zFilename, 0);
      FUNC_3(VAR_3);
    }
    FUNC_1(VAR_6);
  }
  FUNC_2();
  return VAR_5;
}
