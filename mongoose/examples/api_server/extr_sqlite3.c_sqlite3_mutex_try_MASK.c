
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_mutex ;
struct TYPE_3__ {int (* xMutexTry ) (int *) ;} ;
struct TYPE_4__ {TYPE_1__ mutex; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int *) ;

int FUNC_1(sqlite3_mutex *VAR_2){
  int VAR_3 = VAR_0;
  if( VAR_2 ){
    return VAR_1.mutex.xMutexTry(VAR_2);
  }
  return VAR_3;
}
