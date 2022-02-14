
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ sqlite3_int64 ;
struct TYPE_5__ {int f; TYPE_3__* pFile; } ;
typedef TYPE_1__ quota_FILE ;
struct TYPE_6__ {int iSize; } ;
typedef TYPE_2__ quotaGroup ;
struct TYPE_7__ {scalar_t__ iSize; TYPE_2__* pGroup; } ;
typedef TYPE_3__ quotaFile ;


 int FUNC_0 (int ,long) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

int FUNC_7(quota_FILE *VAR_0, sqlite3_int64 VAR_1){
  quotaFile *VAR_2 = VAR_0->pFile;
  int VAR_3;
  if( (VAR_2 = VAR_0->pFile)!=0 && VAR_2->iSize<VAR_1 ){
    quotaGroup *VAR_4;
    if( VAR_2->iSize<VAR_1 ){


      return -1;
    }
    VAR_4 = VAR_2->pGroup;
    FUNC_5();
    VAR_4->iSize += VAR_1 - VAR_2->iSize;
    FUNC_6();
  }
  if( VAR_2 && VAR_3==0 ){
    quotaGroup *VAR_5 = VAR_2->pGroup;
    FUNC_5();
    VAR_5->iSize += VAR_1 - VAR_2->iSize;
    VAR_2->iSize = VAR_1;
    FUNC_6();
  }
  return VAR_3;
}
