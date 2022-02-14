
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ sqlite3_int64 ;
struct TYPE_11__ {TYPE_1__* pMethods; } ;
typedef TYPE_2__ sqlite3_file ;
struct TYPE_12__ {scalar_t__ iSize; scalar_t__ iLimit; int pArg; int (* xCallback ) (int ,scalar_t__*,scalar_t__,int ) ;} ;
typedef TYPE_3__ quotaGroup ;
struct TYPE_13__ {scalar_t__ iSize; int zFilename; TYPE_3__* pGroup; } ;
typedef TYPE_4__ quotaFile ;
struct TYPE_14__ {TYPE_4__* pFile; } ;
typedef TYPE_5__ quotaConn ;
struct TYPE_10__ {int (* xWrite ) (TYPE_2__*,void const*,int,scalar_t__) ;} ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_2__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,scalar_t__*,scalar_t__,int ) ;
 int FUNC_4 (TYPE_2__*,void const*,int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(
  sqlite3_file *VAR_1,
  const void *VAR_2,
  int VAR_3,
  sqlite3_int64 VAR_4
){
  quotaConn *VAR_5 = (quotaConn*)VAR_1;
  sqlite3_file *VAR_6 = FUNC_2(VAR_1);
  sqlite3_int64 VAR_7 = VAR_4+VAR_3;
  quotaGroup *VAR_8;
  quotaFile *VAR_9 = VAR_5->pFile;
  sqlite3_int64 VAR_10;

  if( VAR_9->iSize<VAR_7 ){
    VAR_8 = VAR_9->pGroup;
    FUNC_0();
    VAR_10 = VAR_8->iSize - VAR_9->iSize + VAR_7;
    if( VAR_10>VAR_8->iLimit && VAR_8->iLimit>0 ){
      if( VAR_8->xCallback ){
        VAR_8->xCallback(VAR_9->zFilename, &VAR_8->iLimit, VAR_10,
                          VAR_8->pArg);
      }
      if( VAR_10>VAR_8->iLimit && VAR_8->iLimit>0 ){
        FUNC_1();
        return VAR_0;
      }
    }
    VAR_8->iSize = VAR_10;
    VAR_9->iSize = VAR_7;
    FUNC_1();
  }
  return VAR_6->pMethods->xWrite(VAR_6, VAR_2, VAR_3, VAR_4);
}
