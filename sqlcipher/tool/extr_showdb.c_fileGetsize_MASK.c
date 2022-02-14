
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stat {scalar_t__ st_size; } ;
typedef scalar_t__ sqlite3_int64 ;
struct TYPE_6__ {scalar_t__ bRaw; int dbfd; TYPE_2__* pFd; } ;
struct TYPE_5__ {TYPE_1__* pMethods; } ;
struct TYPE_4__ {int (* xFileSize ) (TYPE_2__*,scalar_t__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,struct stat*) ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_2__*,scalar_t__*) ;

__attribute__((used)) static sqlite3_int64 FUNC_4(void){
  sqlite3_int64 VAR_3 = 0;
  if( VAR_1.bRaw==0 ){
    int VAR_4 = VAR_1.pFd->pMethods->xFileSize(VAR_1.pFd, &VAR_3);
    if( VAR_4!=VAR_0 ){
      FUNC_1(VAR_2, "error in xFileSize() - %d\n", VAR_4);
      FUNC_0(1);
    }
  }else{
    struct stat VAR_5;
    FUNC_2(VAR_1.dbfd, &VAR_5);
    VAR_3 = (sqlite3_int64)(VAR_5.st_size);
  }
  return VAR_3;
}
