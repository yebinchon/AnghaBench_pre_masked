
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int iVersion; int (* xCurrentTimeInt64 ) (TYPE_1__*,scalar_t__*) ;int (* xCurrentTime ) (TYPE_1__*,double*) ;} ;
typedef TYPE_1__ sqlite3_vfs ;
typedef scalar_t__ sqlite3_int64 ;


 int FUNC_0 (TYPE_1__*,scalar_t__*) ;
 int FUNC_1 (TYPE_1__*,double*) ;

int FUNC_2(sqlite3_vfs *VAR_0, sqlite3_int64 *VAR_1){
  int VAR_2;






  if( VAR_0->iVersion>=2 && VAR_0->xCurrentTimeInt64 ){
    VAR_2 = VAR_0->xCurrentTimeInt64(VAR_0, VAR_1);
  }else{
    double VAR_3;
    VAR_2 = VAR_0->xCurrentTime(VAR_0, &VAR_3);
    *VAR_1 = (sqlite3_int64)(VAR_3*86400000.0);
  }
  return VAR_2;
}
