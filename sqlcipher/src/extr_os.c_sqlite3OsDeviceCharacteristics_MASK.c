
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* pMethods; } ;
typedef TYPE_2__ sqlite3_file ;
struct TYPE_5__ {int (* xDeviceCharacteristics ) (TYPE_2__*) ;} ;


 int FUNC_0 (TYPE_2__*) ;

int FUNC_1(sqlite3_file *VAR_0){
  return VAR_0->pMethods->xDeviceCharacteristics(VAR_0);
}
