
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* pMethods; } ;
typedef TYPE_2__ sqlite3_file ;
struct TYPE_5__ {int (* xShmLock ) (TYPE_2__*,int,int,int) ;} ;


 int FUNC_0 (TYPE_2__*,int,int,int) ;

int FUNC_1(sqlite3_file *VAR_0, int VAR_1, int VAR_2, int VAR_3){
  return VAR_0->pMethods->xShmLock(VAR_0, VAR_1, VAR_2, VAR_3);
}
