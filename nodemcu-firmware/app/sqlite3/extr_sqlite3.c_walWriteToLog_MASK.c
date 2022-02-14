
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
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,void*,int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(
  WalWriter *VAR_3,
  void *VAR_4,
  int VAR_5,
  sqlite3_int64 VAR_6
){
  int VAR_7;
  if( VAR_6<VAR_3->iSyncPoint && VAR_6+VAR_5>=VAR_3->iSyncPoint ){
    int VAR_8 = (int)(VAR_3->iSyncPoint - VAR_6);
    VAR_7 = FUNC_2(VAR_3->pFd, VAR_4, VAR_8, VAR_6);
    if( VAR_7 ) return VAR_7;
    VAR_6 += VAR_8;
    VAR_5 -= VAR_8;
    VAR_4 = (void*)(VAR_8 + (char*)VAR_4);
    FUNC_0( VAR_3->syncFlags & (VAR_2|VAR_0) );
    VAR_7 = FUNC_1(VAR_3->pFd, VAR_3->syncFlags & VAR_1);
    if( VAR_5==0 || VAR_7 ) return VAR_7;
  }
  VAR_7 = FUNC_2(VAR_3->pFd, VAR_4, VAR_5, VAR_6);
  return VAR_7;
}
