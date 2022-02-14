
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* xFunc ) (void*,int) ;scalar_t__ nBusy; void* pArg; } ;
struct TYPE_5__ {int mutex; scalar_t__ busyTimeout; TYPE_1__ busyHandler; } ;
typedef TYPE_2__ sqlite3 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

int FUNC_2(
  sqlite3 *VAR_1,
  int (*VAR_2)(void*,int),
  void *VAR_3
){
  FUNC_0(VAR_1->mutex);
  VAR_1->busyHandler.xFunc = VAR_2;
  VAR_1->busyHandler.pArg = VAR_3;
  VAR_1->busyHandler.nBusy = 0;
  VAR_1->busyTimeout = 0;
  FUNC_1(VAR_1->mutex);
  return VAR_0;
}
