
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int zMbcsName; TYPE_2__* pFile; int f; } ;
typedef TYPE_1__ quota_FILE ;
typedef int quotaGroup ;
struct TYPE_9__ {scalar_t__ nRef; int zFilename; scalar_t__ deleteOnClose; int * pGroup; } ;
typedef TYPE_2__ quotaFile ;
struct TYPE_11__ {TYPE_3__* pOrigVfs; } ;
struct TYPE_10__ {int (* xDelete ) (TYPE_3__*,int ,int ) ;} ;


 int FUNC_0 (int ) ;
 TYPE_7__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_3__*,int ,int ) ;

int FUNC_8(quota_FILE *VAR_1){
  int VAR_2;
  quotaFile *VAR_3;
  VAR_2 = FUNC_0(VAR_1->f);
  VAR_3 = VAR_1->pFile;
  if( VAR_3 ){
    FUNC_1();
    VAR_3->nRef--;
    if( VAR_3->nRef==0 ){
      quotaGroup *VAR_4 = VAR_3->pGroup;
      if( VAR_3->deleteOnClose ){
        VAR_0.pOrigVfs->xDelete(VAR_0.pOrigVfs, VAR_3->zFilename, 0);
        FUNC_4(VAR_3);
      }
      FUNC_2(VAR_4);
    }
    FUNC_3();
  }



  FUNC_6(VAR_1);
  return VAR_2;
}
