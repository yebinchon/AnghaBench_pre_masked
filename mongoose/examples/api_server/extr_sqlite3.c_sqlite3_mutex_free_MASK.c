
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_mutex ;
struct TYPE_3__ {int (* xMutexFree ) (int *) ;} ;
struct TYPE_4__ {TYPE_1__ mutex; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(sqlite3_mutex *VAR_1){
  if( VAR_1 ){
    VAR_0.mutex.xMutexFree(VAR_1);
  }
}
