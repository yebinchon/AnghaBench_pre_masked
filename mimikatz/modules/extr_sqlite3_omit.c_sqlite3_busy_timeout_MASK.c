
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int bExtraFileArg; } ;
struct TYPE_7__ {int busyTimeout; TYPE_1__ busyHandler; } ;
typedef TYPE_2__ sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int (*) (void*,int),void*) ;
 scalar_t__ VAR_2 ;

int FUNC_2(sqlite3 *VAR_3, int VAR_4){



  if( VAR_4>0 ){
    FUNC_1(VAR_3, (int(*)(void*,int))VAR_2,
                             (void*)VAR_3);
    VAR_3->busyTimeout = VAR_4;
    VAR_3->busyHandler.bExtraFileArg = 1;
  }else{
    FUNC_1(VAR_3, 0, 0);
  }
  return VAR_1;
}
