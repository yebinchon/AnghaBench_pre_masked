
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_mutex ;
struct TYPE_3__ {int * (* xMutexAlloc ) (int) ;} ;
struct TYPE_4__ {TYPE_1__ mutex; } ;


 TYPE_2__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int * FUNC_1 (int) ;

sqlite3_mutex *FUNC_2(int VAR_1){

  if( FUNC_0() ) return 0;

  return VAR_0.mutex.xMutexAlloc(VAR_1);
}
