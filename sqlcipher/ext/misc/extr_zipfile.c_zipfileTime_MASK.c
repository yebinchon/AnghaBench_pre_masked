
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_5__ {int iVersion; int (* xCurrentTime ) (TYPE_1__*,double*) ;int (* xCurrentTimeInt64 ) (TYPE_1__*,int*) ;} ;
typedef TYPE_1__ sqlite3_vfs ;
typedef int i64 ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int*) ;
 int FUNC_2 (TYPE_1__*,double*) ;

__attribute__((used)) static u32 FUNC_3(void){
  sqlite3_vfs *VAR_0 = FUNC_0(0);
  u32 VAR_1;
  if( VAR_0->iVersion>=2 && VAR_0->xCurrentTimeInt64 ){
    i64 VAR_2;
    VAR_0->xCurrentTimeInt64(VAR_0, &VAR_2);
    VAR_1 = (u32)((VAR_2/1000) - ((i64)24405875 * 8640));
  }else{
    double VAR_3;
    VAR_0->xCurrentTime(VAR_0, &VAR_3);
    VAR_1 = (u32)((VAR_3 - 2440587.5) * 86400);
  }
  return VAR_1;
}
