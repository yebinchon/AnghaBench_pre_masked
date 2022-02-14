
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
struct TYPE_6__ {scalar_t__ iSize; scalar_t__ iLimit; int pArg; int (* xCallback ) (int ,scalar_t__*,scalar_t__,int ) ;} ;
typedef TYPE_2__ quotaGroup ;
struct TYPE_7__ {scalar_t__ iSize; TYPE_2__* pGroup; int zFilename; } ;
typedef TYPE_3__ quotaFile ;


 scalar_t__ FUNC_0 (int ) ;
 size_t FUNC_1 (void const*,size_t,size_t,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,scalar_t__*,scalar_t__,int ) ;

size_t FUNC_5(
  const void *VAR_0,
  size_t VAR_1,
  size_t VAR_2,
  quota_FILE *VAR_3
){
  sqlite3_int64 VAR_4;
  sqlite3_int64 VAR_5;
  sqlite3_int64 VAR_6;
  quotaFile *VAR_7;
  size_t VAR_8;

  VAR_4 = FUNC_0(VAR_3->f);
  VAR_5 = VAR_4 + VAR_1*VAR_2;
  VAR_7 = VAR_3->pFile;
  if( VAR_7 && VAR_7->iSize<VAR_5 ){
    quotaGroup *VAR_9 = VAR_7->pGroup;
    FUNC_2();
    VAR_6 = VAR_9->iSize - VAR_7->iSize + VAR_5;
    if( VAR_6>VAR_9->iLimit && VAR_9->iLimit>0 ){
      if( VAR_9->xCallback ){
        VAR_9->xCallback(VAR_7->zFilename, &VAR_9->iLimit, VAR_6,
                          VAR_9->pArg);
      }
      if( VAR_6>VAR_9->iLimit && VAR_9->iLimit>0 ){
        VAR_5 = VAR_9->iLimit - VAR_9->iSize + VAR_7->iSize;
        VAR_2 = (size_t)((VAR_5 - VAR_4)/VAR_1);
        VAR_5 = VAR_4 + VAR_1*VAR_2;
        VAR_6 = VAR_9->iSize - VAR_7->iSize + VAR_5;
      }
    }
    VAR_9->iSize = VAR_6;
    VAR_7->iSize = VAR_5;
    FUNC_3();
  }else{
    VAR_7 = 0;
  }
  VAR_8 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3->f);



  if( VAR_8<VAR_2 && VAR_7 ){
    size_t VAR_10 = VAR_8;
    sqlite3_int64 VAR_11 = VAR_4 + VAR_1*VAR_10;
    if( VAR_11<VAR_5 ) VAR_11 = VAR_5;
    FUNC_2();
    VAR_7->pGroup->iSize += VAR_11 - VAR_7->iSize;
    VAR_7->iSize = VAR_11;
    FUNC_3();
  }
  return VAR_8;
}
