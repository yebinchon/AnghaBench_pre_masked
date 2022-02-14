
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sqlite3_file ;
struct TYPE_9__ {scalar_t__ nRef; TYPE_5__* pFile; TYPE_1__** ppThis; TYPE_1__* pNext; } ;
typedef TYPE_3__ fs_real_file ;
struct TYPE_10__ {TYPE_3__* pReal; } ;
typedef TYPE_4__ fs_file ;
struct TYPE_11__ {TYPE_2__* pMethods; } ;
struct TYPE_8__ {int (* xClose ) (TYPE_5__*) ;} ;
struct TYPE_7__ {struct TYPE_7__** ppThis; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_3(sqlite3_file *VAR_1){
  int VAR_2 = VAR_0;
  fs_file *VAR_3 = (fs_file *)VAR_1;
  fs_real_file *VAR_4 = VAR_3->pReal;


  VAR_4->nRef--;
  FUNC_0(VAR_4->nRef>=0);


  if( VAR_4->nRef==0 ){
    *VAR_4->ppThis = VAR_4->pNext;
    if( VAR_4->pNext ){
      VAR_4->pNext->ppThis = VAR_4->ppThis;
    }
    VAR_2 = VAR_4->pFile->pMethods->xClose(VAR_4->pFile);
    FUNC_1(VAR_4);
  }

  return VAR_2;
}
