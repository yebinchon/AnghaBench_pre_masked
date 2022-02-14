
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* xMutexInit ) () ;} ;
struct TYPE_4__ {int disableInit; int isInit; TYPE_1__ m; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1(void){
  int VAR_1;
  if( VAR_0.disableInit ) return VAR_0.disableInit;
  VAR_1 = VAR_0.m.xMutexInit();
  VAR_0.isInit = 1;
  return VAR_1;
}
