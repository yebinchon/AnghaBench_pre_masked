
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_file ;
struct TYPE_5__ {TYPE_3__* pReal; } ;
typedef TYPE_2__ VStatFile ;
struct TYPE_6__ {TYPE_1__* pMethods; } ;
struct TYPE_4__ {int (* xShmLock ) (TYPE_3__*,int,int,int) ;} ;


 int FUNC_0 (TYPE_3__*,int,int,int) ;

__attribute__((used)) static int FUNC_1(sqlite3_file *VAR_0, int VAR_1, int VAR_2, int VAR_3){
  VStatFile *VAR_4 = (VStatFile *)VAR_0;
  return VAR_4->pReal->pMethods->xShmLock(VAR_4->pReal, VAR_1, VAR_2, VAR_3);
}
