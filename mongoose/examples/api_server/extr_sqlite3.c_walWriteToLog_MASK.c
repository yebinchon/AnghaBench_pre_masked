
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ sqlite3_int64 ;
struct TYPE_3__ {scalar_t__ iSyncPoint; int syncFlags; int pFd; } ;
typedef TYPE_1__ WalWriter ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,void*,int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(
  WalWriter *VAR_2,
  void *VAR_3,
  int VAR_4,
  sqlite3_int64 VAR_5
){
  int VAR_6;
  if( VAR_5<VAR_2->iSyncPoint && VAR_5+VAR_4>=VAR_2->iSyncPoint ){
    int VAR_7 = (int)(VAR_2->iSyncPoint - VAR_5);
    VAR_6 = FUNC_2(VAR_2->pFd, VAR_3, VAR_7, VAR_5);
    if( VAR_6 ) return VAR_6;
    VAR_5 += VAR_7;
    VAR_4 -= VAR_7;
    VAR_3 = (void*)(VAR_7 + (char*)VAR_3);
    FUNC_0( VAR_2->syncFlags & (VAR_1|VAR_0) );
    VAR_6 = FUNC_1(VAR_2->pFd, VAR_2->syncFlags);
    if( VAR_4==0 || VAR_6 ) return VAR_6;
  }
  VAR_6 = FUNC_2(VAR_2->pFd, VAR_3, VAR_4, VAR_5);
  return VAR_6;
}
