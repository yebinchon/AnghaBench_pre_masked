
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ isMutexInit; scalar_t__ isMallocInit; scalar_t__ isPCacheInit; scalar_t__ isInit; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int,int) ;

int FUNC_6(void){







  if( VAR_1.isInit ){




    FUNC_3();
    FUNC_4();
    VAR_1.isInit = 0;
  }
  if( VAR_1.isPCacheInit ){
    FUNC_2();
    VAR_1.isPCacheInit = 0;
  }
  if( VAR_1.isMallocInit ){
    FUNC_0();
    VAR_1.isMallocInit = 0;
    VAR_2 = 0;
    VAR_3 = 0;

  }
  if( VAR_1.isMutexInit ){
    FUNC_1();
    VAR_1.isMutexInit = 0;
  }

  return VAR_0;
}
