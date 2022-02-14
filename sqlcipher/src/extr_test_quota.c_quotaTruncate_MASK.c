
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
struct TYPE_12__ {int iSize; } ;
typedef TYPE_3__ quotaGroup ;
struct TYPE_13__ {scalar_t__ iSize; TYPE_3__* pGroup; } ;
typedef TYPE_4__ quotaFile ;
struct TYPE_14__ {TYPE_4__* pFile; } ;
typedef TYPE_5__ quotaConn ;
struct TYPE_10__ {int (* xTruncate ) (TYPE_2__*,scalar_t__) ;} ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_2__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(sqlite3_file *VAR_1, sqlite3_int64 VAR_2){
  quotaConn *VAR_3 = (quotaConn*)VAR_1;
  sqlite3_file *VAR_4 = FUNC_2(VAR_1);
  int VAR_5 = VAR_4->pMethods->xTruncate(VAR_4, VAR_2);
  quotaFile *VAR_6 = VAR_3->pFile;
  quotaGroup *VAR_7;
  if( VAR_5==VAR_0 ){
    FUNC_0();
    VAR_7 = VAR_6->pGroup;
    VAR_7->iSize -= VAR_6->iSize;
    VAR_6->iSize = VAR_2;
    VAR_7->iSize += VAR_2;
    FUNC_1();
  }
  return VAR_5;
}
