
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_file ;
struct TYPE_5__ {TYPE_3__* pReal; } ;
typedef TYPE_2__ rbu_file ;
struct TYPE_6__ {TYPE_1__* pMethods; } ;
struct TYPE_4__ {int (* xDeviceCharacteristics ) (TYPE_3__*) ;} ;


 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_1(sqlite3_file *VAR_0){
  rbu_file *VAR_1 = (rbu_file *)VAR_0;
  return VAR_1->pReal->pMethods->xDeviceCharacteristics(VAR_1->pReal);
}
