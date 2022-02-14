
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_mutex ;
struct TYPE_3__ {int * (* xMutexAlloc ) (int) ;} ;
struct TYPE_4__ {TYPE_1__ mutex; } ;


 int * FUNC_0 (int) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static sqlite3_mutex *FUNC_1(int VAR_1){
  return VAR_0.mutex.xMutexAlloc(VAR_1);
}
